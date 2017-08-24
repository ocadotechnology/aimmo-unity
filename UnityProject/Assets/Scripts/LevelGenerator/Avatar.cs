using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class Avatar : MonoBehaviour
{
	public void Init(float x, float y)
	{
		IsometricPosition position = transform.gameObject.AddComponent<IsometricPosition>();
		position.Set(x, y);
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
		IsometricPosition pos = transform.gameObject.GetComponent<IsometricPosition> ();
		float x = pos.x + diffX;
		float y = pos.y + diffY;

		pos.Set (new Vector2 (x, y));
	}

	void Update()
	{
		RegisterKeys ();
	}
}
