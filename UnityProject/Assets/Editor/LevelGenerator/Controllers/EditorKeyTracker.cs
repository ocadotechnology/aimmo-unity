using UnityEditor;
using UnityEngine;

[InitializeOnLoad]
public static class EditorKeyTracker
{

	static EditorKeyTracker()
	{
		SceneView.onSceneGUIDelegate += view =>
		{
			Event e = Event.current;
			switch (e.type)
			{
				case EventType.keyDown:
				{
					ObjectController.GetKeyListener ().Receive (Event.current.keyCode);
					break;
				}
			}
		};
	}
}
