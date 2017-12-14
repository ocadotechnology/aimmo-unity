using UnityEditor;
using UnityEngine;

namespace Com.LuisPedroFonseca.ProCamera2D
{
    public class ProCamera2DEditorHelper : Editor
    {
        public static void AssignProCamera2D(BasePC2D target)
        {
            if (target.ProCamera2D == null && Camera.main != null)
                target.ProCamera2D = Camera.main.GetComponent<ProCamera2D>();

            if (target.ProCamera2D == null)
                target.ProCamera2D = FindObjectOfType<ProCamera2D>();
            
            if (target.ProCamera2D == null)
                Debug.LogError("No ProCamera2D component found. Please add one to your camera.");
        }
    }
}