using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;


public class MinecraftBuilder : MonoBehaviour
{

    public MiniMap miniMap;
    public GameObject cube, holder, Papa;
    public RosPublisherExample pub;
    public TextWriter txtwrtr;
    Vector3 tf = new Vector3(0, 0, 0);
    Vector3 tf2 = new Vector3(5, 5, 5);
    [NonSerialized]
    public float cubesize;
    static int Hor_angle_window = 90; //90; //36
    static int Ver_angle_window = 46;//46; //16
    static float angle_size = 2f;
    float Hor_angle_min = -((float)Hor_angle_window / 2);
    float Ver_angle_min = -((float)Ver_angle_window / 2);
    Vector3 Hor_Ray_direction;
    Vector3 Ver_Ray_direction;
    //[NonSerialized]
    public GameObject[][][] Taj;
    public GameObject[][][] Taj1;
    public GameObject parenttest;
    GameObject kube;
    int xSize;
    int ySize;
    int zSize;
    float distx_in_cm;
    float disty_in_cm;
    float distz_in_cm;
    int distx_in_cubes;
    int disty_in_cubes;
    int distz_in_cubes;
    //float min_hit;
    Vector3 nearest_pt;
    Vector3 nearest_pt2;
    Vector3[] pt = new Vector3[(int)(Hor_angle_window / angle_size)];
    float hit_distance;

    //float  for time 
    float[] grid_arr;
    int indexo;
    bool MappingSwitch;
    // Start is called before the first frame update
    void Start()
    {
        cubesize = cube.transform.localScale.x;
        //Debug.Log(cubesize);
        xSize = 800; //800; //300; //yamin shmel
        ySize = 100; //100; // lafo2 latahet
        zSize = 500; //400; // edem lawara
        //nearest_pt = new Vector3(0, 0, 0);
        grid_arr = new float[xSize * ySize * zSize];
        //timeRemaining = 2;
        Taj = new GameObject[xSize][][];
        for (int i = 0; i < xSize; i++)
        {
            Taj[i] = new GameObject[ySize][];
            for (int j = 0; j < ySize; j++)
            {
                Taj[i][j] = new GameObject[zSize];
            }
        }

        /*Taj1 = new GameObject[xSize / 2][][];
        for (int i = 0; i < xSize / 2; i++)
        {
            Taj1[i] = new GameObject[ySize / 2][];
            for (int j = 0; j < ySize / 2; j++)
            {
                Taj1[i][j] = new GameObject[zSize / 2];
            }
        }*/


        MappingSwitch = true;
    }

    // Update is called once per frame
    void Update()
    {
        if(MappingSwitch == true)
        {
            Vector3 Gaze_direction = Camera.main.transform.forward;
            Vector3 Gaze_position = Camera.main.transform.position;
            RaycastHit hit;
            bool raycastHit;
            raycastHit = Physics.Raycast(Gaze_position, Gaze_direction, out hit, 10f); //distance was 2f
            for (int i = 0; i < (Hor_angle_window / angle_size); i++)
            {
                Hor_Ray_direction = Quaternion.Euler(0, (Hor_angle_min + (angle_size * i)), 0) * Gaze_direction;
                for (int j = 0; j < (int)(Ver_angle_window / angle_size); j++)
                {
                    //RaycastHit hit;
                    //bool raycastHit = false;
                    Ver_Ray_direction = Quaternion.Euler((Ver_angle_min + (angle_size * j)), 0, 0) * Hor_Ray_direction;
                    raycastHit = Physics.Raycast(Gaze_position, Ver_Ray_direction, out hit, 10f);
                    if (raycastHit && hit.transform.name.StartsWith("SpatialMesh")) //The second condition ensures that only the spatial mesh is mapped
                    {
                        txtwrtr.meshName = hit.collider.name;
                        distx_in_cubes = Mathf.RoundToInt(hit.point.x / cubesize);
                        disty_in_cubes = Mathf.RoundToInt(hit.point.y / cubesize);
                        distz_in_cubes = Mathf.RoundToInt(hit.point.z / cubesize);
                        nearest_pt2 = new Vector3(distx_in_cubes, disty_in_cubes, distz_in_cubes);
                        if (Mathf.Abs(distx_in_cubes) < xSize / 2 && Mathf.Abs(disty_in_cubes) < ySize / 2 && Mathf.Abs(distz_in_cubes) < zSize / 2)
                        {
                            Instantiator(hit.point);
                            Rasterizer(Gaze_position, hit.point);
                        }
                    }
                }
            }
        }
    }


