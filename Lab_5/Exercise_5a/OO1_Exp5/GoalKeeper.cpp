#include "GoalKeeper.h"

double GoalKeeper::CalculatePaymentForThisYear()
{
	return this->paymentPerYear;
}

void GoalKeeper::FlyAndTryCatch()
{
	cout << this->name << " is flying and trying to catch ... " << endl;
}

GoalKeeper::GoalKeeper(const string & name, int age, double paymentPerYear):FootballPlayer(name,age,paymentPerYear)
{
}

GoalKeeper::~GoalKeeper()
{
}
