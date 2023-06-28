// Copyright (c) 2023 Farm-Boy7130

#include <iostream>
#include <windows.h>
#include "../headers/DC22.h"
#include "../headers/DC23.h"
#include "../headers/Inventory.h"

#define sleep(x) Sleep(1000 * (x))

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// Set the icon for the application window
	HICON hIcon = static_cast<HICON>(LoadImage(NULL, "../icon/Icon.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE));
	if (hIcon)
	{
		// Create and set the small icon
		SendMessage(GetActiveWindow(), WM_SETICON, ICON_SMALL, reinterpret_cast<LPARAM>(hIcon));

		// Create and set the big icon
		SendMessage(GetActiveWindow(), WM_SETICON, ICON_BIG, reinterpret_cast<LPARAM>(hIcon));
	}
};

int main() {

/*
1 - Blue
2 - Green
3 - Cyan
4 - Red
5 - Purple
6 - Yellow (Dark)
7 - Default White
8 - Gray
9 - Bright Blue
10 - Bright Green
11 - Bright Cyan
12 - Bright Red
13 - Pink/Magenta
14 - Yellow
15 - Bright Yellow
Numbers after 15 are BACKGROUND colors ONLY
*/

	HANDLE h;
	h = GetStdHandle(
		STD_OUTPUT_HANDLE);

	std::string UI1;
	std::string UI1C;

	SetConsoleTitle("Catalyst 360 | Menu (Beta)");

	std::cout << "Welcome to Catalyst 360! \nPlease select a program which you would like to use from the list below:\n";
	std::cout << "1: ",
		SetConsoleTextAttribute(h, 12),
		std::cout << "Displacement Calculator 2023\n",
		SetConsoleTextAttribute(h, 7),
		std::cout << "2: ",
		SetConsoleTextAttribute(h, 12),
		std::cout << "Compression Ratio Calculator\n",
		SetConsoleTextAttribute(h, 7),
		std::cout << "3: ",
		SetConsoleTextAttribute(h, 12),
		std::cout << "Engine Library\n",
		SetConsoleTextAttribute(h, 7),
		std::cout << "User Input: ",
		SetConsoleTextAttribute(h, 11),
		std::cin >> UI1;
		SetConsoleTextAttribute(h, 7);

	while ((UI1 != "1") and (UI1 != "2") and (UI1 != "2022") and (UI1 != "3")) {
		std::cout << "'" << UI1 << "', Is an invalid response. Please try again: ";
		std::cin >> UI1;
	};

	std::string UI1P;
	if (UI1 == "1")
	{
		UI1P = "Displacement Calculator 2023";
	}

	if (UI1 == "2")
	{
		UI1P = "Compression Ratio Calculator";
	}

	if (UI1 == "3")
	{
		UI1P = "Engine Library";
	}

	if (UI1 == "2022")
	{
		UI1P = "Displacement Calculator 2022";
	}

	std::cout << "You have selected: '" << UI1P << "', Is this correct? [Y/N]\nUser Input: ";
	SetConsoleTextAttribute(h, 11);
	std::cin >> UI1C;
	SetConsoleTextAttribute(h, 7);

	while (UI1C != "y") {
		std::cout << "Please pick a program from the list:\n";
		std::cout << "1: ";
		SetConsoleTextAttribute(h, 12);
		std::cout << "Displacement Calculator 2023\n";
		SetConsoleTextAttribute(h, 7);
		std::cout << "2: ";
		SetConsoleTextAttribute(h, 12);
		std::cout << "Compression Ratio Calculator\n";
		SetConsoleTextAttribute(h, 7);
		std::cout << "User Input: ";
		SetConsoleTextAttribute(h, 11);
		std::cin >> UI1;
		SetConsoleTextAttribute(h, 7);

		while ((UI1 != "1") and (UI1 != "2") and (UI1 != "2022")) {
			SetConsoleTextAttribute(h, 7);
			std::cout << "'" << UI1 << "', Is an invalid response. Please try again: ";
			SetConsoleTextAttribute(h, 11);
			std::cin >> UI1;
			SetConsoleTextAttribute(h, 7);
		};

		std::string UI1P;
		if (UI1 == "1")
		{
			UI1P = "Displacement Calculator 2023";
		}

		if (UI1 == "2")
		{
			UI1P = "Compression Ratio Calculator";
		}

		if (UI1 == "2022")
		{
			UI1P = "Displacement Calculator 2022";
		}

		std::cout << "You have selected: '" << UI1P << "', Is this correct? [Y/N]\nUser Input: ";
		SetConsoleTextAttribute(h, 11);
		std::cin >> UI1C;
		SetConsoleTextAttribute(h, 7);
	}

	while ((UI1C != "y") and (UI1C != "n")) {
		SetConsoleTextAttribute(h, 7);
		std::cout << "'" << UI1C << "', Is an invalid response. Please try again: ";
		SetConsoleTextAttribute(h, 11);
		std::cin >> UI1C;
	};

	if ((UI1 == "1") and (UI1C == "y"))
	{
		std::cout << "This will now clear the screen in 1 second.";
		sleep(1);
		DC23();
		return EXIT_SUCCESS;
	}

	if ((UI1 == "2") and (UI1C == "y"))
	{
		std::cout << "Sorry, this program has not been fully implemented yet. Closing program in 5 seconds.\n\n Copyright (c) 2023 Farm-Boy7130";
		sleep(5);
		return EXIT_SUCCESS;
	}

	if ((UI1 == "3") and (UI1C == "y"))
	{
		std::cout << "This will now clear the screen in 1 second.";
		sleep(1);
		IV();
		return EXIT_SUCCESS;
	}

	if ((UI1 == "2022") and (UI1C == "y"))
	{
		std::cout << "This will now clear the screen in 1 second.";
		sleep(1);
		ID22();
		return EXIT_SUCCESS;
	}

	return EXIT_SUCCESS;


}