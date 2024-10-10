#pragma once
#include <iostream>
#include <string>

using namespace std;

class Theme {
public:
    string name;
    string bgColor;

    Theme(string name, string bgColor)
        : name(name), bgColor(bgColor) {}

    void apply() const;
};

void Theme::apply() const {
    
#ifdef _WIN32
    system(("color " + bgColor + "7").c_str());
#endif
}