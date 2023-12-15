using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoxelBehavior : MonoBehaviour, ISpatialData3D
{

    Vector3? CachedPosition;
    Bounds? CachedBounds;
    float? CachedRadius;

    [SerializeField] MeshRenderer LinkedMeshRenderer;
    private Color OldColor;

    void Start()
    {
        OldColor = GetComponent<MeshRenderer>().material.color;
    }

    public void AddHighlight()
    {
        LinkedMeshRenderer.material.color = Color.yellow;
    }

    public void RemoveHighlight()
    {
        LinkedMeshRenderer.material.color = OldColor;
    }

    bool IsCahedDataInvalid
    {
        get
        {
            if (CachedPosition == null || CachedBounds == null || CachedRadius == null)
                return true;

            return !Mathf.Approximately((transform.position - CachedPosition.Value).sqrMagnitude, 0f);
        }
    }

    Bounds ISpatialData3D.GetBounds()
    {
        if (IsCahedDataInvalid)
            UpdateCachedData();
        
        return CachedBounds.Value;
    }

    Vector3 ISpatialData3D.GetLocation()
    {
        if (IsCahedDataInvalid)
            UpdateCachedData();

        return CachedPosition.Value;
    }

    float ISpatialData3D.GetRadius()
    {
        if (IsCahedDataInvalid)
            UpdateCachedData();

        return CachedRadius.Value;
    }

    void UpdateCachedData()
    {
        CachedPosition = transform.position;
        CachedBounds = GetComponent<MeshRenderer>().bounds;
        CachedRadius = GetComponent<MeshRenderer>().bounds.extents.magnitude;
    }
}
