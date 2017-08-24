using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

[ExecuteInEditMode]
public class Avatar : MonoBehaviour
{
	private PlayerController playerController;

	void Awake()
	{
	//	playerController = transform.AddComponent<PlayerController> ();
	}

	private void RegisterKeys()
	{
		var RegisterKey = new Action<KeyCode, Action>((keyCode, action) => 
		{
			if (Input.GetKeyDown (keyCode)) 
			{
				action ();
			}
		});

		RegisterKey (KeyCode.W, () => RegisterNextPosition(+1, 0));
		RegisterKey (KeyCode.A, () => RegisterNextPosition(0, +1));
		RegisterKey (KeyCode.S, () => RegisterNextPosition(-1, 0));
		RegisterKey (KeyCode.D, () => RegisterNextPosition(0, -1));
	}

	private void RegisterNextPosition(float diffX, float diffY)
	{
		IsometricPosition pos = playerController.GetComponent<IsometricPosition> ();
		float x = pos.x;
		float y = pos.y;

		PlayerData playerData = new PlayerData(new Vector2(x + diffX, y + diffY));
		playerController.SetNextState(playerData);
	}

	void Update()
	{
		RegisterKeys ();
	}
}
