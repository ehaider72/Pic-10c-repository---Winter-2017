#include "cards.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>


/*
You might or might not need these two extra libraries
#include <iomanip>
#include <algorithm>
*/

/*
Default constructor for the Card class.
It could give repeated cards. This is OK.
Most variations of Blackjack are played with
several decks of cards at the same time.
*/
Card::Card(){
	int r = 1 + rand() % 4;
	switch (r) {
	case 1: suit = OROS; break;
	case 2: suit = COPAS; break;
	case 3: suit = ESPADAS; break;
	case 4: suit = BASTOS; break;
	default: break;
	}

	r = 1 + rand() % 10;
	switch (r) {
	case  1: rank = AS; break;
	case  2: rank = DOS; break;
	case  3: rank = TRES; break;
	case  4: rank = CUATRO; break;
	case  5: rank = CINCO; break;
	case  6: rank = SEIS; break;
	case  7: rank = SIETE; break;
	case  8: rank = SOTA; break;
	case  9: rank = CABALLO; break;
	case 10: rank = REY; break;
	default: break;
	}
}

// Accessor: returns a string with the suit of the card in Spanish 
string Card::get_spanish_suit() const {
	string suitName;
	switch (suit) {
	case OROS:	
		suitName = "oros";  
		break;
	case COPAS:
		suitName = "copas";  
		break;
	case ESPADAS:
		suitName = "espadas";  
		break;
	case BASTOS:
		suitName = "bastos"; 
		break;
	default: break;
	}
	return suitName;
}

// Accessor: returns a string with the rank of the card in Spanish 
string Card::get_spanish_rank() const {
	string rankName;
	switch (rank) {
	case AS:
		rankName = "As"; // one
		break;
	case DOS:
		rankName = "Dos"; // two
		break;
	case TRES:
		rankName = "Tres"; // three
		break;
	case CUATRO:
		rankName = "Cuatro";  //four
		break;
	case CINCO:
		rankName = "Cinco"; //five
		break;
	case SEIS:
		rankName = "Seis";  //six
		break;
	case SIETE:
		rankName = "Siete"; //seven ***********
		break;
	case SOTA:
		rankName = "Sota"; //TEN
		break;
	case CABALLO:
		rankName = "Caballo"; //eleven
		break;
	case REY:
		rankName = "Rey";  //twelve
		break;
	default: break;
	}
	return rankName;
}



// Accessor: returns a string with the suit of the card in English 
// This is just a stub! Modify it to your liking.
string Card::get_english_suit() const {
	string engName;
	switch (suit) {
	case OROS:
		engName = "gold";  
		break;
	case COPAS:
		engName = "cups";  
		break;
	case ESPADAS:
		engName = "swords";  
		break;
	case BASTOS:
		engName = "clubs"; 
		break;
	default: break;
	}
	return engName;
	
}

// Accessor: returns a string with the rank of the card in English 
// This is just a stub! Modify it to your liking.
double Card::get_points() const {
	double points = 800;
	switch (rank) {
	case AS:
		points = 1; // one
		break;
	case DOS:
		points = 2; // two
		break;
	case TRES:
		points = 3; // three
		break;
	case CUATRO:
		points = 4;  //four
		break;
	case CINCO:
		points = 5; //five
		break;
	case SEIS:
		points = 6;  //six
		break;
	case SIETE:
		points = 7; //seven ***********
		break;
	case SOTA:
		points = 0.5; //TEN
		break;
	case CABALLO:
		points = 0.5; //eleven
		break;
	case REY:
		points = 0.5;  //twelve
		break;
	default: break;
	}
	return points;
}



// Assigns a numerical value to card based on rank.
// AS=1, DOS=2, ..., SIETE=7, SOTA=10, CABALLO=11, REY=12
int Card::get_rank() const {
	return static_cast<int>(rank)+1;
}

string Card::get_english_rank() const {
	string engRank;
	switch (rank) {
	case AS:
		engRank = "one"; // one
		break;
	case DOS:
		engRank = "two"; // two
		break;
	case TRES:
		engRank = "three"; // three
		break;
	case CUATRO:
		engRank = "four";  //four
		break;
	case CINCO:
		engRank = "five"; //five
		break;
	case SEIS:
		engRank = "six";  //six
		break;
	case SIETE:
		engRank = "seven"; //seven ***********
		break;
	case SOTA:
		engRank = "ten"; //TEN
		break;
	case CABALLO:
		engRank = "eleven"; //eleven
		break;
	case REY:
		engRank = "twelve";  //twelve
		break;
	default: break;
	}
	return engRank;

}

// Comparison operator for cards
// Returns TRUE if card1 < card2
bool Card::operator < (Card card2) const {
	return rank < card2.rank;
}



/* *************************************************
Hand class
************************************************* */
// Implemente the member functions of the Hand class here.



/* *************************************************
Player class
************************************************* */
// Implemente the member functions of the Player class here.

