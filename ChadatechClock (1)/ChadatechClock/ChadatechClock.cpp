#include "Clock.h"
#include <iostream>
#include <iomanip> // for std::setw and std::setfill

// Constructor
Clock::Clock(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

// Method to set time
void Clock::setTime(int h, int m, int s) {
    hours = h;
    minutes = m;
    seconds = s;
}

// Method to increment time by one second
void Clock::incrementTime() {
    seconds++;
    if (seconds >= 60) {
        seconds = 0;
        minutes++;
    }
    if (minutes >= 60) {
        minutes = 0;
        hours++;
    }
    if (hours >= 24) {
        hours = 0;
    }
}

// Method to display time in 12-hour format
void Clock::display12HourFormat() const {
    int displayHours = hours % 12;
    if (displayHours == 0) {
        displayHours = 12;
    }
    std::string am_pm = (hours >= 12) ? "PM" : "AM";

    std::cout << std::setw(2) << std::setfill('0') << displayHours << ":"
        << std::setw(2) << std::setfill('0') << minutes << ":"
        << std::setw(2) << std::setfill('0') << seconds << " " << am_pm << std::endl;
}

// Method to display time in 24-hour format
void Clock::display24HourFormat() const {
    std::cout << std::setw(2) << std::setfill('0') << hours << ":"
        << std::setw(2) << std::setfill('0') << minutes << ":"
        << std::setw(2) << std::setfill('0') << seconds << std::endl;
}
