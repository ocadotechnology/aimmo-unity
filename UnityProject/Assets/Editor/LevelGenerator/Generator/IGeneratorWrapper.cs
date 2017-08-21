using UnityEditor;
using UnityEngine;
using System;

namespace GeneratorNS {
	public class WrapperIGenerator : MonoBehaviour
	{
		public WrapperIGenerator Generator { get; set; }

		public void Awake()
		{
			Generator = null;
		}
	}
}

