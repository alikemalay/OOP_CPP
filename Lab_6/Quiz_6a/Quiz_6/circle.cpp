#include <sstream>
#include "circle.h"
#include "shapeTwoD.h"

circle::circle(string color, bool visibility, double centerOfMass[2], double radius):shapeTwoD(color,visibility,centerOfMass)
{
	this->radius = radius;
}

circle::~circle()
{
}

double circle::CalculateSurfaceArea()
{
	return radius;
}

string circle::GetShapeDiscription()
{
	std::ostringstream ShapeDiscription;
	string boolStr;
	if (this->m_visibility)
	{
		boolStr = "true";
	}
	else {
		boolStr = "false";
	}
	ShapeDiscription << "Shape Type : Circle \nDimension : 2D \n"
		"Color : " << m_color << " \nVisibility : " << boolStr << " \nCenter Of Mass : " <<
		"[1] : " << centerOfMass[0] << "\t" << "[2] : " << centerOfMass[1] << "\n" <<
		"Area : " << CalculateSurfaceArea() << "\n";
	return ShapeDiscription.str();
}
