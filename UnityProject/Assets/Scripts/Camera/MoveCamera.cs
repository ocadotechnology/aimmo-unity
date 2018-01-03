using UnityEngine;
using System.Collections;

public class MoveCamera : MonoBehaviour 
{
	public float panSpeed = 1.0f;		
    public float zoomSpeed = 1.0f;

	private Vector3 firstPos;	// Mouse position in the beginning of the movement
    private Vector3 lastPos;    // Current mouse position
	private bool isPanning;	

	
	void Update () 
	{	
        // PAN
		// Right mouse button pressed to begin panning
		if (Input.GetMouseButtonDown(1)){
			// Save initial mouse position
            firstPos = Input.mousePosition;
            lastPos = firstPos;
			isPanning = true;
		}

        // Mouse released
        if (Input.GetMouseButtonUp(1)) 
            isPanning = false;

		// Move the camera on its XY plane
		if (isPanning){
            Vector3 currPos = Camera.main.ScreenToViewportPoint(Input.mousePosition - firstPos); // Current mouse position

            // If the mouse hasn't moved, the pan stops
            // if (currPos != lastPos)
            // {
                Vector3 move = new Vector3(-currPos.x * panSpeed, -currPos.y * panSpeed, 0);
                transform.Translate(move, Space.World);
               // lastPos = currPos;
            // }
		}

        // ZOOM
        // Mouse scrollwheel to zoom in fixed increments
        float scroll = Input.GetAxis("Mouse ScrollWheel");
        if (scroll > 0)
            Camera.main.orthographicSize -= zoomSpeed;
        else if (scroll < 0)
            Camera.main.orthographicSize += zoomSpeed;
	}
}