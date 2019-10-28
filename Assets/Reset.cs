using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Vuforia {
	
	public class Reset : MonoBehaviour {

		public Transform Okay,Yes,No,BlackFadeU,Confirm,BlackFade,Success;
		public Transform B1,B2,B3,B4,B5,B6,I1,I2,I3,S1,S2,S3;
		private bool click;
		// Use this for initialization
		void Start () {
			click = true;
		}
		
		// Update is called once per frame
		void Update () {


			Okay.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFadeU.gameObject.SetActive(true);
					Confirm.gameObject.SetActive(true);
					Yes.gameObject.SetActive(true);
					No.gameObject.SetActive(true);
				}
			});

			Yes.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFadeU.gameObject.SetActive(false);
					BlackFade.gameObject.SetActive(true);
					Success.gameObject.SetActive(true);
					Confirm.gameObject.SetActive(false);
					Yes.gameObject.SetActive(false);
					No.gameObject.SetActive(false);

					B1.gameObject.SetActive (false);
					B2.gameObject.SetActive (false);
					B3.gameObject.SetActive (false);
					B4.gameObject.SetActive (false);
					B5.gameObject.SetActive (false);
					B6.gameObject.SetActive (false);
					I1.gameObject.SetActive (false);
					I2.gameObject.SetActive (false);
					I3.gameObject.SetActive (false);
					S1.gameObject.SetActive (false);
					S2.gameObject.SetActive (false);
					S3.gameObject.SetActive (false);

					PlayerPrefs.DeleteKey("Badge1");
					PlayerPrefs.DeleteKey("Badge2");
					PlayerPrefs.DeleteKey("Badge3");
					PlayerPrefs.DeleteKey("Badge4");
					PlayerPrefs.DeleteKey("Badge5");
					PlayerPrefs.DeleteKey("Badge6");

					PlayerPrefs.DeleteKey("ID1");
					PlayerPrefs.DeleteKey("ID2");
					PlayerPrefs.DeleteKey("ID3");

					PlayerPrefs.DeleteKey("Secret1");
					PlayerPrefs.DeleteKey("Secret2");
					PlayerPrefs.DeleteKey("Secret3");

				}
			});

			No.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFadeU.gameObject.SetActive(false);
					BlackFade.gameObject.SetActive(false);
					Confirm.gameObject.SetActive(false);
					Yes.gameObject.SetActive(false);
					No.gameObject.SetActive(false);
				}
			});

			BlackFade.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					BlackFadeU.gameObject.SetActive(false);
					BlackFade.gameObject.SetActive(false);
					Success.gameObject.SetActive(false);
				}
			});
		}
	}

}