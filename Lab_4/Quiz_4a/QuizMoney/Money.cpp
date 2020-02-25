#include <iomanip>
#include <iostream>

using namespace std;

#include "Money.h"

Money::Money()
{
}

Money::~Money()
{
}

double Money::getAmount()
{
	return amount;
}

void Money::setAmount(int amount)
{
	this->amount = amount;
}

Money & Money::operator+(const Money & money)
{
	Money tmp;
	tmp.amount = this->amount + money.amount;
	return tmp;
}

Money & Money::operator+=(const Money & money)
{
	this->amount = this->amount + money.amount;
	return *this;
}

Money & Money::operator+(double amount)
{
	Money tmp;
	tmp.amount = this->amount + amount;
	return tmp;
}

Money & Money::operator+=(double amount)
{
	
	this->amount = this->amount + amount;
	return *this;
}


Money & Money::operator-(const Money & money)
{
	Money tmp;
	tmp.amount = this->amount - money.amount;
	return tmp;
}

Money & Money::operator-=(const Money & money)
{
	this->amount = this->amount - money.amount;
	return *this;
}

Money & Money::operator-(double amount)
{
	Money tmp;
	tmp.amount = this->amount - amount;
	return tmp;
}

Money & Money::operator-=(double amount)
{
	this->amount = this->amount - amount;
	return *this;
}


Money & Money::operator*(const Money & money)
{
	Money tmp;
	tmp.amount = this->amount * money.amount;
	return tmp;
}

Money & Money::operator*=(const Money & money)
{
	this->amount = this->amount * money.amount;
	return *this;
}

Money & Money::operator*(double amount)
{
	Money tmp;
	tmp.amount = this->amount * amount;
	return tmp;
}

Money & Money::operator*=(double amount)
{
	this->amount = this->amount * amount;
	return *this;
}



Money & Money::operator/(const Money & money)
{
	Money tmp;
	tmp.amount = this->amount / money.amount;
	return tmp;
}

Money & Money::operator/=(const Money & money)
{
	this->amount = this->amount / money.amount;
	return *this;
}

Money & Money::operator/(double amount)
{
	Money tmp;
	tmp.amount = this->amount / amount;
	return tmp;
}

Money & Money::operator/=(double amount)
{
	this->amount = this->amount / amount;
	return *this;
}

istream &operator>>(istream &is, Money &money) {
	is >> money.amount;
	return is;
};
ostream &operator<<(ostream &os, Money& money)
{
	os << "Amount: " << right << fixed << setw(7) << setprecision(3) << money.amount;
	return os;
}