#include "ForwardPlayer.h"

double ForwardPlayer::CalculatePaymentForThisYear()
{
	return this->paymentPerYear + paymentPerGoal * goalCount;
}

ForwardPlayer::ForwardPlayer(const string & name,int age, double paymentPerYear, double paymentPerGoal ):FootballPlayer(name,age,paymentPerYear)
{
	this->paymentPerGoal = paymentPerGoal;
}

ForwardPlayer::~ForwardPlayer()
{
}

int ForwardPlayer::getGoalCount()
{
	return this->goalCount;
}

void ForwardPlayer::setGoalCount(int goalCount)
{
	this->goalCount = goalCount;
}

void ForwardPlayer::ThrowYourSelf()
{
	cout << this->name << " throwing himself ..." << endl;
}

void ForwardPlayer::TryDribblePast(const Player * player)
{
	cout << this->name << " is trying a dribble past on '" << (player)->getName() << "'" << endl;
}