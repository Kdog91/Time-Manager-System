#include <iostream>
#include "Clock.h"

void displayClocks(const Clock& clock) {
    std::cout << "12-Hour Clock: ";
    clock.display12HourFormat();
    std::cout << "24-Hour Clock: ";
    clock.display24HourFormat();
}

void userMenu(Clock& clock) {
    int choice;
    do {
        std::cout << "\n1. Display Clocks\n";
        std::cout << "2. Add One Hour\n";
        std::cout << "3. Add One Minute\n";
        std::cout << "4. Add One Second\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            displayClocks(clock);
            break;
        case 2:
            clock.setTime((clock.getHours() + 1) % 24, clock.getMinutes(), clock.getSeconds());
            break;
        case 3:
            clock.setTime(clock.getHours(), (clock.getMinutes() + 1) % 60, clock.getSeconds());
            break;
        case 4:
            clock.incrementTime();
            break;
        case 5:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);
}

int main() {
    Clock clock(14, 30, 45); // Initialize clock with 14:30:45 (2:30:45 PM)
    userMenu(clock);
    return 0;
}
