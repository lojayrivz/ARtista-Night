using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Vuforia
{

	public class Focus : MonoBehaviour {
	//	bool focusModeSet = CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
		// Use this for initialization
		void Start () {
			var vuforia = VuforiaARController.Instance;
			vuforia.RegisterVuforiaStartedCallback (OnVuforiaStarted);
			vuforia.RegisterOnPauseCallback (OnPaused);
		}
		
		// Update is called once per frame
		void Update () {
			
		}

		private void OnVuforiaStarted(){
			CameraDevice.Instance.SetFocusMode (CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
		}

		private void OnPaused(bool paused)
		{
			if (!paused) {
				CameraDevice.Instance.SetFocusMode (CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
			
			}
		}
	}
}