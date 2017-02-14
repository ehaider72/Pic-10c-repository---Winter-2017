#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

double startingCash = 100; // how much money the player starts with
double dealerStart = 900; // how much money the dealer starts with
double bet = 0;
const double loser = 7.5;
string language = "english";

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main(){

	/* GAME OUTCOMES:
	1) The player comes closer to 7 1/2 than the dealer or the dealer busts but the player did not bust.
	In this case the player wins the round and the player's money increases by the amount that was bet.

	2)The dealer comes closer to 7 1/2 than the player, or the player busts.
	In this case the player loses the round and the player's money decreases by the amount that was bet.

	3) Both, the player and dealer bust.
	In this case the player loses the round and the player's money decreases by the amount that was bet.

	4)This is called house advantage. 
	Both the player and the dealer have the same total and  they do not bust.
In this case a tie is declared and no money is exchanged.
*/

	Player dealer(dealerStart);
	Player gambler(startingCash);
	int bet = 0;

	cout << "\nHello young gambler! Thank you for playing Siete y Medio. How much money would you like to bet? ";
	cin >> bet;
	while (bet > gambler.getMoney() || bet <= 0){
		cout << "\nI'm sorry but your bet exceeds your means. Please enter a bet between 1 and " << startingCash << " ";
		cin >> bet;
	}
	
	cout << "\nOne last question: Would you like to play in Spanish or English? ";
	cin >> language;
	while (language != "Spanish" || language != "spanish" || language != "English" || language != "english")
	{
		cout << "\nPlease enter a valid language. Would you like to play in English or Spanish? ";
		cin >> language;
	}




	/* --STATEMENTS-- */
	return 0;
}
