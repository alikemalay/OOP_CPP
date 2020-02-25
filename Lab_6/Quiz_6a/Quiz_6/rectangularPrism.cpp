#include <sstream>
#include "rectangularPrism.h"
#include "shapeThreeD.h"
rectangularPrism::rectangularPrism(string color, bool visibility, double centerOfMass[3],double width, double height, double depth):shapeThreeD(color,visibility,centerOfMass)
{
	this->width = width;
	this->height = height;
	this->depth = depth;
}

rectangularPrism::rectangularPrism()
{
}

double rectangularPrism::CalculateSurfaceArea()
{
	return width * height * depth;
}

string rectangularPrism::GetShapeDiscription()
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
	ShapeDiscription << "Shape Type : Rectangle \nDimension : 3D \n"
		"Color : " << m_color << " \nVisibility : " << boolStr << " \nCenter Of Mass : " <<
		"[1] : " << centerOfMass[0] << "\t" << "[2] : " << centerOfMass[1] << "\t" <<"[3] : "<< centerOfMass[2] << "\n" <<
		"Area : " << CalculateSurfaceArea() << "\n";
	return ShapeDiscription.str();
}
