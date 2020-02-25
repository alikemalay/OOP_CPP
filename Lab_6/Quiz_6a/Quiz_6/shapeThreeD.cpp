#include "shapeThreeD.h"
#include "Shape.h"
#include <string>
shapeThreeD::shapeThreeD(const string& color, const bool& visibility,double centerOfMass[3]):Shape(color,visibility)
{
	int i;
	for (int i = 0; i < 3; i++) {
		this->centerOfMass[i] = centerOfMass[i];
	}
	
}

shapeThreeD::~shapeThreeD()
{
}

