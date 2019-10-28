using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Smooth : MonoBehaviour {

	public GameObject ARcam;

	private float n1,n2,n3,x,y,z;

	
	// Update is called once per frame
	void Update () 
	{
		Vector3 pos = ARcam.transform.position;
		Vector3 pos2 = ARcam.transform.eulerAngles;

		n1 = (pos.y / (Mathf.Tan (pos2.x / 57.3f)));
		n2 = pos.x + (n1 * Mathf.Sin (pos2.y / 57.3f));
		n3 = pos.z + (n1 * Mathf.Cos (pos2.y / 57.3f));

		x = x + (n2 - x);
		z = z + (n3 - z);
		if (!float.IsNaN(x)&&!float.IsNaN(z)) 
		{
			transform.position = new Vector3(x, 0,z);
		}

	}
}
