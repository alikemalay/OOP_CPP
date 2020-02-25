#include "OtomobileCompany.h"

OtomobileCompany::OtomobileCompany(string name, int foundationYear, int numberOfTradingCountry):International(name,foundationYear,numberOfTradingCountry)
{
}

void OtomobileCompany::BuildOtomobile()
{
	cout << "Build otomobile " << endl;
}

void OtomobileCompany::BuildTruck()
{
	cout << "Build truck" << endl;
}
