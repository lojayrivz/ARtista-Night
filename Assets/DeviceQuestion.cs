using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Vuforia
{
	public class DeviceQuestion : MonoBehaviour {

		public Transform ArduinoB,RasPiB,PowerSupplyB,ProcessorB,ICB;
		public Transform ArduinoQ,RasPiQ,PowerSupplyQ,ProcessorQ,ICQ;
		public Transform Badge2;
		public Transform BlackFade;

		private bool click;

		// Use this for initialization
		void Start () 
		{
			click = true;
		}

		// Update is called once per frame
		void Update ()
		{
			//StateManager sm = TrackerManager.Instance.GetStateManager();
			//IEnumerable<TrackableBehaviour> tbs = sm.GetActiveTrackableBehaviours();

			RasPiB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					RasPiQ.gameObject.SetActive(true);
					//	Badge1.gameObject.SetActive(true);
				}
			});

			ArduinoB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					ArduinoQ.gameObject.SetActive(true);
					//	Badge2.gameObject.SetActive(true);
				}
			});

			PowerSupplyB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					PowerSupplyQ.gameObject.SetActive(true);
					//	Badge3.gameObject.SetActive(true);
				}
			});

			ProcessorB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					ProcessorQ.gameObject.SetActive(true);
					//	Badge4.gameObject.SetActive(true);
				}
			});

			ICB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFade.gameObject.SetActive(true);
					ICQ.gameObject.SetActive(true);
					//	Badge4.gameObject.SetActive(true);
				}
			});

			BlackFade.GetComponent<Button> ().onClick.AddListener (delegate {
				if (click) {
					BlackFade.gameObject.SetActive (false);
					ArduinoQ.gameObject.SetActive (false);
					RasPiQ.gameObject.SetActive (false);
					ProcessorQ.gameObject.SetActive (false);
					PowerSupplyQ.gameObject.SetActive (false);
					ICQ.gameObject.SetActive (false);
				}
			});
			/*foreach (TrackableBehaviour tb in tbs)
			{
				string name = tb.TrackableName;
				ImageTarget it = tb.Trackable as ImageTarget;
				Vector2 size = it.GetSize();

				Debug.Log("Active image target:" + name + "  -size: " + size.x + ", " + size.y);

			}*/
		}	
	}
}


