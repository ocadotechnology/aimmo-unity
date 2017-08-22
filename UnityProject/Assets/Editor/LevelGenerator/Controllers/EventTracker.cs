using UnityEditor;
using UnityEngine;

[InitializeOnLoad]
public static class EventTracker
{
	private static void OnAllEvents()
	{
	}

	static EventTracker()
	{
		SceneView.onSceneGUIDelegate += view =>
		{
			Event e = Event.current;

			OnAllEvents();

			switch (e.type)
			{
				case EventType.keyDown:
				{
					ObjectController.GetKeyListener ().Receive (Event.current.keyCode);
					break;
				}
				case EventType.mouseDown:
				{
					Debug.Log("Click event.");
					break;
				}
			}
		};
	}
}
