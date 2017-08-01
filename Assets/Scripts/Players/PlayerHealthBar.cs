using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHealthBar : MonoBehaviour 
{
	// Constants.
	private const int TextureWidth = 100;
	private const int TextureHeight = 25;

	private const float SpriteRectWidth = 10.0f;
	private const float SpriteRectHeight = 1.0f;
	private const float SpritePivotCoordX = 0.5f;
	private const float SpritePivotCoordY = 0.5f;
	private const float SpritePixelsPerUnit = 100.0f;

	private const float BarVerticalPosition = -0.3f;
	private const float BarMaxScaleX = 10.0f;
	private const float BarMaxScaleY = 10.0f;
	private const float BarInitialScaleX = 5.0f;

	private const float HealthBarRotationX =  0.0f;
	private const float HealthBarRotationY = 45.0f;
	private const float HealthBarRotationZ =  0.0f;
	private const float HealthBarPositionX = -0.45f;
	private const float HealthBarPositionY =  0.25f;
	private const float HealthBarPositionZ = -0.45f;

	private const float MinHP = 0.0f;
	private const float MaxHP = 10.0f; // = BarMaxScaleX
	private const float MinHPFromBackend = 0.0f;
	private const float MaxHPFromBackend = 100.0f; 
	private const float InitialHP = 5.0f; // = BarInitialScaleX
	private const float GreenBarPositionZeroHP = -0.5f;
	private const float GreenBarIncrementOneHP = 0.05f;

	// Healthbar game objects.
	private GameObject healthBar;
	private GameObject redBar;
	private GameObject greenBar;

	void Start() 
	{
		healthBar = new GameObject("Health bar");
		redBar = new GameObject("Red bar");
		greenBar = new GameObject("Green bar");

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


		SpriteRenderer redBarRenderer = redBar.AddComponent<SpriteRenderer>();
		redBarRenderer.color = Color.red;
		redBarRenderer.sprite = redBarSprite;
		redBarRenderer.sortingLayerName = "HealthBar";
		redBarRenderer.sortingOrder = 0;
		SpriteRenderer greenBarRenderer = greenBar.AddComponent<SpriteRenderer>();
		greenBarRenderer.color = Color.green;
		greenBarRenderer.sprite = greenBarSprite;
		greenBarRenderer.sortingLayerName = "HealthBar";
		greenBarRenderer.sortingOrder = 1;

		greenBar.transform.parent = healthBar.transform;
		redBar.transform.parent = healthBar.transform;

		redBar.transform.localPosition = new Vector3(0.0f, BarVerticalPosition, 0.0f);
		redBar.transform.localRotation = Quaternion.Euler(0.0f, 0.0f, 0.0f);
		redBar.transform.localScale = new Vector3(BarMaxScaleX, BarMaxScaleY, 1.0f);

		// Move green bar a bit left. And make it a bit smaller. 
		// Startig health value is 5/10. 
		greenBar.transform.localPosition = new Vector3(GetGreenBarX(InitialHP), BarVerticalPosition, 0.0f);
		greenBar.transform.localRotation = Quaternion.Euler(0.0f, 0.0f, 0.0f);
		greenBar.transform.localScale = new Vector3(BarInitialScaleX, BarMaxScaleY, 1.0f);

		healthBar.transform.parent = transform;

		healthBar.transform.localRotation = Quaternion.Euler(
			HealthBarRotationX, 
			HealthBarRotationY, 
			HealthBarRotationZ);
		healthBar.transform.localPosition = new Vector3(
			HealthBarPositionX, 
			HealthBarPositionY, 
			HealthBarPositionZ);		
	}
	
	// Called from player controller.
	public void SetHealthPoints(float hp)
	{
		hp *= (MaxHP - MinHP) / (MaxHPFromBackend - MinHPFromBackend);

		// Bound hp from 0 to 10.
		float actualHP = hp > MaxHP ? MaxHP : (hp < MinHP ? MinHP : hp);

		// This is the formula so that it looks nice.
		float greenBarX = GetGreenBarX(actualHP);
		greenBar.transform.localPosition = new Vector3(greenBarX, BarVerticalPosition, 0.0f);
		greenBar.transform.localScale = new Vector3(actualHP, BarMaxScaleY, 1.0f);
	}

	private float GetGreenBarX(float hp)
	{
		return GreenBarPositionZeroHP + (hp * GreenBarIncrementOneHP);
	}
}
