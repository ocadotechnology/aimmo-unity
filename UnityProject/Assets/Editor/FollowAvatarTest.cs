using System;  
using System.Collections;
using System.Threading;
using UnityEditor;
using UnityEngine;
using NUnit.Framework;

namespace AIMMOUnityTest
{
	[TestFixture]
	internal class FollowAvatarTest
	{
		public class FollowAvatarWrapper 
		{
			private GameObject context = new GameObject();
			private GameObject user = new GameObject();
			public FollowAvatar followAvatar;
			private const int fps = 25;

			public FollowAvatarWrapper(float x, float y)
			{
				IsometricPosition position = context.AddComponent<IsometricPosition>();
				position.Set(x, y);

				followAvatar = context.AddComponent<FollowAvatar>();
				followAvatar.Awake();
			}

			public Vector2 GetPosition() 
			{
				IsometricPosition position = context.GetComponent<IsometricPosition>();
				return position.Vector();
			}

			public void SetNextPosition(float x, float y)
			{	
				IsometricPosition position = user.AddComponent<IsometricPosition> ();
				position.Set (x, y);

				float token = UnityEngine.Random.value;
				user.transform.name = token.ToString("0.00000000");
				followAvatar.FollowUserWithId(user.transform.name);
			}

			public float Frames(float x, float y, float x2, float y2)
			{
				return (Mathf.Abs (x - x2) + Mathf.Abs (y - y2)) * fps;
			}
		}
			
		[TestCase(1.0f, 2.0f, 2.0f, 3.0f)]
		[TestCase(0.0f, 0.0f, 10.0f, 10.0f)]
		[TestCase(1.0f, 1.0f, 1.0f, 1.0f)]
		[TestCase(0.0f, 0.0f, 0.0f, 10.0f)]
		public void TestCameraMovesToTargetPosition(float x, float y, float x2, float y2) 
		{
			FollowAvatarWrapper wrapper = new FollowAvatarWrapper(x, y);

			wrapper.SetNextPosition(x2, y2);
			for (int i = 1; i <= wrapper.Frames(x, y, x2, y2); ++i) 
			{
				wrapper.followAvatar.Update();
			}

			Assert.AreEqual(wrapper.GetPosition(), new Vector2(x2, y2));
		}
	}
}
