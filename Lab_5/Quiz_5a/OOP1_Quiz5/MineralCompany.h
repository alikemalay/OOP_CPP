#pragma once
#include <iostream>
#include <string>
#include "National.h"
using namespace std;
class MineralCompany :public National{
public:
	MineralCompany(string name, int foundationYear, string mCountry);
	void SearchGold();
	void SearchCoal();
}; 
