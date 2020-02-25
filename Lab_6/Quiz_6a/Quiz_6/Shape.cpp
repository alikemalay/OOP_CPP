#include "Shape.h"

Shape::Shape(const string& m_color, const bool& m_visibility)
{
	this->m_color = m_color;
	this->m_visibility = m_visibility;
}

Shape::~Shape()
{
}

string Shape::getColor()
{
	return this->m_color;
}

void Shape::setColor(string color)
{
	this->m_color = color;
}

bool Shape::getVisibility()
{
	return this->m_visibility;
}

void Shape::setVisibility(bool visibility)
{
	this->m_visibility = visibility;
}
