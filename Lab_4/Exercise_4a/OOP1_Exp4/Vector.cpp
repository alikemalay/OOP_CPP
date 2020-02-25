#include <iostream>
#include <iomanip>

using namespace std;

#include "Vector.h"

Vector::Vector(int dimension) {
		
	m_dimension = (dimension > 0 ? dimension : 3);
	m_data = new double[m_dimension];
	for (int i = 0; i < m_dimension; i++)
	m_data[i] = 0;
};

Vector::Vector(double data[], int dimension) {
	m_dimension = dimension;
	m_data = new double[m_dimension];
	for (int i = 0; i < m_dimension; i++)
	m_data[i] = data[i];
};

Vector::Vector(const Vector &copyVector) {
	m_dimension = (copyVector.m_dimension > 0 ? copyVector.m_dimension : 3);
	m_data = new double[m_dimension];

	for (int i = 0; i < copyVector.m_dimension; i++)
		m_data[i] = copyVector.m_data[i];
};

Vector::~Vector() {
	delete[]m_data;
};

int Vector::getDimension() {
	return m_dimension;
};
const Vector &Vector::operator=(const Vector &copyVector) {
	for (int i = 0; i < copyVector.m_dimension; i++) {
		m_data[i] = copyVector.m_data[i];
	};
	return *this;
};
bool Vector::operator==(const Vector &secondOperand) {
	bool flag=false;
	for (int i = 0; i < secondOperand.m_dimension; i++) {
		if (m_data[i] == secondOperand.m_data[i])
		{
			flag = true;
		}
		else {
			flag = false;
			break;
		}
	};
	return flag;
};
bool Vector::operator!=(const Vector &secondOperand) {
	bool flag = false;
	for (int i = 0; i < secondOperand.m_dimension; i++) {
		if (m_data[i] == secondOperand.m_data[i])
		{
			flag = true;
		}
		else {
			flag = false;
			break;
		}
	};
	return !flag;
};
bool Vector::operator<(const Vector &secondOperand) {
	double d1 = 0.0, d2 = 0.0;
	bool flag=false;

	for (int i = 0; i < m_dimension; i++) {
		d1 += m_data[i];
		d2 += secondOperand.m_data[i];
	};

	if (d1 < d2) {
		flag = true;
	}
	else
	{
		flag = false;
	}
	return flag;
};
bool Vector::operator<=(const Vector &secondOperand) {
	double d1 = 0.0, d2 = 0.0;
	bool flag = false;

	for (int i = 0; i < m_dimension; i++) {
		d1 += m_data[i];
		d2 += secondOperand.m_data[i];
	};

	if (d1 <= d2) {
		flag = true;
	}
	else
	{
		flag = false;
	}
	return flag;
};
bool Vector::operator>(const Vector &secondOperand) {
	double d1 = 0.0, d2 = 0.0;
	bool flag = false;

	for (int i = 0; i < m_dimension; i++) {
		d1 += m_data[i];
		d2 += secondOperand.m_data[i];
	};

	if (d1 > d2) {
		flag = true;
	}
	else
	{
		flag = false;
	}
	return flag;
};
bool Vector::operator>=(const Vector &secondOperand) {
	double d1 = 0.0, d2 = 0.0;
	bool flag = false;

	for (int i = 0; i < m_dimension; i++) {
		d1 += m_data[i];
		d2 += secondOperand.m_data[i];
	};

	if (d1 >= d2) {
		flag = true;
	}
	else
	{
		flag = false;
	}
	return flag;
};
double &Vector::operator[](int index) {
	return m_data[index];
}; 
const double &Vector::operator[](int index) const
{ 
	return m_data[index];
};
Vector Vector::operator+(const Vector &secondOperand) {
	Vector tmp;
	if (m_dimension == secondOperand.m_dimension)
	{
		for (int i = 0; i < m_dimension; i++)
		{
			tmp.m_data[i] = m_data[i] + secondOperand.m_data[i];
		}
	}
	return tmp;
};
Vector &Vector::operator+=(const Vector &secondOperand) {
	if (m_dimension == secondOperand.m_dimension)
	{
		for (int i = 0; i < m_dimension; i++)
		{
			 m_data[i] += secondOperand.m_data[i];
		}
	}
	
	return *this;
};
Vector Vector::operator-(const Vector &secondOperand) {
	Vector tmp;
	if (m_dimension == secondOperand.m_dimension)
	{
		for (int i = 0; i < m_dimension; i++)
		{
			tmp.m_data[i] = m_data[i] - secondOperand.m_data[i];
		}
	}
	return tmp;
};
Vector &Vector::operator-=(const Vector &secondOperand) {
	if (m_dimension == secondOperand.m_dimension)
	{
		for (int i = 0; i < m_dimension; i++)
		{
			m_data[i] -= secondOperand.m_data[i];
		}
	}

	return *this;
};
double Vector::operator*(const Vector &secondOperand) {
	double sum = 0.0;
	if (m_dimension == secondOperand.m_dimension)
	{
		for (int i = 0; i < m_dimension; i++)
		{
			sum += m_data[i] * secondOperand.m_data[i];
		}
	}
	return sum;
};
Vector Vector::operator*(const double multiplier) {
	Vector tmp;
	for (int i = 0; i < m_dimension; i++)
	{
		tmp.m_data[i] = m_data[i] * multiplier;
	}
	return tmp;
};
Vector Vector::operator*=(const double multiplier) {
	for (int i = 0; i < m_dimension; i++)
	{
		m_data[i] = m_data[i]*multiplier;
	}
	return *this;
};
Vector Vector::operator/(const Vector &secondOperand) {
	Vector tmp;
	if (m_dimension == secondOperand.m_dimension)
	{
		for (int i = 0; i < m_dimension; i++)
		{
			tmp.m_data[i] = m_data[i] / secondOperand.m_data[i];
		}
	}
	return tmp;
};
Vector &Vector::operator/=(const Vector &secondOperand) {
	if (m_dimension == secondOperand.m_dimension)
	{
		for (int i = 0; i < m_dimension; i++)
		{
			m_data[i] = m_data[i] / secondOperand.m_data[i];
		}
	}
	return *this;
};
Vector Vector::operator/(const double divider) {
	Vector tmp;
	for (int i = 0; i < m_dimension; i++)
		{
			tmp.m_data[i] = m_data[i] / divider;
		}
	return tmp;
};
Vector &Vector::operator/=(const double divider) {
	for (int i = 0; i < m_dimension; i++)
	{
		m_data[i] = m_data[i] / divider;
	}
	return *this;
};
double Vector::operator()() {
	double mag=0.0;
	for (int i = 0; i < m_dimension; i++)
	{
		mag += pow(m_data[i], 2);
	}
	return sqrt(mag);
};
Vector &Vector::operator!() {
	for (int i = 0; i < m_dimension; i++)
	{
		m_data[i] = m_data[i] * (-1);
	}
	return *this;
};

istream &operator>>(istream &is, Vector &vector) {
	for (int i = 0; i < vector.m_dimension; i++)
		is >> vector.m_data[i] ;
	
	return is;
};
ostream& operator<<(ostream& os, const Vector& vector)
{
	int i=0; 
	os << '[' ;
	for (int i = 0; i < vector.m_dimension; i++) {
		os << right << fixed << setw(7) << setprecision(3) << vector.m_data[i];
		if (i != (vector.m_dimension - 1))
		{
			os << ",";
		}
	};
	os << ']';
	return os;
}
