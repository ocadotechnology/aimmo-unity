using UnityEngine;
using System.Collections;

public class MoveCamera : MonoBehaviour
{
    public float zoomSpeed = 0.5f;
    private float minCameraCap = 1.2f;
    private float maxCameraCap = 7.0f;

    private RaycastHit[] hits;
    private bool foundMap = true;
    private Vector3 prevIncr;

    private KeyCode dragKey = KeyCode.Mouse0; // left mouse button

    // Ground plane we will drag the camera on
    // Defined by origin point and normal vector
    Plane groundPlane;
    private Vector3 groundOrigin = Vector3.zero;
    private Vector3 groundNormal = Vector3.up;

    private Vector3 dragOrigin; // mouse down point


    public void Start()
    {
        groundPlane = new Plane(groundNormal, groundOrigin);
    }


    public void Update()
    {
        // PAN
        float offset; // distance from camera's ray to drag origin ray
        Ray mouseRay = Camera.main.ScreenPointToRay(Input.mousePosition); // drag origin ray
        foundMap = false;

        // Check if map is visible
        hits = Physics.RaycastAll(transform.position, transform.forward, 100.0F);

        foreach (RaycastHit hit in hits)
        {
            foundMap |= hit.transform.gameObject.tag == "Terrain";
        }

        // Start drag
        if (Input.GetKeyDown(dragKey))
        {
            groundPlane.Raycast(mouseRay, out offset);
            dragOrigin = mouseRay.GetPoint(offset);
        }

        // Continue drag
        if (Input.GetKey(dragKey))
        {
            groundPlane.Raycast(mouseRay, out offset);
            Vector3 intersection = mouseRay.GetPoint(offset);

            if (foundMap)
            {
                prevIncr = dragOrigin - intersection;
                transform.position += prevIncr;
            }
            else
            {
                transform.position -= prevIncr;
            }
        }


        // ZOOM
        // Mouse scrollwheel to zoom in fixed increments
        float scroll = Input.GetAxis("Mouse ScrollWheel");

        if (scroll > 0)
        {
            Camera.main.orthographicSize = Mathf.Max(Camera.main.orthographicSize - zoomSpeed, minCameraCap);
        }
        else if (scroll < 0)
        {
            Camera.main.orthographicSize = Mathf.Min(Camera.main.orthographicSize + zoomSpeed, maxCameraCap);
        }
    }
}
