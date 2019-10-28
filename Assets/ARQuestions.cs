using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Vuforia
{
	public class ARQuestions : MonoBehaviour {

		public Transform B1,B2,B3,B4,B5;
		public Transform Q1,Q2,Q3,Q4,Q5;
		public Transform BlackFade;

		private bool click;

		// Use this for initialization
		void Start () {
			click = true;
		}

		// Update is called once per frame
		void Update () {

			//StateManager sm = TrackerManager.Instance.GetStateManager();
			//IEnumerable<TrackableBehaviour> tbs = sm.GetActiveTrackableBehaviours();

			B1.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					Q1.gameObject.SetActive(true);
				}
			});

			B2.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					Q2.gameObject.SetActive(true);
				}
			});

			B3.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					Q3.gameObject.SetActive(true);
				}
			});

			B4.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					Q4.gameObject.SetActive(true);
				}
			});

			B5.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					Q5.gameObject.SetActive(true);
				}
			});

			BlackFade.GetComponent<Button> ().onClick.AddListener (delegate {
				if (click) {
					BlackFade.gameObject.SetActive (false);
					Q1.gameObject.SetActive (false);
					Q2.gameObject.SetActive (false);
					Q3.gameObject.SetActive (false);
					Q4.gameObject.SetActive (false);
					Q5.gameObject.SetActive (false);
				}
			});
		}
	}
}
