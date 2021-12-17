#include "Clock.h"
#include "Clock12.h"
#include "Clock24.h"
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main() {

	char userInput = ' ';

	// instantiate new objects of Clock12 and Clock24 types
	Clock12 newClock12{};
	Clock24 newClock24{};
	
	//display the times for each clock
	newClock12.displayTime12();
	newClock24.displayTime24();

	// display menu and prompt user for input
	
	while (userInput != '4') {

		Clock::displayMenu();
		cin >> userInput;

		if (userInput == '1') {
			newClock12.addHours12();
			newClock24.addHours24();
		}
		else if (userInput == '2') {
			newClock12.addMinutes12();
			newClock24.addMinutes24();
		}
		else if (userInput == '3') {
			newClock12.addMinutes12();
			newClock24.addMinutes24();
		}
		else {
			cout << "Invalid input, please try again." << endl;
		}




	return 0;
}
