using System;
using UnityEditor;
using UnityEngine;
using UnitySocketIO;
using UnitySocketIO.Events;

public class SocketIOServer 
{
	private SocketIOController io;
	private string levelJson;

	public SocketIOServer(string levelJson)
	{
		this.levelJson = levelJson;
	}

	public void StartServer() 
	{
		io.ResetSettings();
		io.Connect();

		io.BroadcastMessage ("world-init");

		io.On("client-ready", (SocketIOEvent e) =>
		{
			Debug.Log("Received client-ready");
			
			io.BroadcastMessage ("world-update", levelJson);
		});
	}

	public void StopServer()
	{
		io.Close ();
	}
}

