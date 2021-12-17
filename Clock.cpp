
#include <iomanip>
#include <string>
#include <iostream>
#include "Clock12.h"
#include "Clock24.h"
#include "Clock.h"



using namespace std;

class Clock {

public:
	
	// menu prompt in this class because it is called in a member method
	const string MENU_PROMPT = "Please choose an option, enter '4' to leave program";

	// method to get time
	void getTime() {
		cout << "*********************     *********************" << endl;
		cout << "*   12-Hour Clock   *     *   24-Hour Clock   *"  << endl;
		cout << "*    " << Clock12::displayTime12() << "   *     *     " << Clock24::displayTime24() << "      *" << endl;
		cout << "*********************     *********************" << endl;
		
	}

	// method to display menu
	void displayMenu() {
		//FIXME: display menu options and prompt user to 
		cout << MENU_PROMPT << endl;
		cout << "1 - Add One Hour" << endl;
		cout << "2 - Add One Minute" << endl;
		cout << "3 - Add One Hour" << endl;
		cout << "4 - Exit Program" << endl;

	}

	// method to add seconds to each clock object
	void addSeconds() {
		//FIXME: add second to both clocks
		Clock12::addSeconds12();
		Clock24::addSeconds24();
	}

	// method to add minutes to each clock object
	void addMinutes() {
		//FIXME: add second to both clocks
		Clock12::addMinutes12();
		Clock24::addMinutes24();
	}

	// method to add hours to each clock object
	void addHours() {
		//addHour to both clocks
		Clock12::addHours12();
		Clock24::addHours24();
	}
};