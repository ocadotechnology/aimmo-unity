 using UnityEngine;
 using System.Collections;
 
 public class Zoom : MonoBehaviour {
     
     public float zoomSpeed = 1;
     public float targetOrtho;
     public float smoothSpeed = 2.0f;
     public float minOrtho = 1.0f;
     public float maxOrtho = 20.0f;
     
     void Start() {
         targetOrtho = Camera.main.orthographicSize;
     }
     
     void Update () {
         
         float scroll = Input.GetAxis ("Mouse ScrollWheel");
         if (scroll != 0.0f) {
             targetOrtho -= scroll * zoomSpeed;
             targetOrtho = Mathf.Clamp (targetOrtho, minOrtho, maxOrtho);
         }
         
         Camera.main.orthographicSize = Mathf.MoveTowards (Camera.main.orthographicSize, targetOrtho, smoothSpeed * Time.deltaTime);
     }
 }