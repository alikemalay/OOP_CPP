/// RandomNumberGenerator.cpp
#include "RandomNumberGenerator.h"
#include <time.h>
#include <iostream>
using namespace std;
RandomNumberGenerator::RandomNumberGenerator()
{
	srand(time(NULL));
}
RandomNumberGenerator::~RandomNumberGenerator()
{
	cout << "Object is being deleted" << endl;
}
int RandomNumberGenerator::getRandomInteger(int lowerBound, int upperBound)
{
	return lowerBound + rand() % (upperBound-lowerBound+1);
}
float RandomNumberGenerator::getRandomFloat(float lowerBound, float upperBound, Precision precision)
{
	int rValue, lB, uB;
	float y;
	if (precision == ONE)
	{
		y = 10.0;
	}
	if (precision == TWO)
	{
		y = 100.0;
	}
	if (precision == THREE)
	{
		y = 1000.0;
	}
	if (precision == FOUR)
	{
		y = 10000.0;
	}
	lB = lowerBound * y;
	uB = upperBound * y;
	rValue = lB + rand() % (uB - lB + 1);
	float x = rValue / y;
	return  x;
}
double RandomNumberGenerator::getRandomDouble(double lowerBound, double upperBound, Precision precision)
{
	int rValue, lB, uB;
	double y;
	if (precision == ONE)
	{
		y = 10.0;
	}
	if (precision == TWO)
	{
		y = 100.0;
	}
	if (precision == THREE)
	{
		y = 1000.0;
	}
	if (precision == FOUR)
	{	
		y = 10000.0;
	}
	lB = lowerBound * y;
	uB = upperBound * y;
	rValue = lB + rand() % (uB - lB + 1);
	double x = rValue / y;
	return  x;
}
char RandomNumberGenerator::getRandomCharacter(CharacterType characterType)
{
	int x;
	if (characterType == LOWER_LETTER)
	{
		x = getRandomInteger(97, 122);
	}
	if (characterType == UPPER_LETTER)
	{
		x = getRandomInteger(65, 90);
	}
	if (characterType == DIGIT)
	{
		x = getRandomInteger(48, 57);
	}
	char c = x;;
	return c;
}