    public void Rasterizer(Vector3 start, Vector3 end)
    {
        
        Vector3Int startcuby = new Vector3Int(Mathf.RoundToInt(start.x / cubesize), Mathf.RoundToInt(start.y / cubesize), Mathf.RoundToInt(start.z / cubesize));
        //float length = Mathf.Sqrt((end.x * end.x) + (end.y * end.y) + (end.z * end.z));// - 2 * cubesize;
        Vector3 direction = end - start;
        float length = direction.magnitude;
        length = length - 2 * cubesize;
        direction = direction.normalized * length;
        end = direction + start;
        //Debug.Log(end);
        Vector3 startcm = new Vector3(Mathf.RoundToInt(start.x / cubesize) * cubesize, Mathf.RoundToInt(start.y / cubesize) * cubesize, Mathf.RoundToInt(start.z / cubesize) * cubesize);

        float m_in_yx = (end.y - start.y) / (end.x - start.x);
        float m_in_zx = (end.z - start.z) / (end.x - start.x);
        float m_in_yz = (end.y - start.y) / (end.z - start.z);

        float b_in_yx = start.y - m_in_yx * start.x;
        float b_in_zx = start.z - m_in_zx * start.x;
        float b_in_yz = start.y - m_in_yz * start.z;

        int sx = end.x >= start.x ? 1 : -1;
        int sy = end.y >= start.y ? 1 : -1;
        int sz = end.z >= start.z ? 1 : -1;

        float tempyx; // = m_in_yx * (end.x + sx * (cubesize / 2)) + b_in_yx;
        float tempzx; // = m_in_zx * (end.x + sx * (cubesize / 2)) + b_in_zx;
        float tempyz;

        Vector3Int endcuby = new Vector3Int(Mathf.RoundToInt(end.x / cubesize), Mathf.RoundToInt(end.y / cubesize), Mathf.RoundToInt(end.z / cubesize));
        
        //Debug.Log(endcuby);
        int temp_yx_int;
        int temp_zx_int;
        int temp_yz_int;

        int counter = 0;
        while (startcuby != endcuby)
        //for (int i = 0; i < 150 ; i++)   
        {
            counter++;
            if (counter > 200)
            {
                Debug.Log("Ktir hek");
                break;
            }
            tempyx = m_in_yx * (startcm.x + sx * (cubesize / 2)) + b_in_yx;
            temp_yx_int = Mathf.RoundToInt(tempyx / cubesize);

            tempzx = m_in_zx * (startcm.x + sx * (cubesize / 2)) + b_in_zx;
            temp_zx_int = Mathf.RoundToInt(tempzx / cubesize);

            tempyz = m_in_yz * (startcm.z + sz * (cubesize / 2)) + b_in_yz;
            temp_yz_int = Mathf.RoundToInt(tempyz / cubesize);

            if (startcuby.y == temp_yx_int)
            {
                if (startcuby.z == temp_zx_int)
                {
                    startcuby.x = startcuby.x + sx;
                    startcm.x = startcm.x + sx * cubesize;
                }
                else
                {
                    startcuby.z = startcuby.z + sz;
                    startcm.z = startcm.z + sz * cubesize;
                }
            }
            else
            {
                if (startcuby.y == temp_yz_int)
                {
                    startcuby.z = startcuby.z + sz;
                    startcm.z = startcm.z + sz * cubesize;
                }
                else
                {
                    startcuby.y = startcuby.y + sy;
                    startcm.y = startcm.y + sy * cubesize;
                } 
            }
            
            indexo = (startcuby.x - 1 + xSize / 2) + (startcuby.y- 1 + ySize / 2) * xSize + (startcuby.z - 1 + zSize / 2) * xSize * ySize;
            if (grid_arr[indexo] > 0)// && grid_arr[indexo] < 1)
            {
                grid_arr[indexo] = grid_arr[indexo] - 0.001f;
            }
            

            if (Taj[startcuby.x - 1 + xSize / 2][startcuby.y - 1 + ySize / 2][startcuby.z - 1 + zSize / 2] != null && grid_arr[indexo] < 0.6f)
            {
                Destroy(Taj[startcuby.x - 1 + xSize / 2][startcuby.y - 1 + ySize / 2][startcuby.z - 1 + zSize / 2]);
            }
        }
    }

