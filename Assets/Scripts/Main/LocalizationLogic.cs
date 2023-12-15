using UnityEngine;

public class LocalizationLogic : MonoBehaviour
{
    public RosPublisherExample rosPublisher; // Duh
    public MiniMapLocalization miniMapLocalization; // Script that handles everything that has to do with the mini map
    public MergedVoxelDisplay mergedVoxelDisplay; // Script that handles everything that has to do with the merged map
    public GameObject PlayerPOV; // Camera of the player
    public float ScaleFactor = 0.03f; // Scale factor found at the scale vlaues in the editor of the minimap
    private Vector3 HMDPosition; // Final position of the player

    // Adjust map to real world scale, Localize, Called when button pressed
    public void UpdateMyPostion()
    {
        
        HMDPosition.x = (miniMapLocalization.FinalGuyPosition.x - miniMapLocalization.PivotLocation.x) / ScaleFactor;
        HMDPosition.y = 0.7f;
        HMDPosition.z = (miniMapLocalization.FinalGuyPosition.z - miniMapLocalization.PivotLocation.z) / ScaleFactor;
        PlayerPOV.transform.position = HMDPosition;

        rosPublisher.PubReadTrigger();

        /* 
        Since orgins shifed to the corner of the map, shift must be negative to bring back the x and z coordinats
        back to the original origin of miniMapLocalization (at the white sphere). Then scale up by the factor which is found in the
        editor. Y is set to 0.7 to be around the head of the wearer. 
        */
    }
}
