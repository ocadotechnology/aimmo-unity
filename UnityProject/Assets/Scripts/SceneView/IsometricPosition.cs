using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Every element in the scene has its standard position as well as its isometric
 * position, handled by this script. It translate 2D coordinates as sent by the
 * backend to 3D coordinates in our isometric space, which basically means that 
 * it makes sure that each object is in the correct depth. 
 * 
 * Go to https://github.com/ocadotechnology/aimmo-unity/wiki/Isometric-view for
 * a more detailed explanation.
 */

public class IsometricPosition : MonoBehaviour
{
	// Coordinates the object is meant to be at and depth.
	public float x;
	public float y;
	public float depth;

	// Distance between depth layers.
	private const float ShiftScale = 1.0f;

	// Setters.
	public void Set(float x, float y, float relativeDepth)
	{
		this.x = x;
		this.y = y;
		this.depth = x + y + relativeDepth;

		ChangeAllSpriteRenderersSortingOrder();

		transform.position = new Vector3(
			(x - y) * Constants.IsometricShiftX * ShiftScale,
			(x + y) * Constants.IsometricShiftY * ShiftScale,
			this.depth);
	}

	public void Set(float x, float y)
	{
		Set(x, y, 0.0f);
	}

	public void Set(Vector2 position)
	{
		Set(position.x, position.y, 0.0f);
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
			spriteRenderer.sortingOrder = sortingOrder;

		SpriteRenderer[] childSpriteRenderers = GetComponentsInChildren<SpriteRenderer>();
		foreach (SpriteRenderer childSpriteRenderer in childSpriteRenderers)
			childSpriteRenderer.sortingOrder = sortingOrder;
	}

	// Isometric positions are comparable.
	public override bool Equals(object obj)
	{
		var position = obj as IsometricPosition;

		if (position == null)
			return false;

		return this.x == position.x && this.y == position.y;
	}

	public override int GetHashCode()
	{
		return this.GetHashCode();
	}
}
