using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RiddleQ4Script : MonoBehaviour {

	public InputField iF;
	public Transform Success,Fail,BlackFade,RQ4,BlackFadeQ,Badge5;
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
		if (input == "A Dell" || input == "A dell" || input == "a dell" || input == "a Dell") {
			RQ4.gameObject.SetActive (false);
			BlackFadeQ.gameObject.SetActive (false);
			BlackFade.gameObject.SetActive (true);
			Success.gameObject.SetActive (true);
			Badge5.gameObject.SetActive (true);
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
