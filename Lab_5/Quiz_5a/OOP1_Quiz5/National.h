#pragma once
#include <iostream>
#include <string>
#include "Company.h"
using namespace std;
class National:public Company {
protected:
	string m_country;
public:
	National(string name, int foundationYear, string m_country);
	void payTax();
};