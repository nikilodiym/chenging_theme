#include <iostream>
#include <string>
#include "theme.h"
#include <vector>

using namespace std;

string chooseBgColor() {
    string choice;
    cout << "We have only six colors: \n yellow \n green \n blue \n black \n white \n red";
    cout << "\nEnter background color or 'exit' to quit: ";
    cin >> choice;

    if (choice == "yellow") {
        return "6";
    }
    else if (choice == "green") {
		return "2";
    }
    else if (choice == "blue") {
        return "1";
    }
    else if (choice == "black") {
		return "0";
	}
    else if (choice == "white") {
		return "8";
    }
    else if (choice == "red") {
        return "4";
    }
    else if (choice == "exit") {
        return "exit";
    }
    else {
        cout << "Invalid color. Please check the spelling and try again." << endl;
        return "";
    }
}

void Menu() {
    string backgroundColor;

    do {
        backgroundColor = chooseBgColor();
        if (backgroundColor == "6" || backgroundColor == "1" || backgroundColor == "4" || backgroundColor == "0" || backgroundColor == "8" || backgroundColor == "2") {
            Theme customTheme("Custom", backgroundColor);
            customTheme.apply();
        }
    } while (backgroundColor != "exit");

    cout << "Exiting the program..." << endl;
}