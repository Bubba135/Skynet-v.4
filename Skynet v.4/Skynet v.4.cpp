// Skynet HK-Aerial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
//Added time
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	//Change to Enemey Location
	int secretNumber = rand() % 64 + 1;
	//Add High and Low Vars
	int SusenTries = 0;
	int laryTries = 0;
	//add veps
	int Sguess;
	int ShighRange = 64;
	int SlowRange = 1;

	cout << "Susen Is Now Online\n\n" << endl;
	cout << "\tSusen: Welcome to a new drown hunting program.\n\n";

	cout << "You: In this program you will see how a AI will hunt" << endl;
	cout << "down enemy in a 8x8 grid with out humen error.\n\n" << endl;

	//cout << "You: The eneny is hiding out in Range: " << secretNumber << " in a 8x8 grid." << endl;

	do
	{
		//How the program will find it numbers
		cout << endl << endl;
		cout << "***************************" << endl;
		cout << "Susen: Scanning the area " << endl;
		//the code for thAI to guess
		guess = (ShighRange - SlowRange) / 2 + SlowRange;
		cout << "Susen has a Guess of: " << Sguess << endl;
		++SusenTries;

		if (Sguess > secretNumber)
		{
			//The code for being to High
			cout << "Susen: Error Too high going lower!\n\n";
			cout << "Susen augsting High Range" << endl;
			cout << "Old High range is " << ShighRange << endl;
			//change the high keep the low
			ShighRange = Sguess - 1;
			cout << "New High range is " << ShighRange << endl;
		}
		else if (Sguess < secretNumber)
		{
			// The code for being to low.
			cout << "Susen: Error Too low going higher\n\n";
			cout << "Susen augsting Low Range" << endl;
			cout << "Old Low range is " << SlowRange << endl;
			//change low keep the high
			lowRange = Sguess + 1;
			cout << "New Low range is " << SlowRange << endl;
		}
		else
		{
			// If it gets the number.
			cout << "\nSusen: I had found enemy in " << SusenTries << " lapes! Now termainat enemy.\n";
			cout << "Susen: Targeting enemy, locking on." << endl;
			cout << "You: Fire!" << endl;
		}
	} while (Sguess != secretNumber);

	system("pause");

	return 0;
}