#include "FurnitureCompany.h"

FurnitureCompany::FurnitureCompany(string name, int foundationYear, string mCountry):National(name,foundationYear,mCountry)
{
}

void FurnitureCompany::FabricateTable()
{
	cout << "Fabricate Table" << endl;
}

void FurnitureCompany::FabricateSeat()
{
	cout << "Fabricate Seat" << endl;
}
