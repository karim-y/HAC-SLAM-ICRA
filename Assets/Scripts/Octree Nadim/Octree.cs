 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ISpatialData3D
{
    Vector3 GetLocation();
    Bounds GetBounds();
    float GetRadius();
}

public class Octree : MonoBehaviour
{
    class Node
    {
        Bounds NodeBounds;
        Node[] Children;
        int Depth = -1;

        HashSet<ISpatialData3D> Data;

        public Node(Bounds InBounds, int InDepth = 0)
        {
            NodeBounds = InBounds;
            Depth = InDepth;
        }

        public void AddData(Octree Owner, ISpatialData3D Datum)
        {
           if (Children == null)
            {
                //is this the first time we are adding data to this node
                if (Data == null)
                {
                    Data = new();
                }

               // should we and are we able to split
               if ((Data.Count+1) >= Owner.PreferredMaxDataPerNode && CanSplit(Owner))
                {
                    SplitNode(Owner);

                    AddDataToChildren(Owner, Datum);
                }
                else
                {
                    Data.Add(Datum);
                }
                return;
            }

            AddDataToChildren(Owner, Datum);
        }

        void SplitNode(Octree Owner)
        {
            Vector3 ChildSize = NodeBounds.extents;
            Vector3 Offset = ChildSize / 2;
            int NewDepth = Depth + 1;

            Children = new Node[8]
            {
                new Node(new Bounds(NodeBounds.center + new Vector3(-Offset.x, -Offset.y,  Offset.z),ChildSize),NewDepth),
                new Node(new Bounds(NodeBounds.center + new Vector3( Offset.x, -Offset.y,  Offset.z),ChildSize),NewDepth),
                new Node(new Bounds(NodeBounds.center + new Vector3(-Offset.x, -Offset.y, -Offset.z),ChildSize),NewDepth),
                new Node(new Bounds(NodeBounds.center + new Vector3( Offset.x, -Offset.y, -Offset.z),ChildSize),NewDepth),
                new Node(new Bounds(NodeBounds.center + new Vector3(-Offset.x,  Offset.y,  Offset.z),ChildSize),NewDepth),
                new Node(new Bounds(NodeBounds.center + new Vector3( Offset.x,  Offset.y,  Offset.z),ChildSize),NewDepth),
                new Node(new Bounds(NodeBounds.center + new Vector3(-Offset.x,  Offset.y, -Offset.z),ChildSize),NewDepth),
                new Node(new Bounds(NodeBounds.center + new Vector3( Offset.x,  Offset.y, -Offset.z),ChildSize),NewDepth),
            };

            foreach(var Datum in Data)
            {
                AddDataToChildren(Owner, Datum);
            }

            Data = null;
        }

        void AddDataToChildren(Octree Owner, ISpatialData3D Datum)
        {
            foreach(Node Child in Children)
            {
                if (Child.Overlaps(Datum.GetBounds()))
                {
                    Child.AddData(Owner, Datum);
                }
            }
        }

        bool Overlaps(Bounds Other)
        {
            return NodeBounds.Intersects(Other);
        }

        bool CanSplit(Octree Owner)
        {
            return NodeBounds.size.x >= Owner.MinimumNodeSize &&
                   NodeBounds.size.y >= Owner.MinimumNodeSize &&
                   NodeBounds.size.z >= Owner.MinimumNodeSize;
        }

        public void FindDataInBox(Bounds SearchBounds, HashSet<ISpatialData3D> OutFoundData)
        {
            if (Children == null)
            {
                if (Data == null || Data.Count == 0)
                    return;

                // optimised check for a root node with no children
                if (Depth == 0)
                {
                    foreach(var Datum in Data)
                    {
                        if (SearchBounds.Intersects(Datum.GetBounds()))
                            OutFoundData.Add(Datum);
                    }

                    return;
                }

                OutFoundData.UnionWith(Data);

                return;
            }

            foreach(var Child in Children)
            {
                if (Child.Overlaps(SearchBounds))
                    Child.FindDataInBox(SearchBounds, OutFoundData);
            }

            //if we are the root node, remove any data that is outside the search bounds    
            if (Depth == 0)
            {
                OutFoundData.RemoveWhere(Datum =>
                {
                    return !SearchBounds.Intersects(Datum.GetBounds());
                });
            }
        }

        public void FindDataInRange(Vector3 SearchLocation, float SearchRange, HashSet<ISpatialData3D> OutFoundData)
        {
            if (Depth != 0)
            {
                throw new System.InvalidOperationException("Should be called on the root node only");
            }

            Bounds SearchBounds = new Bounds(SearchLocation, SearchRange * Vector3.one * 2f);

            FindDataInBox(SearchBounds, OutFoundData);

            OutFoundData.RemoveWhere(Datum =>
            {
                float TestRange = SearchRange + Datum.GetRadius();

                return (SearchLocation - Datum.GetLocation()).sqrMagnitude > (TestRange * TestRange);
            });
        }
    }

    [field: SerializeField] public int PreferredMaxDataPerNode { get; private set; } = 50;
    [field: SerializeField] public int MinimumNodeSize { get; private set; } = 5;

    Node RootNode;
    public void PrepareTree(Bounds InBound)
    {
        RootNode = new Node(InBound);
    }

    public void AddData(ISpatialData3D Datum)
    {
        RootNode.AddData(this, Datum);
    }

    public void AddData(List<ISpatialData3D> Data)
    {
        foreach(ISpatialData3D Datum in Data)
        {
            AddData(Datum);
        }
    }

    public void ShowStats()
    {
        
    }

    public HashSet<ISpatialData3D> FindDataInRange(Vector3 SearchLocation, float SearcgRange)
    {
        HashSet<ISpatialData3D> FoundData = new();
        RootNode.FindDataInRange(SearchLocation, SearcgRange, FoundData);

        return FoundData;
    }
}
