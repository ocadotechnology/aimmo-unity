using UnityEngine;
using System.Runtime.InteropServices;

public class SocketIOWrapper : MonoBehaviour
{

#if UNITY_WEBGL && !UNITY_EDITOR
    [DllImport("__Internal")]
    private static extern void ReceiveSocketEvents(string url, string path);
#endif

    // Use this for initialization
    void Start()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        ReceiveSocketEvents("dev.aimmo.codeforlife.education", "/game-2");
#endif
    }
}