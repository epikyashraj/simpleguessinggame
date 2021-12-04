// Simple Random Guessing Game In C++

#include <iostream>
#include <string>
#include <stdlib.h> // For Random Numbers 
#include <time.h> // For Random Number According To The Time
#include <algorithm> // For (for_each) Function
using namespace std;

void squid_game()
{
	// Variables
	srand(time(NULL));
	int number = rand() % 10 + 1;
	int guesses_took = 0;
	int choice;
	
	cout << "***********************\n";
	cout << "*You Are In Squid Game*\n";
	cout << "***********************\n";

	cout << "************************************\n";
	cout << "*You Must Guess The Correct Number *\n";
	cout << "*You Have Only 3 Guesses           *\n";
	cout << "************************************\n";

	cout << "*******************************\n";
	cout << "*The Numeber Is Between 1 - 10*\n";
	cout << "*******************************\n";

	do
	{
		cout << "Enter Your First Guess: ";
		cin >> choice;

		if (choice > number)
		{
			cout << "Your Number Is Higher\n";
		}

		else if (choice < number)
		{
			cout << "Your Number Is Lower\n";
		}

		else if (choice == number)
		{
			cout << "You Won $ 45.6 Billion Dollars\n";
			cout << "Now You Can Go Home\n";
		}

		guesses_took++;

		if (guesses_took == 3)
		{
			cout << "You Lose Now You Wil Die\n";
			cout << "Bang !\n";
			cout << "Pow !\n";
			cout << "Mike He Is Dead Dump Him Out\n";

			break;
		}

	} while (choice != number);
}

int main()
{
	string akuma; // Variable Of Taking Input Of Choice To Play Game Or Not

	cout << "Wanna Play A Game\n";
	cout << "You Will Win Money\n";
	cout << "Yes Or No: ";

	getline(cin, akuma);

	for_each(akuma.begin(), akuma.end(), [](char& a) // To Lower The String Input
		{
			a = ::tolower(a);
		}
	);

	if (akuma == "yes" || "y")
	{
		cout << "OK\n";
		squid_game();
	}

	else if (akuma == "no" || "n")
	{
		cout << "Ok\n";
	}

	else
	{
		cout << "UGH\n";
	}

	return 0;
}











// Written By Yashraj Sharma
// Instagram = epikyash
// Youtube = EpikYash
