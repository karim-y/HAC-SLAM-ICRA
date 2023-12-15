using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using System.IO;
using UnityEditor;
using UnityEngine;

public class NameOnPress : MonoBehaviour
{
    public Camera Player;
    public string POIButtonPressed; // Name of the button pressed
    private TapToPlace tapToPlace; // Script that handles the placement of the prefab
    private string ButtonName; // Duh
    private string folderPath; // Path to the folder where the prefabs are stored
    private string[] guids; // Array of guids of the prefabs in the folder
    private string prefabName; // Name of the prefab
    private float spawnDistance; // Distance between the prefab and the player
    private Vector3 prefabPosition; // Position of the prefab
    private Vector3 cameraForward; // Forward direction of the camera

    // Will be called once when the POI pad prefab is enabled
    private void Start()
    {
        // Path and guids of the prefabs in the folder
        folderPath = "Assets/Prefabs";
        guids = AssetDatabase.FindAssets("t:Prefab", new[] { folderPath });

        if (guids.Length == 0)
        {
            Debug.LogWarning("No prefabs found in the folder: " + folderPath);
        }
    }

    //  Will update the positioon of the prefab continuously
    private void Update()
    {
        // Refresh the position of player and update it each frame
        prefabPosition = Player.transform.position;
        cameraForward = Player.transform.forward;
        spawnDistance = 2.0f; // The spawn distance was kind of made "obsoete" by the tap to place but still good to keep it for polish
        prefabPosition += cameraForward * spawnDistance;
    }

    // Logic for finding desired prefab and placing it infront of the player
    public void NameRetreiver()
    {
        // Retreive button name to match it with the prefab name
        ButtonName = this.name;

        // Iterate over the prefab names in the folder
        foreach (string guid in guids)
        {
            // Convert the guid to a path
            string prefabPath = AssetDatabase.GUIDToAssetPath(guid);

            // Extract name of prefab from path
            prefabName = Path.GetFileNameWithoutExtension(prefabPath);

            // If prefab found, instantiate it
            if (prefabName == ButtonName)
            {
                Debug.Log("Found! and his name iissss *drum roll* " + prefabName);

                // Load the prefab using the asset path
                GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(prefabPath);
                Instantiate(prefab, prefabPosition, Quaternion.identity);

                // Stick the prefab to the pointer end immediatly, then pinch to place
                tapToPlace = prefab.GetComponent<TapToPlace>();
                tapToPlace.StartPlacement();
            }
            else
            {
                Debug.Log("Not Found! The path might need adjustment or maybe the prefab is not in the folder");
            }
        }
    }
}
