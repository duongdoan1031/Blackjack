#include "Player.h"

Player::Player()
{
	points = 0;
	cardsInHand = 0;
}

void Player::addCard(card a)
{
	cardsInHand++;
	hand[cardsInHand - 1] = a;
}

int Player::calculatePoints()
{
	int calculate = 0;
	int score;
	card temp;
	int presence = 0;
	for (int i = 0; i < cardsInHand; i++) {
		temp = hand[i];
		score = temp.getValue1();
		if (temp.getSymbol == 'A')
			presence++;
		calculate += score;
	}
	while (calculate > 21 && presence > 0) {
		calculate -= 10;
		presence--;
	}
	return calculate;
}
