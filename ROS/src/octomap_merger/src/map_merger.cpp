#include <octomap_merger.h>

// void merge_maps(OcTreeStamped *tree1, OcTree *tree2,OcTree *tree3, OcTree *conflict) {
//   // Expand tree so we search all nodes
//   tree2->expand();

//   // traverse nodes in tree2 to add them to tree1
//   for (OcTree::leaf_iterator it = tree2->begin_leafs(); it != tree2->end_leafs(); ++it) {
//     OcTreeKey nodeKey = it.getKey();
//     OcTreeNodeStamped *nodeIn1 = tree1->search(nodeKey);
//     if (nodeIn1 != NULL) {
//         // the priority is always towards the safest option. highest probabilities are given priority
//         double val1=nodeIn1->getOccupancy();
//         double val2=it->getOccupancy();
//         if (nodeIn1->getLogOdds()==100 ||nodeIn1->getLogOdds()==-100) continue;
//         if (val1<val2)
//           tree1->updateNode(nodeKey, it->getLogOdds());
//     } else {
//       OcTreeNodeStamped *newNode = tree1->setNodeValue(nodeKey, it->getLogOdds());
//     }
//   }
//     // traverse nodes in tree2 to add them to tree1
//   for (OcTree::leaf_iterator it = tree3->begin_leafs(); it != tree3->end_leafs(); ++it) {
//     OcTreeKey nodeKey = it.getKey();
//     OcTreeNodeStamped *nodeIn1 = tree1->search(nodeKey);
//     if (nodeIn1 != NULL) {
//         // the priority is always towards the safest option. highest probabilities are given priority
//         double val1=nodeIn1->getOccupancy();
//         double val2=it->getOccupancy();
//         if (nodeIn1->getLogOdds()==100|| nodeIn1->getLogOdds()==-100) continue;
//         if((val1>0.5 && val2<0.5)|| (val1<0.5&& val2>0.5)) conflict->setNodeValue(nodeKey,octomap::logodds(0.9));
//         if (val1<val2)
//           tree1->updateNode(nodeKey, it->getLogOdds());
//     } else {
//       OcTreeNodeStamped *newNode = tree1->setNodeValue(nodeKey, it->getLogOdds());
//     }
//   }

// }



void merge_maps(OcTreeStamped *tree1, OcTree *tree2,OcTree *tree3, OcTree *conflict) {
  
  OcTree* tree_temp = new OcTree(tree1->getResolution());
  // Expand tree so we search all nodes
  tree2->expand();

  // first merge the 2 agents map
  for (OcTree::leaf_iterator it = tree2->begin_leafs(); it != tree2->end_leafs(); ++it) {
    OcTreeKey nodeKey = it.getKey();
    OcTreeNode *nodeIn1 = tree3->search(nodeKey);
    if (nodeIn1 != NULL) {
        // the priority is always towards the safest option. highest probabilities are given priority
        double val1=nodeIn1->getOccupancy();
        double val2=it->getOccupancy();
        if((val1>0.5 && val2<0.5)|| (val1<0.5&& val2>0.5)) conflict->setNodeValue(nodeKey,octomap::logodds(0.9));
        if (val1<val2)
          tree_temp->updateNode(nodeKey, it->getLogOdds());
          else tree_temp->updateNode(nodeKey, nodeIn1->getLogOdds());
    } else {
      // if the node is unknown for the robot, only add it if the hololens says it is occupied.
      if (it->getOccupancy()>0.5)
      tree_temp->setNodeValue(nodeKey, it->getLogOdds());
    }
  }

  for (OcTree::leaf_iterator it = tree3->begin_leafs(); it != tree3->end_leafs(); ++it) {
    OcTreeKey nodeKey = it.getKey();
    OcTreeNode *nodeIn1 = tree2->search(nodeKey);
    if (nodeIn1 != NULL) {
      continue;
    } else {
      // if the node is unknown for the robot, only add it if the hololens says it is occupied.
      //if (it->getOccupancy()>0.5)
      tree_temp->setNodeValue(nodeKey, it->getLogOdds());
    }
  }


   //add the merged agent maps to Mt-1
  for (OcTree::leaf_iterator it = tree_temp->begin_leafs(); it != tree_temp->end_leafs(); ++it) {
    OcTreeKey nodeKey = it.getKey();
    OcTreeNodeStamped *nodeIn1 = tree1->search(nodeKey);
    if (nodeIn1 != NULL) {
        double val1=nodeIn1->getOccupancy();
        double val2=it->getOccupancy();
        if (nodeIn1->getLogOdds()==100|| nodeIn1->getLogOdds()==-100) continue;
        tree1->updateNode(nodeKey, it->getLogOdds());
    } else {
      tree1->setNodeValue(nodeKey, it->getLogOdds());
    }
  }
  delete tree_temp;

}











void merge_maps_priorities(OcTreeStamped *tree1, OcTree *treepiority) {
  // Expand tree so we search all nodes
  treepiority->expand();

  // traverse nodes in treepiority to add them to tree1
  for (OcTree::leaf_iterator it = treepiority->begin_leafs(); it != treepiority->end_leafs(); ++it) {
    OcTreeKey nodeKey = it.getKey();
    OcTreeNodeStamped *nodeIn1 = tree1->search(nodeKey);
    if (nodeIn1 != NULL) {
        tree1->setNodeValue(nodeKey, 100);
        nodeIn1->setTimestamp(1);
        nodeIn1->setLogOdds(100);
    }else {
      // Add the node to tree1
      OcTreeNodeStamped *newNode = tree1->setNodeValue(nodeKey, 100);
      newNode->setTimestamp(1);
      newNode->setLogOdds(100);

    }
  }
}

void delete_priorities(OcTreeStamped *tree1, OcTree *treepiority) {
  // Expand tree so we search all nodes
  treepiority->expand();

  // traverse nodes in treepiority to add them to tree1
  for (OcTree::leaf_iterator it = treepiority->begin_leafs(); it != treepiority->end_leafs(); ++it) {
    OcTreeKey nodeKey = it.getKey();
    OcTreeNodeStamped *nodeIn1 = tree1->search(nodeKey);
    if (nodeIn1 != NULL) {
        tree1->setNodeValue(nodeKey, -100);
        nodeIn1->setTimestamp(1);
        nodeIn1->setLogOdds(-100);
    }else {
      // Add the node to tree1
      OcTreeNodeStamped *newNode = tree1->setNodeValue(nodeKey, -100);
      newNode->setTimestamp(1);
      newNode->setLogOdds(-100);
    }
  }
}

double build_diff_tree(OcTree *tree1, OcTree *tree2, OcTree *tree_diff) {
  // Find the differences in tree2 from tree1 and write to a new diff tree

  // Expand tree so we search all nodes
  tree2->expand();
  double num_new_nodes = 0;

  // traverse nodes in tree2 to add them to tree1
  for (OcTree::leaf_iterator it = tree2->begin_leafs(); it != tree2->end_leafs(); ++it) {
    OcTreeKey nodeKey = it.getKey();
    OcTreeNode *nodeIn1 = tree1->search(nodeKey);
    if (nodeIn1 != NULL) {
      // Change the diff tree (may be add, or may be new) if the two maps are different
      if (nodeIn1->getOccupancy() != it->getOccupancy()) {
        tree_diff->setNodeValue(nodeKey, it->getLogOdds());
      }
    } else {
      // Add to the diff tree if it's a new node
      OcTreeNode *newDiffNode = tree_diff->setNodeValue(nodeKey, it->getLogOdds());
      num_new_nodes++;
    }
  }

  return num_new_nodes;
}
