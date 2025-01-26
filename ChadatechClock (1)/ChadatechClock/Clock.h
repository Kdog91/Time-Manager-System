#ifndef CLOCK_H
#define CLOCK_H

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize the clock to a specific time or 00:00:00 by default
    Clock(int h = 0, int m = 0, int s = 0);

    // Methods to set and get the time
    void setTime(int h, int m, int s);
    void incrementTime();

    // Methods to display the 12-hour and 24-hour format
    void display12HourFormat() const;
    void display24HourFormat() const;
};

#endif

