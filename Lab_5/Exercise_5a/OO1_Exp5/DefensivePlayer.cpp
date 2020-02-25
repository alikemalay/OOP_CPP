#include "DefensivePlayer.h"
DefensivePlayer::DefensivePlayer(const string & name, int age, double paymentPerYear, double paymentPerMatch):FootballPlayer(name,age,paymentPerYear)
{
	this->paymentPerMatch = paymentPerMatch;
}
DefensivePlayer::~DefensivePlayer()
{
}
double DefensivePlayer::CalculatePaymentForThisYear()
{
	return this->paymentPerYear + paymentPerMatch * playedMatchCount;
}
void DefensivePlayer::Defense()
{
	cout << this->name << " is defensing ... " << endl;
}
void DefensivePlayer::TripUp(const Player * player)
{
	cout << this->name << " tripped up '" << (player)->getName() << "'" << endl;
}
int DefensivePlayer::getPlayedMatchCount()
{
	return this->playedMatchCount;
}
void DefensivePlayer::setPlayedMatchCount(int playedMatchCount)
{
	this->playedMatchCount = playedMatchCount;
}
