#include "MineralCompany.h"

MineralCompany::MineralCompany(string name, int foundationYear, string mCountry):National(name,foundationYear,mCountry)
{
}

void MineralCompany::SearchGold()
{
	cout << "Search Gold" << endl;
}

void MineralCompany::SearchCoal()
{
	cout << "Search Coal" << endl;
}
