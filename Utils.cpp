#include <iostream>
#include <string.h>
#include "Utils.h"

using namespace std;

void Print(string message, string colour, bool bold)
{

    int colourCode = 37; // Default to white

    if (colour == "Red") {
        colourCode = 31;
    } else if (colour == "Green") {
        colourCode = 32;
    } else if (colour == "Blue") {
        colourCode = 34;
    } else if (colour == "Yellow") {
        colourCode = 33;
    } else if (colour == "Magenta") {
        colourCode = 35;
    } else if (colour == "Cyan") {
        colourCode = 36;
    } else if (colour == "White") {
        colourCode = 37;
    }

    cout << "\033[" << (bold ? "1;" : "") << colourCode << "m" << message << "\033[0m" << endl;
}
