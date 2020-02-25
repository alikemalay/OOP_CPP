#pragma once
#include <iostream>
#include <string>
#include "Company.h"
using namespace std;
class International :public Company {
protected:
	int m_numberOfTradingCountry;
public:
	International(string name, int foundationYear,int m_numberOfTradingCountry);
	void orderTaxPaymentForAllSubCompaies();
};