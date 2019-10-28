using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FPS : MonoBehaviour {
	Rect fpsRect;
	GUIStyle style;
	// Use this for initialization
	void Start () {
		fpsRect = new Rect (0,0, 400, 100);
		style= new GUIStyle();
		style.fontSize = 20;
	}
	
	// Update is called once per frame
	void Update () {
		
		
	}

	void OnGUI(){
		float fps = 1 / Time.deltaTime;
		GUI.Label (fpsRect, "FPS: " + fps,style);
	}
}
