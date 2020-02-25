#include "shapeTwoD.h"
#include "Shape.h"

shapeTwoD::shapeTwoD(const string & color, const bool & visibility, double centerOfMass[2]) : Shape(color, visibility)
{
	int i;
	for (int i = 0; i < 2; i++) {
		this->centerOfMass[i] = centerOfMass[i];
	}
}

shapeTwoD::~shapeTwoD()
{
}


