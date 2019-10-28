using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Code2Script : MonoBehaviour {


	public InputField iF;
	public Transform Success,Fail,BlackFade,Code2,BlackFadeQ,Badge3;
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
		if (input == "Random Number" || input == "Garbage" || input == "Unknown value" || input == "Random number" || input == "Unknown value" || input == "Unknown") {
			Code2.gameObject.SetActive (false);
			BlackFadeQ.gameObject.SetActive (false);
			BlackFade.gameObject.SetActive (true);
			Success.gameObject.SetActive (true);
			Badge3.gameObject.SetActive (true);
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
