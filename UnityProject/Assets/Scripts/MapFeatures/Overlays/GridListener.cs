using System;
using UnityEngine;
namespace MapFeatures.Overlays
{
    public class GridListener : MonoBehaviour
    {
        public void IsGridVisible(bool visible)
        {
            GetComponent<Renderer>().enabled = visible;
        }
    }
}
