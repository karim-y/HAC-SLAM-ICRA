using UnityEngine;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;

public class FingerPose : MonoBehaviour
{
    Vector3 InitialPose, FinalPose, PrismCenter, Scale_incubes;
    Vector3Int InitialPose_incubes, FinalPose_incubes;
    public GameObject Prism;
    public MinecraftBuilder _MinecraftBuilder;
    Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose poseLeft;
    IMixedRealityHandJointService handJointService;
    float cubesize;
    GameObject Selector;
    bool EditorActivator;

    //MixedRealityInputAction selectAction;
    bool EnablePrism;
    private void Start()
    {
        handJointService = CoreServices.GetInputSystemDataProvider<IMixedRealityHandJointService>();
        cubesize = _MinecraftBuilder.cubesize;
        EnablePrism = false;
        EditorActivator = false;
    }



    public void Update()
    {
        
        if (EnablePrism == true && HandJointUtils.TryGetJointPose(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint.IndexTip, Microsoft.MixedReality.Toolkit.Utilities.Handedness.Right, out poseLeft))
        {
            
            FinalPose = poseLeft.Position;
            
            //Converting units to cubes:
            FinalPose_incubes.Set(Mathf.RoundToInt(FinalPose.x / cubesize), Mathf.RoundToInt(FinalPose.y / cubesize), Mathf.RoundToInt(FinalPose.z / cubesize));
            PrismCenter = (InitialPose_incubes + FinalPose_incubes);
            Scale_incubes.x = Mathf.Max(Mathf.Abs((InitialPose_incubes.x - FinalPose_incubes.x) * cubesize) + cubesize, cubesize);
            Scale_incubes.y = Mathf.Max(Mathf.Abs((InitialPose_incubes.y - FinalPose_incubes.y) * cubesize) + cubesize, cubesize);
            Scale_incubes.z = Mathf.Max(Mathf.Abs((InitialPose_incubes.z - FinalPose_incubes.z) * cubesize) + cubesize, cubesize);

            Selector.transform.position = PrismCenter * cubesize/2;
            Selector.transform.localScale = Scale_incubes;
            
        }
    }
    public void editor3D()
    {
        if (EditorActivator)
        {
            if (HandJointUtils.TryGetJointPose(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint.IndexTip, Microsoft.MixedReality.Toolkit.Utilities.Handedness.Right, out poseLeft))
            {
                EnablePrism = !EnablePrism;
                InitialPose = poseLeft.Position;
                InitialPose_incubes.Set(Mathf.RoundToInt(InitialPose.x / cubesize), Mathf.RoundToInt(InitialPose.y / cubesize), Mathf.RoundToInt(InitialPose.z / cubesize));

                if (EnablePrism == true)
                {
                    Selector = Instantiate(Prism, InitialPose_incubes, Quaternion.identity);
                    Selector.name = "Prism";
                }
            }
        }
        
}

    public void CubeAdder()
    {
        if (EditorActivator)
        {
            _MinecraftBuilder.InstantiateEditor(InitialPose_incubes, FinalPose_incubes);
            Destroy(Selector);
        }
        
    }

    public void CubeRemover()
    {
        if (EditorActivator)
        {
            _MinecraftBuilder.DestroyEditor(InitialPose_incubes, FinalPose_incubes);
            Destroy(Selector);
        }
        
    }

    public void ActivateEditor()
    {
        EditorActivator = !EditorActivator;
    }

}