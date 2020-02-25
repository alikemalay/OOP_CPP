#include "AirPlaneCompany.h"

AirPlaneCompany::AirPlaneCompany(string name, int foundationYear, int numberOfTradingCountry):International(name,foundationYear,numberOfTradingCountry)
{
}

void AirPlaneCompany::CreatePassengerAirPlane()
{
	cout << "Created passenger air plane " << endl;
}

void AirPlaneCompany::CreateCargoAirPlane()
{
	cout << "Created cargo air plane " << endl;
}

void AirPlaneCompany::CreateFighterAirPlane()
{
	cout << "Created fighter air plane " << endl;
}
