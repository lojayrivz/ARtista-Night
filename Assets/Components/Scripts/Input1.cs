using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Input1 : MonoBehaviour {

	//[SerializeField]
	public InputField inputed;

	public void GetInput(string input)
	{
		inputed.text = "";
		Debug.Log ("You entered" + input);
	}

}