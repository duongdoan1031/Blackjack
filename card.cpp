#include "Card.h"

card::card(char a, int b)
{
	symbol = a;
	value1 = b;
}

int card::getValue1()
{
	return value1;
}

char card::getSymbol()
{
	return symbol;
}
