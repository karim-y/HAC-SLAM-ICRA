using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testingOverlap : MonoBehaviour
{

    Collider[] intersections;
    

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        intersections = Physics.OverlapBox(transform.position, transform.localScale/2);
        if (intersections != null)
        {
            foreach (Collider intersect in intersections)
            {
                if(intersect.gameObject.name == "Prism")
                {
                    Debug.Log(intersect.gameObject.name);
                }
                
            }
        }
    }
}
