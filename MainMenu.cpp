#include<iostream>
#include<fstream>
#include<string>
#include "MainMenu.h"

void displayChoicesAdmin()
{
	std::cout << "1 - List of Restaurants.\n";
	std::cout << "2 - Add Restaurants.\n";
	std::cout << "3 - Remove Restaurants.\n";
}

void getRestaurants()
{
	std::cout << "- - - Available Restaurants - - - \n";

	// file ma vako restaurants liyera display garne
	std::ifstream inf{ "Restaurants.csv" };


	if (!inf)
	{
		std::cerr << "Couldn't open file to read.\n";
	}

	int i{ 1 };

	while (inf)
	{
		std::string strInput;
		std::getline(inf, strInput);
		
		if (strInput != "")
		{
			std::cout << i++ << '-' << strInput << '\n';
		}
	}
}

void setRestaurants()
{
	std::ofstream outf{ "Restaurants.csv", std::ios::app };

	if (!outf)
	{
		std::cerr << "Couldn't open file for append.\n";
	}
	
	std::string resName;
	std::cout << "Name of Restaurant: ";
	std::cin >> resName;

	outf << resName << '\n';
}