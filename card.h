#pragma once

#include <iostream>

using std::cin;
using std::string;

class card
{
public:
	card();
	card(char a, int b);
	int getValue1();
	char getSymbol();
private:
	char symbol;
	int value1;
};

card Ace('A', 11);
card Two('2', 2);
card Three('3', 3);
card Four('4', 4);
card Five('5', 5);
card Six('6', 6);
card Seven('7', 7);
card Eight('8', 8);
card Nine('9', 9);
card Ten('0', 10);
card Jack('J', 10);
card Queen('Q', 10);
card King('K', 10);
