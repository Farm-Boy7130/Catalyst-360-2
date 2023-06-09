#include <iostream>
#include <windows.h>
#define sleep(x) Sleep(1000 * (x))

bool is_digits(const std::string& str)
{
    return str.find_first_not_of("0123456789.") == std::string::npos;
}

void DC23() {

    HANDLE h;
    h = GetStdHandle(
        STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 7);

    std::string bore;
    std::string stroke;
    std::string cylindercount;

    std::string UI1;

    std::cout << "Welcome to Displacement Calculator 2023!\nPlease enter your bore: ";
    SetConsoleTextAttribute(h, 11);
    std::cin >> bore;

    is_digits(bore);
    bool isBoreValid = false;
    if (is_digits(bore) == 1) {
        isBoreValid = true;
    }
    while (isBoreValid == false) {
        std::cout << "'" << bore << "' is an Invalid bore. Please enter a new bore: ";
        std::cin >> bore;
    };

    std::cout << "You entered: " << bore << " as your bore, Is this correct?: [Y/N]";
    std::cin >> UI1;

    while ((UI1 != "y") and (UI1 != "n")) {
        std::cout << "'" << UI1 << "', Is an invalid response. Please try again: [Y/N]";
        std::cin >> UI1;
    }

};