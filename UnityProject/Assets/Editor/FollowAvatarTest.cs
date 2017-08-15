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

				user.transform.name = "user";
				followAvatar.FollowUserWithId("user");
			}
		}

		[TestCase(1.0f, 2.0f, 2.0f, 3.0f)]
		public void TestCameraMovesToTargetPosition(float x, float y, float x2, float y2) 
		{
			FollowAvatarWrapper wrapper = new FollowAvatarWrapper(x, y);

			wrapper.SetNextPosition(x2, y2);
			for (int i = 1; i <= 50; ++i) 
			{
				wrapper.followAvatar.Update();
			}

			Debug.Log (wrapper.GetPosition().x.ToString("0.00"));
			Assert.AreEqual(wrapper.GetPosition(), new Vector2(x2, y2));
		}
	}
}
