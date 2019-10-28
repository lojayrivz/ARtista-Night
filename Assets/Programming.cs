using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Vuforia
{
	public class Programming : MonoBehaviour {
		public Transform B1,Id,Canvas1;
		public string Progress;

		private bool click;
		// Use this for initialization
		void Start () {
			click = true;
		}

		// Update is called once per frame
		void Update () {
			B1.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					Canvas1.gameObject.SetActive(false);
					B1.gameObject.SetActive(false);
					Id.gameObject.SetActive(true);
					PlayerPrefs.SetInt (Progress,1);
				}
			});

		}
	}

}
