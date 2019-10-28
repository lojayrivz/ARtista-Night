using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

namespace Vuforia
{
	public class dataTarget : MonoBehaviour {

		public Transform Found;
		public Transform Question;
		public Transform Q1;
		public Transform Q2;
		public Transform Q3;
		public Transform Q4;
		public Transform Badge;
		public Transform BlackFade;
		public Transform Wrong;
		public Transform Correct;
		public Transform Congratulations;
		public Transform Cam;
		public Transform Done;
		public Transform KeepSearching;
		public Animator Anim;


		private bool click;
		private bool state;

		// Use this for initialization
		void Start()
		{
			click = true;
			Anim = GameObject.Find ("unitychan").GetComponent<Animator> ();

		}

		// Update is called once per frame
		void Update()
		{
			StateManager sm = TrackerManager.Instance.GetStateManager();
			IEnumerable<TrackableBehaviour> tbs = sm.GetActiveTrackableBehaviours();

			Found.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					Question.gameObject.SetActive(true);
					Found.gameObject.SetActive(false);
					Q1.gameObject.SetActive (true);
					Q2.gameObject.SetActive (true);
					Q3.gameObject.SetActive (true);
					Q4.gameObject.SetActive (true);
				}
			});

			Q1.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					BlackFade.gameObject.SetActive (true);
					Wrong.gameObject.SetActive (true);
				}
			});

			Q2.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					BlackFade.gameObject.SetActive (true);
					Wrong.gameObject.SetActive (true);
				}
			});

			Q3.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					BlackFade.gameObject.SetActive (true);
					Wrong.gameObject.SetActive (true);
				}
			});

			Q4.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					Correct.gameObject.SetActive (true);
					BlackFade.gameObject.SetActive (true);
				}
			});

			Wrong.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					Wrong.gameObject.SetActive (false);
					BlackFade.gameObject.SetActive (false);
				}
			});

			Correct.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					Correct.gameObject.SetActive (false);
					Question.gameObject.SetActive (false);
					Q1.gameObject.SetActive (false);
					Q2.gameObject.SetActive (false);
					Q3.gameObject.SetActive (false);
					Q4.gameObject.SetActive (false);
					Congratulations.gameObject.SetActive (true);
					BlackFade.gameObject.SetActive (false);
					Cam.gameObject.SetActive (true);
					Done.gameObject.SetActive (true);
				}
			});

			Done.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					Done.gameObject.SetActive (false);
					Congratulations.gameObject.SetActive (false);
					Cam.gameObject.SetActive (false);
					KeepSearching.gameObject.SetActive (true);
					BlackFade.gameObject.SetActive (true);
				}
			});

			KeepSearching.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click){
					KeepSearching.gameObject.SetActive (false);
					BlackFade.gameObject.SetActive (false);
					Badge.gameObject.SetActive (true);
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
