using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoftQ4Script : MonoBehaviour {

	public InputField iF;
	public Transform Success,Fail,BlackFade,SQ4,BlackFadeQ,Badge6;
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
		if (input == "Sublime Text" || input == "Sublime text" || input == "sublime text" || input == "sublime Text" || input == "Sublime" || input == "sublime") {
			SQ4.gameObject.SetActive (false);
			BlackFadeQ.gameObject.SetActive (false);
			BlackFade.gameObject.SetActive (true);
			Success.gameObject.SetActive (true);
			Badge6.gameObject.SetActive (true);
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
