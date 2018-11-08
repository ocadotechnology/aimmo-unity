using UnityEngine;
using System.Collections;

public class MoveCamera : MonoBehaviour
{
    public float zoomSpeed = 0.5f;
    private float minCameraCap = 1.2f;
    private float maxCameraCap = 7.0f;

    private RaycastHit[] hits;
    private Vector3 cameraTranslation;
    private Ray mouseRay;
    private float mouseTranslation; // distance from camera's ray to drag origin ray

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
        mouseRay = Camera.main.ScreenPointToRay(Input.mousePosition); // drag origin ray

        // Start drag
        if (Input.GetKeyDown(dragKey))
        {
            groundPlane.Raycast(mouseRay, out mouseTranslation);
            dragOrigin = mouseRay.GetPoint(mouseTranslation);
        }

        // Continue drag
        if (Input.GetKey(dragKey))
        {
            ContinueDrag();
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

    private bool IsMapVisible()
    {

        hits = Physics.RaycastAll(transform.position, transform.forward, 100.0F);

        foreach (RaycastHit hit in hits)
        {
            if (hit.transform.gameObject.tag == "Terrain")
            {
                return true;
            }
        }

        return false;
    }

    private void ContinueDrag()
    {
        groundPlane.Raycast(mouseRay, out mouseTranslation);
        Vector3 intersection = mouseRay.GetPoint(mouseTranslation);

        if (IsMapVisible())
        {
            cameraTranslation = dragOrigin - intersection;
            transform.position += cameraTranslation;
        }
        else
        {
            transform.position -= cameraTranslation;
        }
    }
}
