using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class InputQ1Script : MonoBehaviour {

	public InputField iF;
	public Transform Success,Fail,BlackFade,Q1,BlackFadeQ,Badge1;
	bool click;

	// Use this for initialization
	void Start () {
		click = true;
		//DateTime dDay = new DateTime ();
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
		int number;
		iF.text = "";
		if (Int32.TryParse(input, out number) && int.Parse (input) == 104) {
		//	Debug.Log (DateTime.Now + " " + DateTime.);
			Q1.gameObject.SetActive (false);
			BlackFadeQ.gameObject.SetActive (false);
			BlackFade.gameObject.SetActive (true);
			Success.gameObject.SetActive (true);
			Badge1.gameObject.SetActive (true);
		} else {
			Debug.Log ("FAILURE");
			BlackFade.gameObject.SetActive (true);
			Fail.gameObject.SetActive (true);
		}


		BlackFade.GetComponent<Button> ().onClick.AddListener (delegate {
			if (click) {
				BlackFade.gameObject.SetActive (false);
				Success.gameObject.SetActive (false);
				Fail.gameObject.SetActive(false);
			}
		});
	}


}
