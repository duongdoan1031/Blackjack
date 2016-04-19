#include "Player.h"

Player::Player()
{
	points = 0;
	cardsInHand = 0;
}

char Player::generateCard(){
	int item;
	
	item=rand() % 13 + 1;
	
	switch(item){
		case 1:
		cardSymbol = 'A';
		break;
		
		case 2:
		cardSymbol = '2';
		break;
		
		case 3:
		cardSymbol = '3';
		break;
		
		case 4:
		cardSymbol = '4';
		break;
		
		case 5 :
		cardSymbol = '5';
		break;
		
		case 6:
		cardSymbol = '6';
		break;
		
		case 7:
		cardSymbol = '7';
		break;
		
		case 8:
		cardSymbol = '8';
		break;
		
		case 9:
		cardSymbol = '9';
		break;
		
		case 10:
		cardSymbol = '0';
		break;
		
		case 11:
		cardSymbol = 'J';
		break;
		
		case 12:
		cardSymbol = 'Q';
		break;
		
		
		case 13:
		cardSymbol = 'K';
		break;
	}
	
	return cardSymbol;
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
