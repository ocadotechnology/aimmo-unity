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
		position.Set(x + 0.5f, y + 0.5f, -1.0f);
	}

	private void RegisterKeys()
	{
		var RegisterKey = new Action<KeyCode, Action>((keyCode, action) => 
		{
			if (Input.GetKeyDown(keyCode)) 
				action ();
		});

		RegisterKey(KeyCode.W, () => RegisterNextPosition(1.0f, 0.0f));
		RegisterKey(KeyCode.A, () => RegisterNextPosition(0.0f, 1.0f));
		RegisterKey(KeyCode.S, () => RegisterNextPosition(-1.0f, 0.0f));
		RegisterKey(KeyCode.D, () => RegisterNextPosition(0.0f, -1.0f));
	}

	private void RegisterNextPosition(float diffX, float diffY)
	{
		IsometricPosition pos = transform.gameObject.GetComponent<IsometricPosition>();
		float x = pos.x + diffX;
		float y = pos.y + diffY;

		pos.Set(x, y, -1.0f);
	}

	void Update()
	{
		RegisterKeys ();
	}
}