    public void Instantiator(Vector3 place, bool humanApproved = false, bool fromEditor = false)
    {
        distx_in_cubes = Mathf.RoundToInt(place.x / cubesize);
        disty_in_cubes = Mathf.RoundToInt(place.y / cubesize);
        distz_in_cubes = Mathf.RoundToInt(place.z / cubesize);
        if (Mathf.Abs(distx_in_cubes) < xSize / 2 && Mathf.Abs(disty_in_cubes) < ySize / 2 && Mathf.Abs(distz_in_cubes) < zSize / 2)
        {

            distx_in_cm = Mathf.RoundToInt(place.x / cubesize) * cubesize;
            disty_in_cm = Mathf.RoundToInt(place.y / cubesize) * cubesize;
            distz_in_cm = Mathf.RoundToInt(place.z / cubesize) * cubesize;
            nearest_pt = new Vector3(distx_in_cm, disty_in_cm, distz_in_cm);
            indexo = (distx_in_cubes - 1 + xSize / 2) + (disty_in_cubes - 1 + ySize / 2) * xSize + (distz_in_cubes - 1 + zSize / 2) * xSize * ySize;

            if (humanApproved)
            {
                grid_arr[indexo] = 100;
            }
            if (grid_arr[indexo] < 1)
            {
                grid_arr[indexo] = grid_arr[indexo] + 0.05f;
            }
            if (Taj[distx_in_cubes - 1 + xSize / 2][disty_in_cubes - 1 + ySize / 2][distz_in_cubes - 1 + zSize / 2] == null && grid_arr[indexo] >= 0.6f)
            {
                Taj[distx_in_cubes - 1 + xSize / 2][disty_in_cubes - 1 + ySize / 2][distz_in_cubes - 1 + zSize / 2] = Instantiate(cube, nearest_pt, Quaternion.identity);
                Taj[distx_in_cubes - 1 + xSize / 2][disty_in_cubes - 1 + ySize / 2][distz_in_cubes - 1 + zSize / 2].transform.SetParent(Papa.gameObject.transform);
                //miniMap.Fill(nearest_pt);
                
                if (fromEditor)
                {
                    pub.EditedPointCloudPublisher(nearest_pt);
                }
                /*else
                {
                    pub.AddPointCloudtoROSMessage(nearest_pt);
                }*/
                //if(Taj1[distx_in_cubes/2])
            }
        }
    }

    public void Destroyer(Vector3 bomb_incubes)
    {
        Destroy(Taj[Mathf.RoundToInt(bomb_incubes.x) - 1 + xSize / 2][Mathf.RoundToInt(bomb_incubes.y) - 1 + ySize / 2][Mathf.RoundToInt(bomb_incubes.z) - 1 + zSize / 2]);
    }

    public void InstantiateEditor(Vector3Int MaxDist, Vector3Int RecentDist)
    {
 
        int Startx = Mathf.Min(MaxDist.x, RecentDist.x);
        int Starty = Mathf.Min(MaxDist.y, RecentDist.y);
        int Startz = Mathf.Min(MaxDist.z, RecentDist.z);
        int Endx = Mathf.Max(MaxDist.x, RecentDist.x);
        int Endy = Mathf.Max(MaxDist.y, RecentDist.y);
        int Endz = Mathf.Max(MaxDist.z, RecentDist.z);

        for (int i = Startx; i <= Endx; i++)
        {
            for (int j = Starty; j <= Endy; j++)
            {
                for (int k = Startz; k <= Endz; k++)
                {
                    Instantiator(new Vector3(i, j, k) * cubesize, true, true);
                }
            }
        }
        pub.PublishEditedPointCloudMsg();
        Debug.Log("Adder");
    }

    /*public void DestroyEditor(Vector3Int MaxDist, Vector3Int RecentDist)
    {
        int Startx = Mathf.Min(MaxDist.x, RecentDist.x);
        int Starty = Mathf.Min(MaxDist.y, RecentDist.y);
        int Startz = Mathf.Min(MaxDist.z, RecentDist.z);
        int Endx = Mathf.Max(MaxDist.x, RecentDist.x);
        int Endy = Mathf.Max(MaxDist.y, RecentDist.y);
        int Endz = Mathf.Max(MaxDist.z, RecentDist.z);

        *//*int Endxds = (Endx - Startx) * 2;
        int Endyds = (Endy - Starty) * 2;
        int Endzds = (Endz - Startz) * 2;*//*

        for (int i = Startx; i <= Endxds; i++)
        {
            for (int j = Starty; j <= Endyds; j++)
            {
                for (int k = Startz; k <= Endzds; k++)
                {
                    pub.DeletedPointCloudPublisher(new Vector3(i, j, k) * 0.025f);
                    *//*if(Taj[i - 1 + xSize / 2][j - 1 + ySize / 2][k - 1 + zSize / 2] != null)
                    {
                        pub.DeletedPointCloudPublisher(new Vector3(i, j, k) * cubesize);
                    }*//*
                    //Destroyer(new Vector3(i, j, k));
                }
            }
        }
        pub.PublishDeletedPointCloudMsg();
    }*/

    public void DisableMinecraft()
    {
        MappingSwitch = false;
        Papa.SetActive(false);
    }

