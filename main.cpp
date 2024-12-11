#include <iostream>
using namespace std;

string inventory[10]; //global variable to hold string inventory
//function declarations
void computer();

int main() {
	int room = 1;
	string input = "hi";
	while ( input != "quit") {
	switch (room) {
	case 1:
		cout << "You have woken up in a dark, quiet room, it seems this is some kind of lobby. \n You are currently located in the bunker at the abandoned Nyx government facility, which is a bunker located deep in the alaskan mountains. \n The Nyx government facility started out as a completely normal military airbase, until an earthquake warranted for the airbase to be abandoned. The airbase was bought by a governemnt organization, who made many adaptations to the old airbase. \n They reworked the already existing bunker, tore down almost all remenants of the airbase on the surface and moved almost everything that was needed into the bunker. \n the organization, now known as the harpocrates corporation, decided to try to cover up the facility by disguising it as a completely normal hospital, althoguh it was anything but. \n the organization ran the bunker for about 7 years before the authorities started to ask questions, however the facility kept going strong.... until several operatives started to go missing randomly and an outbreak of an experimental virus concurred. \n The virus, codenamed 'hades-x' was an immuno-stimulant, that, when injected, would provide the victim with an INSANE peak of violence, which would not end for several hours or until the victim was subdued, however in secret, they also developed a seperate variant of hades-x, of which the effects lasted indefinitely and were MUCH more powerful, but, there was no known cure to this new variant, and the town nearby had to be evacuated. \n The facility was shut down, and all entrances were welded shut, the town has remained abandoned ever since, along with the facility. \n you are a C.I.A operative sent to extract any remaining evidence of the many illegal and in-humane practices of the harpocrates corporation and, possibly, to extract the virus for study, you managed to get into the main lobby, but suddenly a piece of the incredibly structually unstable cieling falls on you, knocking you unconscious. \n Your goals are as follows; find any notes or files of the corporation left behind, find a sample of the virus, identify any and all weapons and gear, and to get the hell out. \n You can go north," << endl;
		cin >> input;
		if (input == "n" || input == "north")
			room = 2;
		break;
	case 2:
		cout << "you are now located in the intelligence divison, the place is a wreck, however there appears to be some power as a computer is on at the far end of the room. there might be some intel there, so it is wise to investigat it." << endl;
		cin >> input;
		if (input == "computer" || input == "go to computer")
			cout << "you approach the computer, which is incredibly dirty and appears to have some kind of bloodstain near the mosuepad." << endl;
	
		else if (input == "s" || "south")
			room = 1;
		else if (input == "e" || "east")
			room = 3;
		break;
	case 3:
		cout << "you are now in room 3, you can go south and east." << endl;
		cin >> input;
		if (input == "s" || input == "south")
			room = 2;
		else if (input == "e" || "east")
			room = 4;
		break;


	case 4:
		cout << "you are now in room 4, you can go west and east." << endl;
		cin >> input;
		if (input == "w" || input == "west")
			room = 3;
		else if (input == "e" || "east")
			room = 5;
		break;

	case 5:
		cout << "you are now in room 5, you can go north and south." << endl;
		cin >> input;
		if (input == "n" || input == "north")
			room = 4;
		else if (input == "s" || "south")
			room = 6;
		break;

	case 6:
		cout << "you are now in room 6, you can go north and west." << endl;
			cin >> input;
			if (input == "n" || input == "north")
				room = 5;
			else if (input == "w" || input == "west")
				room = 7;
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
	case 10: 
		


	}
}

//function definitions
void computer() {
	int button = 1;
	switch (button):
	case 1:
		cout << "you are currently accessing one of the main intelligence terminals of the hypocrates corporation, they succeded in wiping most of the data, however some is still left. The computer is incredibly dated, but easy to understand. There is 3 options: Option 1: read patient file. Option 2: read audio transcript. Option 3: authorize secure door system. (press 1 for option 1, 2 for option 2, 3 for option 3."<< endl;
	if (input == "1")
		cout << "you click on option 1, and  "


}
