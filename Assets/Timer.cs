using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Timers;

public class Timer : MonoBehaviour {

	DateTime dayOfEvent;
	TimeSpan ts;
	string timeleft,temp;

	// Use this for initialization
	void Start () {
		dayOfEvent = new DateTime (2017, 9, 30, 18, 0, 0);	
	}
	
	// Update is called once per frame
	void FixedUpdate(){

		ts = dayOfEvent.Subtract (DateTime.Now);
		timeleft = "";

		if (ts.Days >= 0) {
			temp = ts.Days.ToString ().PadLeft (2, '0');
			timeleft += temp + " Days\n";
		}

		if (ts.Hours >= 0) {
			temp = ts.Hours.ToString ().PadLeft (2, '0');
			timeleft += temp + " Hours\n";
		}

		if (ts.Minutes >= 0) {
			temp = ts.Minutes.ToString ().PadLeft (2, '0');
			timeleft += temp + " Minutes\n";
		}

		if (ts.Seconds >= 0) {
			temp = ts.Seconds.ToString ().PadLeft (2, '0');
			timeleft += temp + " Seconds\n";
		}

		//timeleft += "left";
		this.gameObject.GetComponent<Text> ().text = timeleft;
	}


}
