using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;


public class MinecraftBuilder : MonoBehaviour
{
    public MiniMap miniMap;
    public GameObject cube, holder, papa;
    public RosPublisherExample rosPublisher;
    public TextWriter textWriter;
    GameObject kube;
    Vector3 tf = new Vector3(0, 0, 0);
    Vector3 tf2 = new Vector3(5, 5, 5);
    [NonSerialized]
    public float cube_size;
    static int horizontal_angle_window = 36; //90; //36
    static int vertical_angle_window = 16;//46; //16
    static float angle_size = 2f;
    float Hor_angle_min = -((float)horizontal_angle_window / 2);
    float Ver_angle_min = -((float)vertical_angle_window / 2);
    Vector3 horizontal_ray_direction;
    Vector3 vertical_ray_direction;
    //[NonSerialized]
    public GameObject[][][] grid_3d_matrix;
    public GameObject[][][] Taj1;
    public GameObject parent_test;
    int play_area_xSize; // Amount of cubes to be placed on x-axis
    int play_area_ySize; // Amount of cubes to be placed on y-axis
    int play_area_zSize; // Amount of cubes to be placed on z-axis
    float distx_in_cm;
    float disty_in_cm;
    float distz_in_cm;
    int distx_in_cubes;
    int disty_in_cubes;
    int distz_in_cubes;
    //float min_hit;
    Vector3 nearest_pt;
    Vector3 nearest_pt2;
    Vector3[] pt = new Vector3[(int)(horizontal_angle_window / angle_size)];
    float hit_distance;

    //float for time 
    float[] play_area_grid_array; // Array to store voxel data probably
    int indexo;
    bool MappingSwitch;

    // Start is called before the first frame update
    void Start()
    {
        cube_size = cube.transform.localScale.x; // Retreive cube size on x-axis (all sides are equal)

        play_area_xSize = 800; //300; // Right-Left
        play_area_ySize = 100; //100; // Up-Down 
        play_area_zSize = 500; //400; // Front-Back 
        
        play_area_grid_array = new float[play_area_xSize * play_area_ySize * play_area_zSize]; // Volume of play area

        // Builds the 3D grid based on inserted play_area sizes
        grid_3d_matrix = new GameObject[play_area_xSize][][];
        for (int i = 0; i < play_area_xSize; i++)
        {
            grid_3d_matrix[i] = new GameObject[play_area_ySize][];
            for (int j = 0; j < play_area_ySize; j++)
            {
                grid_3d_matrix[i][j] = new GameObject[play_area_zSize];
            }
        }

        MappingSwitch = true; // Turns on mapping 
    }

    // Update is called once per frame
    void Update()
    {
        // If mapping is on then place voxels using raycasting 
        if(MappingSwitch == true)
        {
            Vector3 gaze_direction = Camera.main.transform.forward;
            Vector3 gaze_position = Camera.main.transform.position;
            RaycastHit hit;
            bool raycast_hit;
            raycast_hit = Physics.Raycast(gaze_position, gaze_direction, out hit, 10f); // Distance was 2f

            // Casts rays withinn the horizontal and vertical angle window and places voxels at the nearest hit points
            for (int i = 0; i < (horizontal_angle_window / angle_size); i++)
            {
                horizontal_ray_direction = Quaternion.Euler(0, (Hor_angle_min + (angle_size * i)), 0) * gaze_direction;
                for (int j = 0; j < (int)(vertical_angle_window / angle_size); j++)
                {
                    vertical_ray_direction = Quaternion.Euler((Ver_angle_min + (angle_size * j)), 0, 0) * horizontal_ray_direction;
                    raycast_hit = Physics.Raycast(gaze_position, vertical_ray_direction, out hit, 10f);
                    if (raycast_hit && hit.transform.name.StartsWith("SpatialMesh")) // The second condition ensures that only the spatial mesh is mapped
                    {
                        textWriter.meshName = hit.collider.name;
                        distx_in_cubes = Mathf.RoundToInt(hit.point.x / cube_size);
                        disty_in_cubes = Mathf.RoundToInt(hit.point.y / cube_size);
                        distz_in_cubes = Mathf.RoundToInt(hit.point.z / cube_size);
                        nearest_pt2 = new Vector3(distx_in_cubes, disty_in_cubes, distz_in_cubes);
                        if (Mathf.Abs(distx_in_cubes) < play_area_xSize / 2 && Mathf.Abs(disty_in_cubes) < play_area_ySize / 2 && Mathf.Abs(distz_in_cubes) < play_area_zSize / 2)
                        {
                            Instantiator(hit.point);
                            Rasterizer(gaze_position, hit.point);
                        }
                    }
                }
            }
        }
    }

