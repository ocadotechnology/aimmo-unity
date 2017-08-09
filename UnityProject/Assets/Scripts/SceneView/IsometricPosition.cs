using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Every element in the scene has its standard position as well as its isometric
 * position, handled by this script. It translate 2D coordinates as sent by the
 * backend to 3D coordinates in our isometric space, which basically means that 
 * it makes sure that each object is in the correct depth. The following diagram
 * gives a rough idea of how the different levels of depth work in Unity:
 * 
 *  				Camera 
 * 						\ --- depth 0
 * 						 \   \ --- depth 1
 * 						  \   \ --- depth 2
 * 						   /   O --- depth 3
 * 						    \   / --- depth 4
 *
 * In this example we would have a sprite, '/', on front (depth 2) and then the
 * avatar, 'O', sitting on depth 3, on top another sprite in depth 4.
 */

public class IsometricPosition : MonoBehaviour 
{
	// Coordinates the object is meant to be at and depth.
	public float x;
	public float y;
	public float depth;

	// Distance between depth layers.
	private const float shiftScale = 1.0f;

	// Constants for position transformation.
	private const float shiftX =  1.00000000000f;
	private const float shiftY = -1.41421356237f;
	private const float shiftZ =  1.00000000000f;
	private Vector3 shiftDirection = new Vector3(shiftX, shiftY, shiftZ);

	// Setters.
	public void Set(float x, float y, float relativeDepth)
	{
		this.x = x;
		this.y = y;
		this.depth = (x + y + relativeDepth);

		ChangeAllSpriteRenderersSortingOrder();

		Vector3 realPosition = new Vector3(x, 0.0f, y);
		Vector3 depthShift = this.depth * shiftScale * shiftDirection;
	
		transform.position = realPosition + depthShift;
	}

	public void Set(float x, float y)
	{
		Set(x, y, 0.0f);
	}

	public void Set(Vector2 position)
	{
		Set(position.x, position.y);
	}

	// Getter.
	public Vector2 Vector()
	{
		return new Vector2(x, y);
	}

	// Push back a sprite (useful for floor tiles).
	public void ChangeRelativeDepth(float relativeDepth)
	{
		Set(x, y, relativeDepth);
	}

	// Change the sorting order of every sprite renderer in the game object and
	// its children in the case that the game object just acts as a wrapper of
	// sprites or contains sprites inside.
	public void ChangeAllSpriteRenderersSortingOrder()
	{
		int sortingOrder = Convert.ToInt32(-this.depth);

		SpriteRenderer spriteRenderer = GetComponent<SpriteRenderer>();
		if (spriteRenderer != null) 
		{
			spriteRenderer.sortingOrder = sortingOrder;
		} 

		SpriteRenderer[] childSpriteRenderers = GetComponentsInChildren<SpriteRenderer>();
		foreach (SpriteRenderer childSpriteRenderer in childSpriteRenderers)
		{
			childSpriteRenderer.sortingOrder = sortingOrder;
		}
	}
}
