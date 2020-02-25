#include "Company.h"

Company::Company()
{
}

Company::Company(const string & name, int foundationYear)
{
	this->m_name = name;
	this->m_foundationYear = foundationYear;
}

string Company::getName()
{
	return this->m_name;
}

void Company::setName(string& name)
{
	this->m_name = name;
}

int Company::getFoundation()
{
	return this->m_foundationYear;
}

void Company::setFoundation(int foundationYear)
{
	this->m_foundationYear=foundationYear;
}
