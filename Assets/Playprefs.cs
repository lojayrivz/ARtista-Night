using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Playprefs : MonoBehaviour {
	
	private int Badge1, Badge2, Badge3, Badge4, Badge5, Badge6, ID1, ID2, ID3, Secret1, Secret2, Secret3;
	public Transform B1,B2,B3,B4,B5,B6,I1,I2,I3,S1,S2,S3;
	// Use this for initialization
	void Start () {

		Badge1 = PlayerPrefs.GetInt ("Badge1");
		Badge2 = PlayerPrefs.GetInt ("Badge2");
		Badge3 = PlayerPrefs.GetInt ("Badge3");
		Badge4 = PlayerPrefs.GetInt ("Badge4");
		Badge5 = PlayerPrefs.GetInt ("Badge5");
		Badge6 = PlayerPrefs.GetInt ("Badge6");
		ID1 = PlayerPrefs.GetInt ("ID1");
		ID2 = PlayerPrefs.GetInt ("ID2");
		ID3 = PlayerPrefs.GetInt ("ID3");
		Secret1 = PlayerPrefs.GetInt ("Secret1");
		Secret2 = PlayerPrefs.GetInt ("Secret2");
		Secret3 = PlayerPrefs.GetInt ("Secret3");

		if (PlayerPrefs.HasKey ("Badge1") || PlayerPrefs.HasKey ("Badge2") || PlayerPrefs.HasKey ("Badge3") || PlayerPrefs.HasKey ("Badge4") || PlayerPrefs.HasKey ("Badge5") ||
		    PlayerPrefs.HasKey ("Badge6") || PlayerPrefs.HasKey ("ID1") || PlayerPrefs.HasKey ("ID2") || PlayerPrefs.HasKey ("ID3") || PlayerPrefs.HasKey ("Secret1") ||
		    PlayerPrefs.HasKey ("Secret2") || PlayerPrefs.HasKey ("Secret3")) {

			if (Badge1 == 1) {
				B1.gameObject.SetActive (true);
			}

			if (Badge2 == 1) {
				B2.gameObject.SetActive (true);
				I1.gameObject.SetActive (false);
			}

			if (Badge3 == 1) {
				B3.gameObject.SetActive (true);
				I2.gameObject.SetActive (false);
			}

			if (Badge4 == 1) {
				B4.gameObject.SetActive (true);
			}

			if (Badge5 == 1) {
				B5.gameObject.SetActive (true);
				I3.gameObject.SetActive (false);
			}

			if (Badge6 == 1) {
				B6.gameObject.SetActive (true);
			}

			if (ID1 == 1) {
				I1.gameObject.SetActive (true);
			}

			if (ID2 == 1) {
				I2.gameObject.SetActive (true);
			}

			if (ID3 == 1) {
				I3.gameObject.SetActive (true);
			}

			if (Secret1 == 1) {
				S1.gameObject.SetActive (true);
			}

			if (Secret2 == 1) {
				S2.gameObject.SetActive (true);
			}

			if (Secret3 == 1) {
				S3.gameObject.SetActive (true);
			}
		} 
		else {
			B1.gameObject.SetActive (false);
			B2.gameObject.SetActive (false);
			B3.gameObject.SetActive (false);
			B4.gameObject.SetActive (false);
			B5.gameObject.SetActive (false);
			B6.gameObject.SetActive (false);
			I1.gameObject.SetActive (false);
			I2.gameObject.SetActive (false);
			I3.gameObject.SetActive (false);
			S1.gameObject.SetActive (false);
			S2.gameObject.SetActive (false);
			S3.gameObject.SetActive (false);
		}


	}
	

}
	