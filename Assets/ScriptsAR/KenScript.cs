using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

namespace Vuforia
{
	public class KenScript: MonoBehaviour {

		public Transform Run;
		public Animator Anim;

		private bool click;
		private bool state;

		void Start()
		{
			click = true;
			Anim = GameObject.Find ("unitychan").GetComponent<Animator> ();
		}

		void Update()
		{
			StateManager sm = TrackerManager.Instance.GetStateManager();
			IEnumerable<TrackableBehaviour> tbs = sm.GetActiveTrackableBehaviours();

			Run.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					Anim.Play ("RUN00_F", -1, 0f);
				}
			});
				

			foreach (TrackableBehaviour tb in tbs)
			{
				string name = tb.TrackableName;
				ImageTarget it = tb.Trackable as ImageTarget;
				Vector2 size = it.GetSize();

				Debug.Log("Active image target:" + name + "  -size: " + size.x + ", " + size.y);

			}
		}
	}
}
