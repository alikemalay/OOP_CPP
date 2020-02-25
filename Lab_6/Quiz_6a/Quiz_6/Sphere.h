#pragma once

#include "shapeThreeD.h"
#include <iostream>

using namespace std;
/**
* \brief							shapeThreeD sinifindan tureyen Sphere sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class Sphere : public shapeThreeD {
private:
	/**
	* \brief						Kure yaricapini tutan degisken.
	*/
	double radius;
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param color					Kure renginin tanimlandigi parametre.
	* \param visibility				Kure gorunurlugunun tanimlandigi parametre.
	* \param centerOfMass			Kure kutle merkezinin tanimlandigi parametre.
	* \param radius					Kure yaricapinin tanimlandigi parametre.
	*/
	Sphere(string color, bool visibility, double centerOfMass[3],double radius);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~Sphere();
	/**
	* \brief						Kurenin yuzey alanini hesaplayan fonksiyon.
	*/
	double CalculateSurfaceArea();
	/**
	* \brief						Kurenin bilgilerini veren fonksiyon.
	*/
	string GetShapeDiscription();
};