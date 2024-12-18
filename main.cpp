#include <iostream>
#include <string>
#include <Windows.h>
#include <chrono>
using namespace std;

string inventory[10]; //global variable to hold string inventory
bool isAlive = true;
bool locked = true;
int code1;
int code2;
int code3;
int code4;
//function declarations
void computer();
void numberPuzzle();
bool correctAnswer(); 

int main() {
	srand(time(NULL));
	int room = 1;
	code1 = rand() % 10;
	code2 = rand() % 10;
	code3 = rand() % 10;
	code4 = rand() % 10;

	string input = "hi";
	while (input != "quit" && isAlive == true)
	{
		switch (room) {
		case 1:
			cout << "You have woken up in a dark, quiet room, it seems this is some kind of lobby. \n \n  You are currently located in the bunker at the abandoned Nyx government facility, which is a bunker located deep in the alaskan mountains. \n \n The Nyx government facility started out as a completely normal military airbase, until an earthquake warranted for the airbase to be abandoned. The airbase was bought by a governemnt organization, who made many adaptations to the old airbase. \n \n  They reworked the already existing bunker, tore down almost all remenants of the airbase on the surface and moved almost everything that was needed into the bunker. \n \n the organization, now known as the harpocrates corporation, decided to try to cover up the facility by disguising it as a completely normal hospital, althoguh it was anything but. \n \n the organization ran the bunker for about 7 years before the authorities started to ask questions, however the facility kept going strong.... until several operatives started to go missing randomly and an outbreak of an experimental virus concurred. \n  \n \n The virus, codenamed 'hades-x' was an immuno-stimulant, that, when injected, would provide the victim with an INSANE peak of violence, which would not end for several hours or until the victim was subdued, however in secret, they also developed a seperate variant of hades-x, of which the effects lasted indefinitely and were MUCH more powerful, but, there was no known cure to this new variant, and the town nearby had to be evacuated. \n The facility was shut down, and all entrances were welded shut, the town has remained abandoned ever since, along with the facility. \n \n  you are a C.I.A operative sent to extract any remaining evidence of the many illegal and in-humane practices of the harpocrates corporation and, possibly, to extract the virus for study, you managed to get into the main lobby, but suddenly a piece of the incredibly structually unstable cieling falls on you, knocking you unconscious. \n \n \n Your goals are as follows; find any notes or files of the corporation left behind, find a sample of the virus, identify any and all weapons and gear, and to get the hell out. \n \n \n You can go north," << endl;
			cout << " " << endl;
			cin >> input;
			if (input == "n" || input == "north")
				room = 2;
			cout << " " << endl;
			break;
		case 2:
			cout << " " << endl;
			cout << "you are now located in the intelligence divison, the place is a wreck, however there appears to be some power as a computer is on at the far end of the room. there might be some intel there, so it is wise to investigat it. you notice an extrenely bad smell, and its completely dark in here. you can go east and south" << endl;
			cout << " " << endl;
			cin >> input;
			if (input == "computer" || input == "go to computer") {
				cout << "you approach the computer, which you notice in the dim glow of the screen, is incredibly dirty and appears to have some kind of bloodstain near the mosuepad," << endl;
				cout << " " << endl;
				computer();
			}
			else if (input == "s" || input == "south")
				room = 1;
			else if (input == "e" || input == "east")
				room = 3;
			break;
		case 3:
			cout << "you are now in the armory, this where they would have stored weapons and gear. they managed to remove about 90% of anything incriminating from the room. however, you see a keycard on a desk nearby, and a rifle leaning against the wall in the far corner of the room. you can go south, east, pickup the keycard, or grab the rifle " << endl;
			cin >> input;
			if (input == "s" || input == "south")
				room = 2;
			else if (input == "e" || "east")
				room = 4;
			else if (input == "keycard" || input.compare("pick up keycard") == 0 || input.compare("grab keycard") == 0) {
				cout << "you grab the keycard, and it has a biohazard logo on it. it might be the facility manager keycard, which unlocks just about everything in the facility, and can be used to override the lockdown (no one has ever been in the facility since it was abandoned meaning that the lockdown protocal will need to be overrided to access certain parts of the facility.) " << endl;
				inventory[0] = "keycard";
			}
			else if (input == "rifle" || input == "grab rifle" || input == "pick up rifle") {
				cout << "you grabbed the rifle, it is pretty old, but still seems to be in working order. it appears to be a heavily modified M16A1. there is still some ammunition left in the magazine." << endl;
				inventory[1] = "rifle";
			}
			break;


		case 4:
			cout << "you are now in the sleeping quarters, it's pretty empty, but there is a ID card on one of the beds." << endl;
			cin >> input;
			if (input == "ID" || input.compare("grab ID card") || input.compare("ID card")) {
				cout << "you grabbed the ID card" << endl;
				inventory[2] = "ID card";
			}
			else if (input == "w" || input == "west")
				room = 3;
			else if (input == "e" || "east")
				room = 5;
			break;

		case 5:
			cout << "you are now in the main command center. there is almost nothing left here that could be useful" << endl;
			cin >> input;
			if (input == "n" || input == "north")
				room = 4;
			else if (input == "s" || "south")
				room = 6;
			break;

		case 6:
			cout << "you are now in the mourge, where they would store the bodies of both patients and facility employees. There is a rusty, bloody stethoscope on a rack near the door." << endl;
			cin >> input;
			if (input == "n" || input == "north")
				room = 5;
			else if (input == "w" || input == "west")
				room = 7;
			else if (input.compare("grab stethoscope") || input.compare("stethoscope"))
				cout << "you grabbed the stethoscope" << endl;
			break;

		case 7:
			cout << "you are now in room 7, you can go east and south." << endl;
			if (input == "e" || input == "east")
				room = 6;
			else if (input == "s" || input == "south")
				room = 8;
			break;

		case 8:
			cout << "you are now in room 8, you can go north." << endl;
			if (input == "n" || input == "north")
				room = 7;
		case 9:
			cout << "you are now in room 9, you can go west and east" << endl;
			if (input == "e" || input == "east")
				room = 10;
			else if (input == "w" || input == "west")
				room = 8;
			numberPuzzle();
		case 10:
			cout << "you are now in what appears to be a storage area, there is a heavy, locked metal door with a keypad by it. it appears to be a two step system. and it might be an escape point" << endl;
			if (input.compare("go to door") || input.compare("door"))
				cout << "the door is locked and requires a code, however there is a way to get this code, it requires a confirmation to open from one of the terminals, and it also requires a keycard to open." << endl;
			correctAnswer();
			if (inventory[0] == "keycard" || correctAnswer() == true || locked == false);
			room = 11;
		case 11:


			break;



		}
	}//end of loop
	if (isAlive == false)
		cout << "you lose" << endl;
}// end of main

