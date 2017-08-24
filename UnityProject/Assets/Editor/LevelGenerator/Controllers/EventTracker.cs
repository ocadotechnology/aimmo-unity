using UnityEditor;
using UnityEngine;

[InitializeOnLoad]
public static class EventTracker
{
	/**
     * This is a function that runs at the loading of the 
     * Editor Assembly. This should register send all the events
     * to the specific Controller. 
	 */
	private static void OnAllEvents()
	{
	}

	static EventTracker()
	{
		AvatarController.RemoveAvatar ();

		SceneView.onSceneGUIDelegate += view =>
		{
			Event e = Event.current;

			OnAllEvents();

			switch (e.type)
			{
				case EventType.keyDown:
				{
					// This delivers keys to the key listener. The
					// key listeners dispaches the events to the correct action.
					ObjectController.GetKeyListener ().Receive (Event.current.keyCode);
					break;
				}
				case EventType.mouseDown:
				{
					GeneratorWindow.RefreshGUI();
					break;
				}
			}
		};
	}
}
