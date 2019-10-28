using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ArduinoScript : MonoBehaviour {


	public InputField iF;
	public Transform Success,Fail,BlackFade,Arduino,BlackFadeQ,Badge2,ID;
	bool click;
	// Use this for initialization
	void Start () {
		click = true;
	}

	// Update is called once per frame
	void Update () {

	}

	void OnGUI() {
		if(iF.isFocused && iF.text != "" && Input.GetKey(KeyCode.Return)) {
			GetInput ();
			iF.text = "";
		}
	}

	public void GetInput(){
		string input = iF.text;
		iF.text = "";
		if (input == "Arduino" || input == "arduino") {
			Arduino.gameObject.SetActive (false);
			BlackFadeQ.gameObject.SetActive (false);
			BlackFade.gameObject.SetActive (true);
			Success.gameObject.SetActive (true);
			Badge2.gameObject.SetActive (true);
			ID.gameObject.SetActive (false);
		} else {
			Debug.Log ("FAILURE");
			BlackFade.gameObject.SetActive (true);
			Fail.gameObject.SetActive (true);
		}

		BlackFade.GetComponent<Button> ().onClick.AddListener (delegate {
			if (click) {
				BlackFade.gameObject.SetActive (false);
				Success.gameObject.SetActive (false);
				Fail.gameObject.SetActive (false);
			}
		});

	}
}
