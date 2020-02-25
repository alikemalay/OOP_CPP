#pragma once
#include <iostream>
#include <string>
#include "International.h"
using namespace std;
class AirPlaneCompany :public International {
public:
	AirPlaneCompany(string name, int foundationYear, int numberOfTradingCountry);
	void CreatePassengerAirPlane();
	void CreateCargoAirPlane();
	void CreateFighterAirPlane();
};
