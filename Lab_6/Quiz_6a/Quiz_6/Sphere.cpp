#include <sstream>
#include "shapeThreeD.h"
#include "Sphere.h"



Sphere::Sphere(string color, bool visibility, double centerOfMass[3], double radius):shapeThreeD(color,visibility,centerOfMass)
{
	this->radius = radius;
}

Sphere::~Sphere()
{
}

double Sphere::CalculateSurfaceArea()
{
	return radius;
}

string Sphere::GetShapeDiscription()
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

	ShapeDiscription << "Shape Type : Sphere \nDimension : 3D \n"
		"Color : " << m_color << " \nVisibility : " << boolStr << " \nCenter Of Mass : " <<
		"[1] : " << centerOfMass[0] << "\t" << "[2] : " << centerOfMass[1] << "\t" <<"[3] : "<< centerOfMass[2] << "\n" <<
		"Area : " << CalculateSurfaceArea() << "\n";
	return ShapeDiscription.str();
}