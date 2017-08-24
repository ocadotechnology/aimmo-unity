using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using MapFeatures;

[ExecuteInEditMode]
public class SpriteGeneratorBuilder : MonoBehaviour
{
	/**
	 * A Builder pattern that is used to build Generators. A generators 
	 * is a method that generates an object using a Manager. For more 
	 * details see Editor/LevelGenerator/Generator and the managers 
	 * from Scripts/MapFeatures.
	 * 
	 * The SpriteGeneratorBuilder *has* to be attached to an object.
	 * 
	 * To keep the state of the scene once the scene is close, we *need to keep 
	 * a serializable object* that encasulates the state that describes how an 
	 * object should be generated.
	 * 
	 * The most of design is kept generic-less as Unity does not support adding 
	 * generic components.
	 */
	private float x;
	private float y;
	private int width;
	private int height;
	private string path;

	private bool hasLights;
	private LightData lights;

	/**
	 * The type is kept a type name that also refences also the assembly in which the
	 * type is found. Using a type is harder in this context as the Type may not be
	 * loaded inside the Assembly-CSharp(as the types are in Assembly-CSharp-Editor).
	 */
	[SerializeField]
	private string typeName;

	public SpriteGeneratorBuilder CreateBuilder(Type type)
	{
		this.x = 0.0f;
		this.y = 0.0f;
		this.width = 0;
		this.height = 0;
		this.path = null;
		this.typeName = type == null ? null : Convert.ToString(type.AssemblyQualifiedName);
		this.hasLights = false;

		return this;
	}

	public SpriteGeneratorBuilder ByBuilder(SpriteGeneratorBuilder builder)
	{
		this.x = builder.x;
		this.y = builder.y;
		this.width = builder.width;
		this.height = builder.height;
		this.path = builder.path;
		this.typeName = builder.typeName;
		this.hasLights = false;

		return this;
	}


	public IGenerator Build()
	{
		Type type = Type.GetType(typeName);

		/**
		 * All the generators have only this 2 kinds of contructors.
		 * 
		 * We create the instances using Reflection rather than using 
		 * generics as we do not know the type at runtime. For refence look 
		 * at Activator documentation.
		 * 
		 * The only 2 constructors for the classes present so far inside the 
		 * Generator module have only the constructors (float, float) and (float, float, string).
		 */
		if (path == null) 
			return (IGenerator) Activator.CreateInstance(type, new object[] {x, y});
		else 
			return (IGenerator) Activator.CreateInstance(type, new object[] {x, y, GetSprite()});
	}

	public SpriteGeneratorBuilder ByCoord(float x, float y)
	{
		this.x = x;
		this.y = y;

		return this;
	}

	// This should be called before ByWidth, ByHeight
	public SpriteGeneratorBuilder ByPath(string path)
	{
		this.path = path;

		TryInferDim ();
		return this;
	}

	// Infers sprite dimesion if they are specified in the file name as "FileName-300x300-tst.png"
	private bool TryInferDim()
	{
		string[] scv = path.Split ('-');
		foreach (string dimensionTry in scv) 
		{
			string[] dim = dimensionTry.Split ('x');
			if (dim.Length == 2) 
			{
				bool widthSucceded = int.TryParse(dim[0], out this.width);
				bool heightSucceded = int.TryParse(dim[1], out this.height);
				if (widthSucceded && heightSucceded) 
				{
					return true;
				}
			}
		}
		return false;
	}

	public SpriteGeneratorBuilder ByWidth(int width)
	{
		this.width = width;
		if (height == 0) 
		{
			height = width; 
		}
		return this;
	}

	public SpriteGeneratorBuilder ByHeight(int height)
	{
		this.height = height;
		if (width == 0) 
		{
			width = height; 
		}
		return this;
	}

	public SpriteGeneratorBuilder ByLightData(LightData data)
	{
		this.lights = data;
		this.hasLights = true;

		return this;
	}

	private string GetLights()
	{
		if (!hasLights) 
		{
			return "";
		} 
		return lights.ToJson () + ",";
	}

	private string GetSprite()
	{
		return @"""sprite"" : {
				""width"" : " + width.ToString() + @",  
				""height"" : " + height.ToString() + @",
				" + GetLights() + @" 
				""path"" : """ + path + @""",
		}";
	}
}