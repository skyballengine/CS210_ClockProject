
#include "Clock.h"
#include "Clock24.h"
#include "Clock12.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// inherits from Clock class
class Clock12 : public Clock

{
    // class variables for Clock12
public:
    int seconds12 = 0;
    int minutes12 = 0;
    int hours12 = 0;

    // constructor method for initializing Clock12 objects
    Clock12(int hours, int minutes, int seconds) 
        : def_hours(hours), def_minutes(minutes), def_seconds(seconds)
    {

    }

    int def_hours = 0;
    int def_minutes = 0;
    int def_seconds = 0;

    // add seconds to Clock12 objects
    void addSeconds12() {
        ++seconds12;
        if (seconds12 == 60) {
            seconds12 = 0;
            addMinutes12();
        }

    }
    // add minutes to Clock12 objects
    void addMinutes12() {
        ++minutes12;
        if (minutes12 == 60) {
            minutes12 = 0;
            addHours12();
        }

    }

    //add hours to Clock12 objects
    void addHours12() {
        ++hours12;
        if (hours12 == 12) {
            hours12 = 0;
        }
    }

    // display time for Clock12 objects
    void displayTime12() {
        cout << setw(2) << setfill('0') << hours12 << ":" << minutes12 << ":" << seconds12 << endl;
    }
};


