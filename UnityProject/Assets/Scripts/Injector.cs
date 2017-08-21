using System;
using UnityEngine;

// A Class that can be used to wrap non-component objects 
// so they can get attached to a game object.

// We store the type as there is no way of adding generic component
// in unity. (afaik)
namespace InjectorNS
{
	public class Injector : MonoBehaviour 
	{
		private System.Object data;
		private Type type;

		public void Set<T>(T data)
		{
			this.data = data;
			this.type = data.GetType();
		}

		public Type GetInjectedType()
		{
			return this.type;
		}

		public T Get<T>() 
		{
			if (type.IsSubclassOf(typeof(T))) 
			{
				throw new System.ArgumentException("The stored type " + type.ToString() 
					+ "is not a subclass of type " + typeof(T).ToString());
			}
			return (T)this.data;
		}
	}
}

