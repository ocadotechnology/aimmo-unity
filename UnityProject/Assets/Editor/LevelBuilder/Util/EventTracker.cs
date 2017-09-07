using UnityEditor;
using UnityEngine;

/* Delegates what to do with the events. For now it only handles keyboard events
 * but in the future it might be extended to mouse events.
 */

[InitializeOnLoad]
public static class EventTracker
{
    static EventTracker()
	{
		AvatarController.RemoveAvatar();

		SceneView.onSceneGUIDelegate += view =>
		{
			Event e = Event.current;

			switch (e.type)
			{
				case EventType.keyDown:
				{
					// This delivers keys to the key listener. The
					// key listeners dispaches the events to the correct action.
					ObjectController.GetKeyListener().Receive(Event.current.keyCode);
					break;
				}
			}
		};
	}
}
