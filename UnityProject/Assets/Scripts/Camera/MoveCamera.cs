using UnityEngine;
using System.Collections;

public class MoveCamera : MonoBehaviour
{
    public float zoomSpeed = 1.0f;

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
            transform.position += dragOrigin - intersection;
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
