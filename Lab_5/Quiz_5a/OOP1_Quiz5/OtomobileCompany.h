#pragma once
#include <iostream>
#include <string>
#include "International.h"
using namespace std;
class OtomobileCompany :public International {
public:
	OtomobileCompany(string name, int foundationYear, int numberOfTradingCountry);
	void BuildOtomobile();
	void BuildTruck();
};
