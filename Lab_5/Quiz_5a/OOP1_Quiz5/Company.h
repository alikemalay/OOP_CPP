#pragma once
#include <iostream>
#include <string>

using namespace std;

class Company {
protected:
	string m_name;
	int m_foundationYear;
public:
	Company();
	Company(const string& name, int foundationYear);
	string getName();
	void setName(string& name);
	int getFoundation();
	void setFoundation(int foundationYear);
};