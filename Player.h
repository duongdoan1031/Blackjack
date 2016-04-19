#pragma once

#include "Card.h"
#include <iostream>

class Player
{
public:
	int getPoints();
	void addCard(card a);
	int calculatePoints();
	bool cardCheck();
private:
	card hand[5];
	int points;
	int cardsInHand;
};
