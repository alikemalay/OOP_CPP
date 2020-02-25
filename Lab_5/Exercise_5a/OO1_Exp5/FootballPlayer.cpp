#include "FootballPlayer.h"

FootballPlayer::FootballPlayer(const string & name, int age, double paymentPerYear):Player(name,age)
{
	this->paymentPerYear = paymentPerYear;
}

FootballPlayer::~FootballPlayer()
{
}

double FootballPlayer::getPaymentPerYear()
{
	return this->paymentPerYear;
}

void FootballPlayer::setPaymentPerYear(double paymentPerYear)
{
	this->paymentPerYear = paymentPerYear;
}

void FootballPlayer::Pas(const Player * player)
{
	cout << this->name << " is passing to '" << (player)->getName() << "'"<< endl;
}

void FootballPlayer::Shot()
{
	cout << this->name << " is shotting !" << endl;
}