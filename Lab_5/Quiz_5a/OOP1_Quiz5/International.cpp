#include "International.h"

International::International(string name, int foundationYear, int m_numberOfTradingCountry):Company(name,foundationYear)
{
	this->m_foundationYear = m_foundationYear;
}

void International::orderTaxPaymentForAllSubCompaies()
{
	cout << "Order Tax Payment For All Sub Companies" << endl;
}