//function definitions
void computer() {

	string input;
	while (input != "q") {
		int button = 1;
		switch (button) {
		case 1:
			cout << "you are currently accessing one of the main command terminals of the hypocrates corporation, where they store most of their intel, names, experiments, and also what appears to be a two step security authenication for a door somewhere in the facility.  \n \n There is 3 options on the desktop: \n Option 1: read patient file. \n Option 2: read audio transcript. \n Option 3: authorize secure door system. \n (press 1 for option 1, 2 for option 2, 3 for option 3." << endl << endl;
			cin >> input;
			if (input == "1") {
				cout << "you click on option 1, and you see a file on someone named Adrian Watts, the file reads: " << endl;
				cout << " " << endl;
				cout << " height: 5'7." << endl;
				cout << " " << endl;
				cout << " weight: 156 LBS." << endl;
				cout << " " << endl;
				cout << " age: 25 yrs." << endl;
				cout << " " << endl;
				cout << " race: white." << endl;
				cout << " " << endl;
				cout << " hair color: dark brown." << endl;
				cout << " " << endl;
				cout << " eye color: haze." << endl;
				cout << " " << endl;
				cout << " birthday: Febuary 23rd, 1985." << endl;
				cout << " " << endl;
				cout << " D.O.E: april 17th, 2010" << endl;
			}
			else if (input == "2") {
				cout << " these computers used to record anything that happened around the facility and near them, this included audio and visual, and you have found the audio transcript from the day when the facility was abandoned:" << endl;
				cout << " " << endl;
				cout << " scientist: 'subject appears to be incapacitated after 1/3 injection' " << endl;
				cout << " " << endl;
				cout << " scientist: 'subject wakes and shows extreme violence after full dosage, attempting to break observation glass... " << endl;
				cout << " **the sound of glass breaking ensues, along with a scream**" << endl;
				cout << " " << endl;
				cout << " security guard: 'ENGAGE LOCKDOWN PROCEDURE LEVEL 3, PLEASE ADVISE, WE HAVE A CRITICAL FAILURE IN THE EXPERIMENTAL WING, REPEAT, WE HAVE A CRITICAL FAILURE IN THE EXPERIMENTAL WING, A PATIENT HAS BROKEN LOOSE, COLLINS IS DOWN, AND WHEREABOUTS OF SUBJECT 7 ARE CURRENTLY UNKNOW-----' **static follows**" << endl;
				cout << " " << endl;
				cout << "**the audio cuts to an earsplitting alarm, a loud robotic female voice booms over the loudspeakers; 'CRITICAL FAILURE, EVACUATE FACILITY IMMEDIATELY, CRITICAL FAILURE, EVACUATE FACILITY IMMEDIATLEY...' it cuts to a camera recording, where absolute, utter chaos is shown, it shows people sitting at several computers like this one, in the exact room you are standing in right now, but suddenly, the alarm goes off, the room dances red with the alarm lights, the earsplitting voice in the backround, then, people rushing for the old entrance, grabbing any files, and belongings they can, but not everyone made it, and you can see the 'patient' violently and brutally kill just about everyone left, leaving the room a bloody and gory mess, then the camera cuts out, you suddenly realize that, they might have never actually fully cleaned this place out...   " << endl;
				cout << " " << endl;
			}
			else if (input == "3") {
				cout << " you click option 3, and a message appears: " << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << " Authorize lockdown override?  " << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << " Y/N " << endl;
				cin >> input;

				if (input == "y") {
					cout << "please enter password _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
					cout << " " << endl;
					cout << "you can look around the area to find the password" << endl;
					cin >> input;
					if (input == "look around" || input == "look") {
						cout << "you found something wriiten on a sticky note next to the screen: 'fhpY6EwF3xvV9cX8g'." << endl;
						cout << " " << endl;
						cin >> input;
					}
					if (input == "fhpY6EwF3xvV9cX8g") {
						locked = false;
						cout << "the screen flashes green and you hear a loud CLICK echo in the distance" << endl;
						cout << " " << endl;
						cout << " " << endl;
						cout << "your facility access code is:" << code1 << " " << code2 << " " << code3 << " " << code4 << " " << endl;
						cin >> input;
						//cout<<code1<<" "<<code2<<" "<<endl;
					}
				}

			}
		}
	}








}						void numberPuzzle() {
	int limit = 60;
	auto start = chrono::steady_clock::now();

	int guess1 = -1;
	int guess2 = -1;
	int guess3 = -1;
	int guess4 = -1;
	//2 more here


	int timeleft = 60;
	system("color 2b");
	cout << "-----------------------------------------------------------------" << endl;
	cout << "you have 60 seconds to enter a 4 digit code into a panel in the wall before the facility self detructs" << endl;
	while (guess1 != code1 && guess2 != code2 && guess3 != code3 && guess4 != code4 && timeleft > 0) { //add two more conditions here
		//this calculates how much time left
		auto now = chrono::steady_clock::now();
		timeleft = limit - chrono::duration_cast <chrono::seconds> (now - start).count();
		cin >> guess1;
		cin >> guess2;
		cin >> guess3;
		cin >> guess4;
		//add two more here
		if (guess1 != code1 || guess2 != code2 || guess3 != code3 || guess4 != code4) { //two more here
			cout << "you failed to override the self destruct sequence and have been incinerated instantly." << endl;
			isAlive = false;

		}
		else cout << "you stopped the facility from self destructing, you may continue." << endl;

	}
}

bool correctAnswer() {
	int guess1 = -1;
	int guess2 = -1;
	int guess3 = -1;
	int guess4 = -1;


	

	cout << "enter code _ _ _ _" << endl;
	cin >> guess1;
	cin >> guess2;
	cin >> guess3;
	cin >> guess4;

	if (guess1 == code1 || guess2 == code2 || guess3 == code3 || guess4 == code4) {
		cout << "access granted" << endl;
		return true;
	}
	else {
		cout << "access denied" << endl;
		return false;
	}





}
