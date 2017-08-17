using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using NUnit.Framework;

namespace AIMMOUnityTest
{
	[TestFixture]
	internal class IsometricPositionTest
	{
		// For float comparisons.
		private const float epsilon = 0.00001f;

		[TestCase(0.0f, 0.0f)]
		[TestCase(5.0f, 0.0f)]
		[TestCase(0.0f, 8.0f)]
		[TestCase(4.0f, 2.0f)]
		[TestCase(-3.0f, 12.0f)]
		[TestCase(-9.0f, -2.0f)]
		public void TestIsometricPositionSetters(float x, float y)
		{
			GameObject[] gameObjects = new GameObject[3];
			IsometricPosition[] isometricPositions = new IsometricPosition[3];
			for (int i = 0; i < gameObjects.Length; i++) 
			{
				gameObjects[i] = new GameObject();
				isometricPositions[i] = gameObjects[i].AddComponent<IsometricPosition>();
			}

			isometricPositions[0].Set(x, y, 0.0f);
			isometricPositions[1].Set(x, y);
			isometricPositions[2].Set(new Vector2(x, y));

			Assert.AreEqual(isometricPositions[0], isometricPositions[1]);
			Assert.AreEqual(isometricPositions[1], isometricPositions[2]);
			Assert.AreEqual(isometricPositions[2], isometricPositions[0]);
		}

		[TestCase(0.0f, 0.0f, 0.0f, 0.0f)]
		[TestCase(1.0f, 2.0f, 3.0f, 6.0f)]
		[TestCase(4.0f, 5.0f, -8.0f, 1.0f)]
		[TestCase(8.0f, 3.0f, 1.0f, 12.0f)]
		public void TestIsometricDepth(
			float x, 
			float y, 
			float relativeDepth, 
			float expectedDepth)
		{
			GameObject empty = new GameObject();
			IsometricPosition position = empty.AddComponent<IsometricPosition>();

			position.Set(x, y, relativeDepth);

			Assert.AreEqual(position.depth, expectedDepth);
		}

		[TestCase(0.0f, 0.0f, 0.0f, 0.0f, 0.0f)]
		[TestCase(3.0f, 0.0f, 2.12132f, 1.224745f, 3.0f)]
		[TestCase(0.0f, 2.0f, -1.414214f, 0.8164966f, 2.0f)]
		[TestCase(4.0f, 7.0f, -2.12132f, 4.490731f, 11.0f)]
		[TestCase(-1.0f, -3.0f, 1.414214f, -1.632993f, -4.0f)]
		public void TestIsometricCalculation(
			float isometricX, 
			float isometricY,
			float realX,
			float realY,
			float realZ)
		{
			GameObject empty = new GameObject();
			IsometricPosition position = empty.AddComponent<IsometricPosition>();

			position.Set(isometricX, isometricY);

			Vector3 realPosition = new Vector3(realX, realY, realZ);
			float diff = Vector3.Distance(empty.transform.position, realPosition);

			Assert.IsTrue(diff < epsilon);
		}

		[TestCase(0.0f, 0.0f, -1.0f)]
		[TestCase(4.0f, 5.0f, 2.0f)]
		[TestCase(-1.0f, 7.0f, 4.0f)]
		[TestCase(5.0f, 10.0f, 3.0f)]
		[TestCase(-6.0f, -2.0f, -8.0f)]
		public void TestChangingRelativeDepth(float x, float y, float depthChange)
		{
			Assert.AreNotEqual(depthChange, 0.0f);

			GameObject empty = new GameObject();
			IsometricPosition position = empty.AddComponent<IsometricPosition>();

			position.Set(x, y);
			Vector3 initialPosition = empty.transform.position;

			position.ChangeRelativeDepth(depthChange);
			Assert.AreNotEqual(initialPosition, empty.transform.position);

			position.ChangeRelativeDepth(0.0f);
			Assert.AreEqual(initialPosition, empty.transform.position);
		}

		[TestCase(0)]
		[TestCase(3)]
		[TestCase(-8)]
		[TestCase(47)]
		public void TestChangingSpriteRenderersSortingOrder(int sortingOrder)
		{
			GameObject empty = new GameObject();
			IsometricPosition position = empty.AddComponent<IsometricPosition>();
			position.depth = (float) -sortingOrder;

			SpriteRenderer renderer = empty.AddComponent<SpriteRenderer>();
			renderer.sortingOrder = -10;
		
			GameObject child = new GameObject();
			SpriteRenderer childRenderer = child.AddComponent<SpriteRenderer>();
			childRenderer.sortingOrder = 12;
			child.transform.parent = empty.transform;

			position.ChangeAllSpriteRenderersSortingOrder();

			Assert.AreEqual(renderer.sortingOrder, sortingOrder);
			Assert.AreEqual(childRenderer.sortingOrder, sortingOrder);
		}
	}
}