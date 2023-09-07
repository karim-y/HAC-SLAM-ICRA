using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TryingTrans : MonoBehaviour
{
    int x = 5;
    // Start is called before the first frame update
    void Start()
    {
        this.transform.Rotate(new Vector3(0, 90, 0), Space.Self);
        this.transform.Translate(new Vector3(0, 0, 5), Space.Self);
        //this.transform.position = new Vector3(0, 0, 5);
        //this.transform.TransformDirection =
        Debug.Log(x * 0.5);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
