using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using GeneratorNS;

public class SpriteGeneratorBuilder
{
	private float x = 0;
	private float y = 0;
	private int width = 0;
	private int height = 0;
	private string path = null;
	private Type type;

	public SpriteGeneratorBuilder(Type type)
	{
		this.type = type;
	}

	public IGenerator Build()
	{
		if (path == null) 
		{
			return (IGenerator) Activator.CreateInstance(type, new object[] { x, y });
		} 
		else 
		 {
			return (IGenerator) Activator.CreateInstance(type, new object[] { x, y, GetSprite() });
		}
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

		if (CanInferDim ()) 
		{
			InferDim ();
		}
		return this;
	}

	private bool CanInferDim()
	{
		return false;
	}

	private void InferDim()
	{
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

	private string GetSprite()
	{
		return @"""sprite"" : {
				""width"" : " + width.ToString() + @",  
				""height"" : " + height.ToString() + @",  
				""path"" : " + path + @"
		}";
	}
}

