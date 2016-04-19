#pragma once

#include "Card.h"
#include <iostream>

class Player
{
public:
	char generateCard();
	int getPoints();
	void addCard(card a);
	int calculatePoints();
	bool cardCheck();
private:
	card hand[5];
	char cardSymbol;
	int points;
	int cardsInHand;
};
