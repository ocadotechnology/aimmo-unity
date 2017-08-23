using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

namespace MonoNS 
{
	public class SpriteGeneratorBuilder : MonoBehaviour
	{
		private float x;
		private float y;
		private int width;
		private int height;
		private string path;

		[SerializeField]
		private string typeName;

		public SpriteGeneratorBuilder CreateBuilder(Type type)
		{
			x = 0;
			y = 0;
			width = 0;
			height = 0;
			path = null;

			this.typeName = type == null ? null : type.AssemblyQualifiedName.ToString();

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

			return this;
		}


		public IGenerator Build()
		{
			Type type = Type.GetType (typeName);
			if (path == null) 
				return (IGenerator) Activator.CreateInstance(
					type, 
					new object[] { x, y });
			else 
				return (IGenerator) Activator.CreateInstance(
					type, 
					new object[] { x, y, GetSprite() });
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

		private string GetSprite()
		{
			return @"""sprite"" : {
					""width"" : " + width.ToString() + @",  
					""height"" : " + height.ToString() + @",  
					""path"" : " + path + @"
			}";
		}
	}
}