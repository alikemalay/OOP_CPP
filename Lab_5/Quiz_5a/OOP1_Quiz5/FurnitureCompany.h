#pragma once
#include <iostream>
#include <string>
#include "National.h"
using namespace std;
class FurnitureCompany :public National {
public:
	FurnitureCompany(string name, int foundationYear, string mCountry);
	void FabricateTable();
	void FabricateSeat();
};
