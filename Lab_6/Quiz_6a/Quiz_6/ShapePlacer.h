#pragma once

#include <vector>
#include "Shape.h"
/**
* \brief							Shape sinifi ile aggregation iliskisine sahip ShapePlacer sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class ShapePlacer {
private:
	/**
	* \brief						Sekil listesini tutan vector sablonu.
	*/
	vector<Shape*> m_shapeList;
public:
	/**
	* \brief						Listeye sekil eklemeye yarayan fonksiyon.
	* \param newShape				Eklenecek sekilin tanimlandigi parametre.
	*/
	void AddNewShape(Shape* newShape);
	/**
	* \brief						Listedeki sekillerin bilgilerini gosteren fonksiyon.
	*/
	void VisualizeAllShapes();
	/**
	* \brief						Girilen alana en uygun sekilin bilgilerini gosteren fonksiyon.
	* \param area					Alan bilgisinin tanimlandigi parametre.
	*/
	Shape* FindTheMostProperShape(double area);
};