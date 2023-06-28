// Copyright (c) 2023 Farm-Boy7130

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>
#define sleep(x) Sleep(1000 * (x));
#define User SetConsoleTextAttribute(h, 11);
#define System SetConsoleTextAttribute(h, 7);
#define Definition SetConsoleTextAttribute(h, 4);
#define clear system("cls");

void IV() {

	SetConsoleTitle("Catalyst 360 | Engine Inventory (ALPHA)");

	clear;

	HANDLE h;
	h = GetStdHandle(
		STD_OUTPUT_HANDLE);

	std::cout << "Welcome to the Catalyst 360 Engine Inventory!\nTo find an engine, look under the manufacturer name or the name of the engine. This list is alphabetical.";

	System;
	std::cout << "\nCopyright (c) 2023 Farm-Boy7130\n";
	system("pause");

};