    public void EnableMinecraft()
    {
        MappingSwitch = true;
        Papa.SetActive(true);
    }

    /*public void DestroyEditor(Vector3Int MaxDist, Vector3Int RecentDist)
    {
        int Startx = Mathf.Min(MaxDist.x, RecentDist.x);
        int Starty = Mathf.Min(MaxDist.y, RecentDist.y);
        int Startz = Mathf.Min(MaxDist.z, RecentDist.z);
        int Endx = Mathf.Max(MaxDist.x, RecentDist.x);
        int Endy = Mathf.Max(MaxDist.y, RecentDist.y);
        int Endz = Mathf.Max(MaxDist.z, RecentDist.z);

        for (int i = Startx; i <= Endx; i++)
        {
            for (int j = Starty; j <= Endy; j++)
            {
                for (int k = Startz; k <= Endz; k++)
                {
                    pub.DeletedPointCloudPublisher(new Vector3(i, j, k) * cubesize);
                    if (Taj[i - 1 + xSize / 2][j - 1 + ySize / 2][k - 1 + zSize / 2] != null)
                    {
                        pub.DeletedPointCloudPublisher(new Vector3(i, j, k) * cubesize);
                    }
                    Destroyer(new Vector3(i, j, k));
                }
            }
        }
        pub.PublishDeletedPointCloudMsg();
    }*/



    public void DestroyEditor(Vector3Int MaxDist, Vector3Int RecentDist)
    {

        //MaxDist = new Vector3Int(1, 1, 1);
        //RecentDist = new Vector3Int(2, 3, 4);

        int Startx = Mathf.Min(MaxDist.x, RecentDist.x);
        int Starty = Mathf.Min(MaxDist.y, RecentDist.y);
        int Startz = Mathf.Min(MaxDist.z, RecentDist.z);
        int Endx = Mathf.Max(MaxDist.x, RecentDist.x);
        int Endy = Mathf.Max(MaxDist.y, RecentDist.y);
        int Endz = Mathf.Max(MaxDist.z, RecentDist.z);
        int Diffx = Endx - Startx;
        int Diffy = Endy - Starty;
        int Diffz = Endz - Startz;

        for (int i = 0; i <= Diffx; i++)
        {
            for (int j = 0; j <= Diffy; j++)
            {
                for (int k = 0; k <= Diffz; k++)
                {
                    pub.DeletedPointCloudPublisher(new Vector3(i, j, k) * 0.049f + new Vector3(Startx, Starty, Startz) * cubesize);
                    /*if (Taj[i - 1 + xSize / 2][j - 1 + ySize / 2][k - 1 + zSize / 2] != null)
                    {
                        pub.DeletedPointCloudPublisher(new Vector3(i, j, k) * cubesize);
                    }*/
                    Destroyer(new Vector3(i, j, k) + new Vector3(Startx, Starty, Startz));   ////uncomment
                }
            }
        }
        pub.PublishDeletedPointCloudMsg();
    }



    ////////This is plan b.
    /*public void DestroyEditor(Vector3Int MaxDist, Vector3Int RecentDist)
    {
        //MaxDist = new Vector3Int(1, 1, 1);
        //RecentDist = new Vector3Int(2, 3, 4);

        int Startx = Mathf.Min(MaxDist.x, RecentDist.x);
        int Starty = Mathf.Min(MaxDist.y, RecentDist.y);
        int Startz = Mathf.Min(MaxDist.z, RecentDist.z);
        int Endx = Mathf.Max(MaxDist.x, RecentDist.x);
        int Endy = Mathf.Max(MaxDist.y, RecentDist.y);
        int Endz = Mathf.Max(MaxDist.z, RecentDist.z);
        int Diffx = Endx - Startx;
        int Diffy = Endy - Starty;
        int Diffz = Endz - Startz;

        for (int i = 0; i <= Diffx * 2; i++)
        {
            for (int j = 0; j <= Diffy * 2; j++)
            {
                for (int k = 0; k <= Diffz * 2; k++)
                {
                    pub.DeletedPointCloudPublisher(new Vector3(i, j, k) * cubesize);
                    Debug.Log(new Vector3(i, j, k) * 0.025f + new Vector3(Startx,Starty,Startz));
                    *//*if (Taj[i - 1 + xSize / 2][j - 1 + ySize / 2][k - 1 + zSize / 2] != null)
                    {
                        pub.DeletedPointCloudPublisher(new Vector3(i, j, k) * cubesize);
                    }
                    Destroyer(new Vector3(i, j, k));*//*
                }
            }
        }
        pub.PublishDeletedPointCloudMsg();
    }*/
}
