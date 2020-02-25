#include "National.h"

National::National(string name, int foundationYear, string m_country):Company(name,foundationYear)
{
	this->m_country = m_country;
}

void National::payTax()
{
	cout << "Pay tax " << this->m_country << endl;
}
