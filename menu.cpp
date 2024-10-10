#include <iostream>
#include <string>
#include "theme.h"
#include <vector>

using namespace std;

string chooseBgColor() {
    int choice;
    cout << "Choose background color (Enter 0 to exit):" << endl;
    cout << "1. Yellow\n2. Blue\n3. Red\n";
    cin >> choice;

    switch (choice) {
    case 1: return "6";
    case 2: return "1";
    case 3: return "4";
    case 0: return "exit";
    default:
        cout << "Invalid choice, please try again." << endl;
        return "";
    }
}

void Menu() {
    string backgroundColor;

    do {
        backgroundColor = chooseBgColor();
        if (backgroundColor == "6" || backgroundColor == "1" || backgroundColor == "4") {
            Theme customTheme("Custom", backgroundColor);
            customTheme.apply();
        }
    } while (backgroundColor != "exit");

    cout << "Exiting the program..." << endl;
}