    public void Rasterizer(Vector3 start, Vector3 end)
    {
        Vector3Int startcuby = new Vector3Int(Mathf.RoundToInt(start.x / cube_size), Mathf.RoundToInt(start.y / cube_size), Mathf.RoundToInt(start.z / cube_size));
        Vector3 direction = end - start;
        float length = direction.magnitude;
        length = length - 2 * cube_size;
        direction = direction.normalized * length;
        end = direction + start;
        
        Vector3 startcm = new Vector3(Mathf.RoundToInt(start.x / cube_size) * cube_size, Mathf.RoundToInt(start.y / cube_size) * cube_size, Mathf.RoundToInt(start.z / cube_size) * cube_size);

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

        Vector3Int endcuby = new Vector3Int(Mathf.RoundToInt(end.x / cube_size), Mathf.RoundToInt(end.y / cube_size), Mathf.RoundToInt(end.z / cube_size));
        
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

            tempyx = m_in_yx * (startcm.x + sx * (cube_size / 2)) + b_in_yx;
            temp_yx_int = Mathf.RoundToInt(tempyx / cube_size);

            tempzx = m_in_zx * (startcm.x + sx * (cube_size / 2)) + b_in_zx;
            temp_zx_int = Mathf.RoundToInt(tempzx / cube_size);

            tempyz = m_in_yz * (startcm.z + sz * (cube_size / 2)) + b_in_yz;
            temp_yz_int = Mathf.RoundToInt(tempyz / cube_size);

            if (startcuby.y == temp_yx_int)
            {
                if (startcuby.z == temp_zx_int)
                {
                    startcuby.x = startcuby.x + sx;
                    startcm.x = startcm.x + sx * cube_size;
                }
                else
                {
                    startcuby.z = startcuby.z + sz;
                    startcm.z = startcm.z + sz * cube_size;
                }
            }
            else
            {
                if (startcuby.y == temp_yz_int)
                {
                    startcuby.z = startcuby.z + sz;
                    startcm.z = startcm.z + sz * cube_size;
                }
                else
                {
                    startcuby.y = startcuby.y + sy;
                    startcm.y = startcm.y + sy * cube_size;
                } 
            }
            
            indexo = (startcuby.x - 1 + play_area_xSize / 2) + (startcuby.y- 1 + play_area_ySize / 2) * play_area_xSize + (startcuby.z - 1 + play_area_zSize / 2) * play_area_xSize * play_area_ySize;
            if (play_area_grid_array[indexo] > 0)
            {
                play_area_grid_array[indexo] = play_area_grid_array[indexo] - 0.001f;
            }
            

            if (grid_3d_matrix[startcuby.x - 1 + play_area_xSize / 2][startcuby.y - 1 + play_area_ySize / 2][startcuby.z - 1 + play_area_zSize / 2] != null && play_area_grid_array[indexo] < 0.6f)
            {
                Destroy(grid_3d_matrix[startcuby.x - 1 + play_area_xSize / 2][startcuby.y - 1 + play_area_ySize / 2][startcuby.z - 1 + play_area_zSize / 2]);
            }
        }
    }

    public void Instantiator(Vector3 place, bool humanApproved = false, bool fromEditor = false)
    {
        distx_in_cubes = Mathf.RoundToInt(place.x / cube_size);
        disty_in_cubes = Mathf.RoundToInt(place.y / cube_size);
        distz_in_cubes = Mathf.RoundToInt(place.z / cube_size);
        if (Mathf.Abs(distx_in_cubes) < play_area_xSize / 2 && Mathf.Abs(disty_in_cubes) < play_area_ySize / 2 && Mathf.Abs(distz_in_cubes) < play_area_zSize / 2)
        {
            distx_in_cm = Mathf.RoundToInt(place.x / cube_size) * cube_size;
            disty_in_cm = Mathf.RoundToInt(place.y / cube_size) * cube_size;
            distz_in_cm = Mathf.RoundToInt(place.z / cube_size) * cube_size;
            nearest_pt = new Vector3(distx_in_cm, disty_in_cm, distz_in_cm);
            indexo = (distx_in_cubes - 1 + play_area_xSize / 2) + (disty_in_cubes - 1 + play_area_ySize / 2) * play_area_xSize + (distz_in_cubes - 1 + play_area_zSize / 2) * play_area_xSize * play_area_ySize;

            if (humanApproved)
            {
                play_area_grid_array[indexo] = 100;
            }
            if (play_area_grid_array[indexo] < 1)
            {
                play_area_grid_array[indexo] = play_area_grid_array[indexo] + 0.05f;
            }
            if (grid_3d_matrix[distx_in_cubes - 1 + play_area_xSize / 2][disty_in_cubes - 1 + play_area_ySize / 2][distz_in_cubes - 1 + play_area_zSize / 2] == null && play_area_grid_array[indexo] >= 0.6f)
            {
                grid_3d_matrix[distx_in_cubes - 1 + play_area_xSize / 2][disty_in_cubes - 1 + play_area_ySize / 2][distz_in_cubes - 1 + play_area_zSize / 2] = Instantiate(cube, nearest_pt, Quaternion.identity);
                grid_3d_matrix[distx_in_cubes - 1 + play_area_xSize / 2][disty_in_cubes - 1 + play_area_ySize / 2][distz_in_cubes - 1 + play_area_zSize / 2].transform.SetParent(papa.gameObject.transform);
                
                if (fromEditor)
                {
                    rosPublisher.EditedPointCloudPublisher(nearest_pt);
                }
            }
        }
    }

    public void Destroyer(Vector3 bomb_incubes)
    {
        Destroy(grid_3d_matrix[Mathf.RoundToInt(bomb_incubes.x) - 1 + play_area_xSize / 2][Mathf.RoundToInt(bomb_incubes.y) - 1 + play_area_ySize / 2][Mathf.RoundToInt(bomb_incubes.z) - 1 + play_area_zSize / 2]);
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
                    Instantiator(new Vector3(i, j, k) * cube_size, true, true);
                }
            }
        }
        rosPublisher.PublishEditedPointCloudMsg();
        Debug.Log("Adder");
    }

    public void DestroyEditor(Vector3Int MaxDist, Vector3Int RecentDist)
    {
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
                    rosPublisher.DeletedPointCloudPublisher(new Vector3(i, j, k) * 0.049f + new Vector3(Startx, Starty, Startz) * cube_size);
                    /*if (grid_3d_matrix[i - 1 + xSize / 2][j - 1 + ySize / 2][k - 1 + zSize / 2] != null)
                    {
                        pub.DeletedPointCloudPublisher(new Vector3(i, j, k) * cubesize);
                    }*/
                    Destroyer(new Vector3(i, j, k) + new Vector3(Startx, Starty, Startz));   ////uncomment
                }
            }
        }
        rosPublisher.PublishDeletedPointCloudMsg();
    }

    public void ToggleMinecraft()
    {
        if (MappingSwitch)
        {
            MappingSwitch = false;
            papa.SetActive(false);
        }
        else
        {
            MappingSwitch = true;
            papa.SetActive(true);
        }
    }
}
