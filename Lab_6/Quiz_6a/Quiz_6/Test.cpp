#include <iostream>
#include <string>
#include "Shape.h"
#include "shapeTwoD.h"
#include "circle.h"
#include "customRectangle.h"
#include "shapeThreeD.h"
#include "rectangularPrism.h"
#include "Sphere.h"
#include "ShapePlacer.h"

using namespace std;
/**
* \brief							Yazilan fonksiyonlarin test edildigi ayri test fonksiyonu.
* \author							Ali Kemal AY - 152120151079
*/
int main() {
	
	double d2[2] = { 2.3, 1.1};
	double d3[3] = { 3.1 , 1.7 , 8.1 };

	Shape* sCircle = new circle("Red",true,d2,20);
	Shape* sCircleOther = new circle("Dark", false, d2, 10);
	Shape* sRectangle = new customRectangle("Blue",false,d2,5.2,3.5);
	Shape* sSphere = new Sphere("Orange", true, d3, 7.7);
	Shape* sSphereOther = new Sphere("Purple", true, d3, 2.7);
	Shape* sRectPrism = new rectangularPrism("Green", true, d3, 4.1, 2.1, 3.1);
		
	ShapePlacer shapePlacer;

	shapePlacer.AddNewShape(sCircle);
	shapePlacer.AddNewShape(sCircleOther);
	shapePlacer.AddNewShape(sRectangle);
	shapePlacer.AddNewShape(sSphere);
	shapePlacer.AddNewShape(sSphereOther);
	shapePlacer.AddNewShape(sRectPrism);
	
	shapePlacer.VisualizeAllShapes();

	cout << "+-------------------------+" << endl
		<< "+  THE MOST PROPER SHAPE  +" << endl
		<< "+-------------------------+" << endl << endl
		<< "PROPER VALUE(18)" << endl << endl;
	cout << shapePlacer.FindTheMostProperShape(18)->GetShapeDiscription() << endl;

	system("pause");
};