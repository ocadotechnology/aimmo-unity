using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamerasManager : MonoBehaviour 
{
	private const int firstUserLayer = 8;
	private const int emptyLayer = 3;
	private const int numberOfCameras = 20;
	private const int camerasBehindParent = 5;

	private GameObject parentCamera;
	private static int cameraLayerOffset;

	void Start() 
	{
		parentCamera = GameObject.FindGameObjectWithTag("MainCamera");
		cameraLayerOffset = RawLayerFromPosition(parentCamera.transform.position) - camerasBehindParent;

		// Create all the cameras.
		for (int i = 1; i <= numberOfCameras; i++)
		{
			GameObject cameraGameObject = new GameObject("camera" + Convert.ToString(i));
			cameraGameObject.transform.parent = parentCamera.transform;
			cameraGameObject.transform.localPosition = Vector3.zero;
			cameraGameObject.transform.localRotation = Quaternion.Euler(Vector3.zero);

			Camera camera = cameraGameObject.AddComponent<Camera>();
			camera.orthographic = true;
			camera.clearFlags = CameraClearFlags.Depth;

			// Assign the layer to render.
			camera.cullingMask = 1 << (firstUserLayer + i - 1);

			// The layer in the back is rendered first.
			// The layer in the front is rendered last.
			camera.depth = numberOfCameras - i;
		}
	}

	public void UpdateCameraLayerOffset()
	{
		cameraLayerOffset = RawLayerFromPosition(parentCamera.transform.position) - camerasBehindParent;

		foreach (GameObject mapFeature in GameObject.FindGameObjectsWithTag("MapFeature")) 
		{
			int layer = LayerFromPosition(mapFeature.transform.position);
			mapFeature.layer = layer;
		}
	}

	// Compute layer number.
	public static int LayerFromPosition(Vector3 position)
	{
		int layerNumber = RawLayerFromPosition(position) - cameraLayerOffset;
		if (layerNumber < 1 || layerNumber > numberOfCameras)
			return 0; // Default layer. No camera looks at objects in layer 0.
	
		return firstUserLayer + layerNumber;
	}

	private static int RawLayerFromPosition(Vector3 position)
	{
		return Convert.ToInt32(Math.Floor(position.x + position.z));
	}
}
