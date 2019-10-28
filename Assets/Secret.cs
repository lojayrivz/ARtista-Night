using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Secret : MonoBehaviour {
	public Transform Okay,Question,Canvas,BlackFade;
	bool click;
	// Use this for initialization
	void Start () {
		click = true;
	}

	// Update is called once per frame
	void Update () {
		
		Okay.GetComponent<Button> ().onClick.AddListener (delegate {
			if (click) {
				Okay.gameObject.SetActive(false);
				BlackFade.gameObject.SetActive (true);
				Question.gameObject.SetActive(true);
				Canvas.gameObject.SetActive(false);
			}
		});

		BlackFade.GetComponent<Button> ().onClick.AddListener (delegate {
			if (click) {
				BlackFade.gameObject.SetActive (false);
				Question.gameObject.SetActive(false);
			}
		});
	}
		


		
}
