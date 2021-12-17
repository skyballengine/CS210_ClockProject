
#include "Clock.h"
#include "Clock12.h"
#include "Clock24.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// inherits from Clock class
class Clock24 : public Clock
{

public:
    // class variables specific to the 24 hour clock object type
    int seconds24 = 0;
    int minutes24 = 0;
    int hours24 = 0;

    // constructor method that initializes with zero values
    Clock24(int hours, int minutes, int seconds)
        : def_hours(hours), def_minutes(minutes), def_seconds(seconds)
    {

    }

    int def_hours = 0;
    int def_minutes = 0;
    int def_seconds = 0;

    // add seconds to Clock24 objects
    void addSeconds24() {
        ++seconds24;
        if (seconds24 == 60) {
            seconds24 = 0;
            addMinutes24();
        }
    }

    // add minutes to Clock24 objects
    void addMinutes24() {
        ++minutes24;
        if (minutes24 == 60) {
            minutes24 = 0;
            addHours24();
        }
    }

    // add hours to Clock 24 objects
    void addHours24() {
        ++hours24;
        if (hours24 == 24) {
            hours24 = 0;
        }

    }

    // display time for Clock24 objects 
    void displayTime24() {
        cout << setw(2) << setfill('0') << hours24 << ":" << minutes24 << ":" << seconds24 << endl;
    }
    };



