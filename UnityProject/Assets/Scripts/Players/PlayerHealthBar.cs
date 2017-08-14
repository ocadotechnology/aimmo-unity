using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Creates the health bar sprite attached to each avatar and provides an easy
 * interface to modify it. When the health points change, it suffices to call
 * SetHealthPoints() and this class will do the rest.ss
 */

public class PlayerHealthBar : MonoBehaviour 
{
	// Texture constants.
	private const int TextureWidth = 100;
	private const int TextureHeight = 25;

	// Sprite initialisation constants.
	private const float SpriteRectWidth = 10.0f;
	private const float SpriteRectHeight = 1.0f;
	private const float SpritePivotCoordX = 0.5f;
	private const float SpritePivotCoordY = 0.5f;
	private const float SpritePixelsPerUnit = 100.0f;

	// General bar constants.
	private const float BarVerticalPosition = -0.3f;
	private const float BarMaxScaleX = 10.0f;
	private const float BarMaxScaleY = 10.0f;

	// Health bar game object positioning constants.
	private const float HealthBarRotationX =  0.0f;
	private const float HealthBarRotationY = 45.0f;
	private const float HealthBarRotationZ =  0.0f;
	private const float HealthBarPositionX = -0.45f;
	private const float HealthBarPositionY =  0.25f;
	private const float HealthBarPositionZ = -0.45f;

	// Constants to handle changes in the health poitns.
	private const float MinHP = 0.0f;
	private const float MaxHP = 10.0f;
	private const float MinHPFromBackend = 0.0f;
	private const float MaxHPFromBackend = 10.0f; 
	private const float GreenBarPositionZeroHP = -0.5f;
	private const float GreenBarIncrementOneHP = 0.05f;

	// Health bar game objects.
	private GameObject healthBar;
	private GameObject redBar;
	private GameObject greenBar;

	void Awake() 
	{
		healthBar = new GameObject("Health bar");
		redBar = new GameObject("Red bar");
		greenBar = new GameObject("Green bar");

		// Generate basic green and red textures.
		Texture2D greenTexture = new Texture2D(TextureWidth, TextureHeight);
		Texture2D redTexture = new Texture2D(TextureWidth, TextureHeight);
		for (int x = 0; x < TextureWidth; x++) 
		{
			for (int y = 0; y < TextureHeight; y++) 
			{
				greenTexture.SetPixel(x, y, Color.green);
				redTexture.SetPixel(x, y, Color.red);
			}
		}

		// Green and red bar sprites.
		Sprite greenBarSprite = Sprite.Create(
			greenTexture, 
			new Rect(0.0f, 0.0f, SpriteRectWidth, SpriteRectHeight),
			new Vector2(SpritePivotCoordX, SpritePivotCoordY),
			SpritePixelsPerUnit);
		Sprite redBarSprite = Sprite.Create(
			redTexture, 
			new Rect(0.0f, 0.0f, SpriteRectWidth, SpriteRectHeight),
			new Vector2(SpritePivotCoordX, SpritePivotCoordY),
			SpritePixelsPerUnit);

		// Green and red bar sprite renderers.
		SpriteRenderer redBarRenderer = redBar.AddComponent<SpriteRenderer>();
		redBarRenderer.color = Color.red;
		redBarRenderer.sprite = redBarSprite;
		SpriteRenderer greenBarRenderer = greenBar.AddComponent<SpriteRenderer>();
		greenBarRenderer.color = Color.green;
		greenBarRenderer.sprite = greenBarSprite;

		greenBar.transform.parent = healthBar.transform;
		redBar.transform.parent = healthBar.transform;

		// Red bar game object positioning. This wont change.
		redBar.transform.localPosition = new Vector3(
			0.0f, 
			BarVerticalPosition, 
			0.0f);
		redBar.transform.localRotation = Quaternion.Euler(Vector3.zero);
		redBar.transform.localScale = new Vector3(
			BarMaxScaleX, 
			BarMaxScaleY, 
			1.0f);

		// Green bar game object positioning. The x position will change when
		// it is rescaled. When the healht points change, we move the green
		// bar accordingly.
		greenBar.transform.localPosition = new Vector3(
			0.0f, 
			BarVerticalPosition, 
			0.0f);
		greenBar.transform.localRotation = Quaternion.Euler(Vector3.zero);
		greenBar.transform.localScale = new Vector3(
			BarMaxScaleX, 
			BarMaxScaleY, 
			1.0f);

		healthBar.transform.parent = transform;

		// Parent health bar positioning.
		healthBar.transform.localRotation = Quaternion.Euler(
			HealthBarRotationX, 
			HealthBarRotationY, 
			HealthBarRotationZ);
		healthBar.transform.localPosition = new Vector3(
			HealthBarPositionX, 
			HealthBarPositionY, 
			HealthBarPositionZ);		
	}
	
	// Change how the health bar looks. Called from player controller.
	public void SetHealthPoints(float hp)
	{
		hp *= (MaxHP - MinHP) / (MaxHPFromBackend - MinHPFromBackend);

		// Bound hp from 0 to 10.
		float actualHP = hp > MaxHP ? MaxHP : (hp < MinHP ? MinHP : hp);

		// This is the formula so that it looks nice.
		float greenBarX = GetGreenBarX(actualHP);
		greenBar.transform.localPosition = new Vector3(
			greenBarX, 
			BarVerticalPosition, 
			0.0f);
		greenBar.transform.localScale = new Vector3(
			actualHP, 
			BarMaxScaleY, 
			1.0f);
	}

	// Method that calculates how much we need to move the green bar when its
	// scale changes.
	private float GetGreenBarX(float hp)
	{
		return GreenBarPositionZeroHP + (hp * GreenBarIncrementOneHP);
	}
}
