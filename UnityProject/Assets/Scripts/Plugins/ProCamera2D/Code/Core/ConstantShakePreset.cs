﻿using System.Collections.Generic;
using UnityEngine;

namespace Com.LuisPedroFonseca.ProCamera2D
{
    [System.Serializable]
#if UNITY_5_3_OR_NEWER
    [CreateAssetMenu(menuName = "ProCamera2D/Constant Shake Preset")]
#endif
    public class ConstantShakePreset : ScriptableObject
    {
        public float Intensity = .3f;
        public List<ConstantShakeLayer> Layers;
    }

    [System.Serializable]
    public struct ConstantShakeLayer
    {
        [MinMaxSlider(0.001f, 10f)]
        public Vector2 Frequency;

        [Range(0f, 100f)]
        public float AmplitudeHorizontal;

        [Range(0f, 100f)]
        public float AmplitudeVertical;

        [Range(0f, 100f)]
        public float AmplitudeDepth;
    }
}