using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Vuforia
{
	public class UIButtons : MonoBehaviour {

		public Transform CpeArtistaU,InstructionsU,CreditsU,SponsorU;
		public Transform HomeB,InsB,CreditsB,SponB,PlayB;
		public Transform HomeC,InsC,CreditsC,SponC;
		public Transform InsT,CreditsT,SponT;
		public Transform InsM,CreditsM,SponM;
		//public Transform BlackFade;

		private bool click;

		// Use this for initialization
		void Start () 
		{
			click = true;
			HomeC.gameObject.SetActive (true);
			CpeArtistaU.gameObject.SetActive (true);

			InsB.gameObject.SetActive (true);
			CreditsB.gameObject.SetActive (true);
			SponB.gameObject.SetActive (true);
		}

		// Update is called once per frame
		void Update ()
		{
			HomeB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					PlayB.gameObject.SetActive(false);
					InsT.gameObject.SetActive(false);
					CreditsT.gameObject.SetActive(false);
					SponT.gameObject.SetActive(false);

					InsM.gameObject.SetActive(false);
					CreditsM.gameObject.SetActive(false);
					SponM.gameObject.SetActive(false);

					CpeArtistaU.gameObject.SetActive(true);
					InstructionsU.gameObject.SetActive(false);
					CreditsU.gameObject.SetActive(false);
					SponsorU.gameObject.SetActive(false);

					HomeB.gameObject.SetActive(false);
					HomeC.gameObject.SetActive(true);

					InsB.gameObject.SetActive(true);
					InsC.gameObject.SetActive(false);

					CreditsB.gameObject.SetActive(true);
					CreditsC.gameObject.SetActive(false);

					SponB.gameObject.SetActive(true);
					SponC.gameObject.SetActive(false);
				//	BlackFade.gameObject.SetActive(false);
					//	Badge1.gameObject.SetActive(true);
				}
			});

			InsB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					PlayB.gameObject.SetActive(true);
					InsT.gameObject.SetActive(true);
					CreditsT.gameObject.SetActive(false);
					SponT.gameObject.SetActive(false);

					InsM.gameObject.SetActive(true);
					CreditsM.gameObject.SetActive(false);
					SponM.gameObject.SetActive(false);

					CpeArtistaU.gameObject.SetActive(false);
					InstructionsU.gameObject.SetActive(true);
					CreditsU.gameObject.SetActive(false);
					SponsorU.gameObject.SetActive(false);

					HomeB.gameObject.SetActive(true);
					HomeC.gameObject.SetActive(false);

					InsB.gameObject.SetActive(false);
					InsC.gameObject.SetActive(true);

					CreditsB.gameObject.SetActive(true);
					CreditsC.gameObject.SetActive(false);

					SponB.gameObject.SetActive(true);
					SponC.gameObject.SetActive(false);
				//	BlackFade.gameObject.SetActive(true);
					//	Badge1.gameObject.SetActive(true);
				}
			});

			CreditsB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					PlayB.gameObject.SetActive(true);
					InsT.gameObject.SetActive(false);
					CreditsT.gameObject.SetActive(true);
					SponT.gameObject.SetActive(false);

					InsM.gameObject.SetActive(false);
					CreditsM.gameObject.SetActive(true);
					SponM.gameObject.SetActive(false);

					CpeArtistaU.gameObject.SetActive(false);
					InstructionsU.gameObject.SetActive(false);
					CreditsU.gameObject.SetActive(true);
					SponsorU.gameObject.SetActive(false);

					HomeB.gameObject.SetActive(true);
					HomeC.gameObject.SetActive(false);

					InsB.gameObject.SetActive(true);
					InsC.gameObject.SetActive(false);

					CreditsB.gameObject.SetActive(false);
					CreditsC.gameObject.SetActive(true);

					SponB.gameObject.SetActive(true);
					SponC.gameObject.SetActive(false);
					//	BlackFade.gameObject.SetActive(true);
					//	Badge1.gameObject.SetActive(true);
				}
			});

			SponB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					PlayB.gameObject.SetActive(true);
					InsT.gameObject.SetActive(false);
					CreditsT.gameObject.SetActive(false);
					SponT.gameObject.SetActive(true);

					InsM.gameObject.SetActive(false);
					CreditsM.gameObject.SetActive(false);
					SponM.gameObject.SetActive(true);

					CpeArtistaU.gameObject.SetActive(false);
					InstructionsU.gameObject.SetActive(false);
					CreditsU.gameObject.SetActive(false);
					SponsorU.gameObject.SetActive(true);

					HomeB.gameObject.SetActive(true);
					HomeC.gameObject.SetActive(false);

					InsB.gameObject.SetActive(true);
					InsC.gameObject.SetActive(false);

					CreditsB.gameObject.SetActive(true);
					CreditsC.gameObject.SetActive(false);

					SponB.gameObject.SetActive(false);
					SponC.gameObject.SetActive(true);
					//	BlackFade.gameObject.SetActive(true);
					//	Badge1.gameObject.SetActive(true);
				}
			});

			PlayB.GetComponent<Button> ().onClick.AddListener (delegate {
				if(click)
				{
					PlayB.gameObject.SetActive(false);
					InsT.gameObject.SetActive(false);
					CreditsT.gameObject.SetActive(false);
					SponT.gameObject.SetActive(false);

					InsM.gameObject.SetActive(false);
					CreditsM.gameObject.SetActive(false);
					SponM.gameObject.SetActive(false);

					CpeArtistaU.gameObject.SetActive(true);
					InstructionsU.gameObject.SetActive(false);
					CreditsU.gameObject.SetActive(false);
					SponsorU.gameObject.SetActive(false);

					HomeB.gameObject.SetActive(false);
					HomeC.gameObject.SetActive(true);

					InsB.gameObject.SetActive(true);
					InsC.gameObject.SetActive(false);

					CreditsB.gameObject.SetActive(true);
					CreditsC.gameObject.SetActive(false);

					SponB.gameObject.SetActive(true);
					SponC.gameObject.SetActive(false);
					//	BlackFade.gameObject.SetActive(false);
					//	Badge1.gameObject.SetActive(true);
				}
			});
			/*foreach (TrackableBehaviour tb in tbs)
				{
					string name = tb.TrackableName;
					ImageTarget it = tb.Trackable as ImageTarget;
					Vector2 size = it.GetSize();

					Debug.Log("Active image target:" + name + "  -size: " + size.x + ", " + size.y);

				}*/
			
		}	
	}
}
	
