#include "MiddleFielderPlayer.h"

MiddleFielderPlayer::MiddleFielderPlayer(const string & name, int age, double paymentPerYear, double paymentPerAssist):FootballPlayer(name,age,paymentPerYear)
{
	this->paymentPerAssist = paymentPerAssist;
}

MiddleFielderPlayer::~MiddleFielderPlayer()
{
}

double MiddleFielderPlayer::CalculatePaymentForThisYear()
{
	return this->paymentPerYear + paymentPerAssist* assistCount;
}

int MiddleFielderPlayer::getAssistCount()
{
	return assistCount;
}

void MiddleFielderPlayer::setAssistCount(int assistCount)
{
	this->assistCount = assistCount;
}

void MiddleFielderPlayer::TryThroughBall(const Player * player)
{
	cout << this->name << " trying a through ball to '" << (player)->getName() << "'" << endl;
}

void MiddleFielderPlayer::Press()
{
	cout << this->name << " is pressing ..." << endl;
}
