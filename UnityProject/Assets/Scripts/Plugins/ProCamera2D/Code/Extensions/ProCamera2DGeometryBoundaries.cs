using UnityEngine;

namespace Com.LuisPedroFonseca.ProCamera2D
{
    #if UNITY_5_3_OR_NEWER
    [HelpURLAttribute("http://www.procamera2d.com/user-guide/extension-geometry-boundaries/")]
    #endif
    public class ProCamera2DGeometryBoundaries : BasePC2D, IPositionDeltaChanger
    {
        public static string ExtensionName = "Geometry Boundaries";

        [Tooltip("The layer that contains the (3d) colliders that define the boundaries for the camera")]
        public LayerMask BoundariesLayerMask;

        MoveInColliderBoundaries _cameraMoveInColliderBoundaries;

        override protected void Awake()
        {
            base.Awake();

            _cameraMoveInColliderBoundaries = new MoveInColliderBoundaries(ProCamera2D);
            _cameraMoveInColliderBoundaries.CameraTransform = ProCamera2D.transform;
            _cameraMoveInColliderBoundaries.CameraCollisionMask = BoundariesLayerMask;

            ProCamera2D.AddPositionDeltaChanger(this);
        }

        protected override void OnDestroy()
        {
            base.OnDestroy();

            if(ProCamera2D)
                ProCamera2D.RemovePositionDeltaChanger(this);
        }

        #region IPositionDeltaChanger implementation

        public Vector3 AdjustDelta(float deltaTime, Vector3 originalDelta)
        {
            if (!enabled)
                return originalDelta;
            
            _cameraMoveInColliderBoundaries.CameraSize = ProCamera2D.ScreenSizeInWorldCoordinates;

            // Apply movement considering the collider boundaries
            return _cameraMoveInColliderBoundaries.Move(originalDelta);
        }

        public int PDCOrder { get { return _pdcOrder; } set { _pdcOrder = value; } }
        int _pdcOrder = 3000;

        #endregion
    }
}