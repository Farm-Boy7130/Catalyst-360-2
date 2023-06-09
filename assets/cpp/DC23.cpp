#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>
#define sleep(x) Sleep(1000 * (x));
#define User SetConsoleTextAttribute(h, 11);
#define System SetConsoleTextAttribute(h, 7);
#define Definition SetConsoleTextAttribute(h, 4);
#define clear system("cls");

bool is_digits(const std::string& str)
{
	return str.find_first_not_of("0123456789.") == std::string::npos;
}

bool is_digits1(const std::string& str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}

void DC23() {

	SetConsoleTitle("Catalyst 360 | Displacement Calculator 2023 (Beta)");

	clear;

	HANDLE h;
	h = GetStdHandle(
		STD_OUTPUT_HANDLE);

	System;

	std::string bore;
	std::string stroke;
	std::string cylindercount;

	std::string UI1;
	std::string UI2;
	std::string UI3;

	std::cout << "Welcome to Displacement Calculator 2023!\nPlease enter your bore: ";
	User;
	std::cin >> bore;

	is_digits(bore);
	bool isBoreValid = false;
	if (is_digits(bore) == true) {
		isBoreValid = true;
	}
	while (isBoreValid == false) {
		System;
		std::cout << "'"
			<< bore
			<< "' is an Invalid bore. Please enter a new bore: ";
		User;
		std::cin >> bore;
		if (is_digits(bore) == true) {
			isBoreValid = true;
		}
	};

	System;
	std::cout << "You entered: "
		<< bore
		<< " as your bore, Is this correct?: [Y/N]\n";
	std::cout << "User Input: ";
	User;
	std::cin >> UI1;

	while ((UI1 != "y") and (UI1 != "n")) {
		System;
		std::cout << "'"
			<< UI1
			<< "', Is an invalid response. Please try again: [Y/N]\n";
		std::cout << "User Input: ";
		User;
		std::cin >> UI1;
	}

	while (UI1 == "n") {
		System;
		std::cout << "Please enter a new bore:";
		User;
		std::cin >> bore;
		isBoreValid = false;
		if (is_digits(bore) == true) {
			isBoreValid = true;
		}
		while (isBoreValid == false) {
			System;
			std::cout << "'"
				<< bore
				<< "' is an Invalid bore. Please enter a new bore: ";
			User;
			std::cin >> bore;
			if (is_digits(bore) == true) {
				isBoreValid = true;
			}
		};
		System;
		std::cout << "You entered: "
			<< bore
			<< " as your bore, Is this correct?: [Y/N]\n";
		std::cout << "User Input: ";
		User;
		std::cin >> UI1;
	}

	clear;
	Definition;
	std::cout << "Bore: '"
		<< bore
		<< "'\n\n";

	System;
	std::cout << "Please enter a stroke: ";
	User;
	std::cin >> stroke;

	is_digits(stroke);
	bool isStrokeValid = false;
	if (is_digits(stroke) == true) {
		isStrokeValid = true;
	}
	while (isStrokeValid == false) {
		System;
		std::cout << "'"
			<< stroke
			<< "' is an Invalid stroke. Please enter a new stroke: ";
		User;
		std::cin >> stroke;
		if (is_digits(stroke) == true) {
			isStrokeValid = true;
		}
	};

	System;
	std::cout << "You entered: "
		<< stroke
		<< " as your stroke, Is this correct?: [Y/N]\n";
	std::cout << "User Input: ";
	User;
	std::cin >> UI2;

	while ((UI2 != "y") and (UI2 != "n")) {
		System;
		std::cout << "'"
			<< UI2
			<< "', Is an invalid response. Please try again: [Y/N]\n";
		std::cout << "User Input: ";
		User;
		std::cin >> UI2;
	}

	while (UI2 == "n") {
		System;
		std::cout << "Please enter a new stroke:";
		User;
		std::cin >> stroke;
		isStrokeValid = false;
		if (is_digits(stroke) == true) {
			isStrokeValid = true;
		}
		while (isStrokeValid == false) {
			System;
			std::cout << "'"
				<< stroke
				<< "' is an Invalid stroke. Please enter a new stroke: ";
			User;
			std::cin >> stroke;
			if (is_digits(stroke) == true) {
				isStrokeValid = true;
			}
		};
		System;
		std::cout << "You entered: "
			<< stroke
			<< " as your stroke, Is this correct?: [Y/N]\n";
		std::cout << "User Input: ";
		User;
		std::cin >> UI2;
	}

	clear;
	Definition;
	std::cout << "Bore: '"
		<< bore
		<< "'\n"
		<< "Stroke: '"
		<< stroke
		<< "'\n\n";

	System;

	double SCD;
	double SCDL;
	double CC;
	double S2;
	double B2;
	double pi = 3.14159;

	B2 = stod(bore);
	S2 = stod(stroke);
	SCD = ((B2 / 2) * (B2 / 2)) * pi * S2;
	SCDL = (SCD / 61.024);

	clear;
	Definition;
	std::cout << "Bore: '"
		<< bore
		<< "'\n"
		<< "Stroke: '"
		<< stroke
		<< "'\n"
		<< "Displacement Per Cylinder (Cubic Inches): '"
		<< SCD
		<< "'\n"
		<< "Displacement Per Cylinder (Liters): '"
		<< SCDL
		<< "\n\n";

	System;
	std::cout << "Please enter your cylinder count: ";
	User;
	std::cin >> cylindercount;

	is_digits1(cylindercount);
	bool isCylinderCountValid = false;
	if (is_digits1(cylindercount) == true) {
		isCylinderCountValid = true;
	}
	while (isCylinderCountValid == false) {
		System;
		std::cout << "'"
			<< cylindercount
			<< "' is an Invalid cylinder count. Please enter a new cylinder count: ";
		User;
		std::cin >> cylindercount;
		if (is_digits1(cylindercount) == true) {
			isCylinderCountValid = true;
		}
	};

	System;
	std::cout << "You entered: "
		<< cylindercount
		<< " as your cylinder count, Is this correct?: [Y/N]\n";
	std::cout << "User Input: ";
	User;
	std::cin >> UI3;

	while ((UI3 != "y") and (UI3 != "n")) {
		System;
		std::cout << "'"
			<< UI3
			<< "', Is an invalid response. Please try again: [Y/N]\n";
		std::cout << "User Input: ";
		User;
		std::cin >> UI3;
	}

	while (UI3 == "n") {
		System;
		std::cout << "Please enter a new cylinder count:";
		User;
		std::cin >> cylindercount;
		isCylinderCountValid = false;
		if (is_digits1(cylindercount) == true) {
			isCylinderCountValid = true;
		}
		while (isCylinderCountValid == false) {
			System;
			std::cout << "'"
				<< cylindercount
				<< "' is an Invalid cylinder count. Please enter a new cylinder count: ";
			User;
			std::cin >> cylindercount;
			if (is_digits1(cylindercount) == true) {
				isCylinderCountValid = true;
			}
		};
		System;
		std::cout << "You entered: "
			<< cylindercount
			<< " as your cylinder count, Is this correct?: [Y/N]\n";
		std::cout << "User Input: ";
		User;
		std::cin >> UI3;
	}
	
	int CylinderCount = stoi(cylindercount);
	double DisplacementCI = (SCD * CylinderCount);
	double DisplacementL = (DisplacementCI / 61.024);

	clear;
	Definition;
	std::cout << "Bore: '"
		<< bore
		<< "'\n"
		<< "Stroke: '"
		<< stroke
		<< "'\n"
		<< "Cylinder Count: '"
		<< CylinderCount
		<< "'\n"
		<< "Displacement Per Cylinder (Cubic Inches): '"
		<< SCD
		<< "'\n"
		<< "Displacement Per Cylinder (Liters): '"
		<< SCDL
		<< "\n"
		<< "Collective Displacement (Cubic Inches): '"
		<< DisplacementCI
		<< "\n"
		<< "Collective Displacement (Liters): '"
		<< DisplacementL
		<< "\n\n";
	
	system("pause");

};