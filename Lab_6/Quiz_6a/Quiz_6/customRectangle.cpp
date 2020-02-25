#include <sstream>
#include "customRectangle.h"
#include "shapeTwoD.h"

customRectangle::customRectangle(const string & color, const bool & visibility, double centerOfMass[2], double width, double height) : shapeTwoD (color,visibility,centerOfMass)
{
	this->width = width;
	this->height = height;
}

customRectangle::~customRectangle()
{
}

double customRectangle::CalculateSurfaceArea()
{
	return width * height;
}

string customRectangle::GetShapeDiscription()
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
	ShapeDiscription << "Shape Type : Rectangle \nDimension : 2D \n"
		"Color : " << m_color << " \nVisibility : " << boolStr << " \nCenter Of Mass : " << 
		"[1] : " << centerOfMass[0] <<"\t"<< "[2] : "<< centerOfMass[1] <<"\n" <<
		"Area : " << CalculateSurfaceArea() << "\n";
	return ShapeDiscription.str();
}
