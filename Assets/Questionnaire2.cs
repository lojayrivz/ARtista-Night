using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Questionnaire2 : MonoBehaviour {
	public InputField iF;
	public Transform Success,Fail,BlackFade,Q,BlackFadeQ,Badge,ID;
	public string Answer,Progress,PID;
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
		input=input.ToLower();
		Answer=Answer.ToLower();
		if (input == Answer || input == Answer) {
			Q.gameObject.SetActive (false);
			BlackFadeQ.gameObject.SetActive (false);
			BlackFade.gameObject.SetActive (true);
			Success.gameObject.SetActive (true);
			Badge.gameObject.SetActive (true);
			ID.gameObject.SetActive (false);
			PlayerPrefs.SetInt (Progress,1);
			PlayerPrefs.DeleteKey(PID);
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
