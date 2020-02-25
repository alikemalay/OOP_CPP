#pragma once

#include "Shape.h"

#include <iostream>

using namespace std;
/**
* \brief							Shape sinifindan tureyen shapeThreeD sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class shapeThreeD : public Shape {
protected:
	/**
	* \brief						Sekil kutle merkezini tutan 3 boyutlu dizi.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	double centerOfMass[3];
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param color					Sekil renginin tanimlandigi parametre.
	* \param visibility				Sekil gorunurlugunun tanimlandigi parametre.
	* \param centerOfMass			Sekil kutle merkezinin tanimlandigi parametre.
	*/
	shapeThreeD(const string& color, const bool& visibility, double centerOfMass[3]);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~shapeThreeD();
	/**
	* \brief						Sekilin yuzey alanini hesaplayan fonksiyon.
	* \details						Bu siniftan tureyen siniflardada bu fonksiyonun zorunlu olmasi amaciyla saf sanal(pure virtual) olarak tanimlanmistir.
	*/
	virtual double CalculateSurfaceArea()=0;
	/**
	* \brief						Sekil bilgilerini veren fonksiyon.
	* \details						Bu siniftan tureyen siniflardada bu fonksiyonun zorunlu olmasi amaciyla saf sanal(pure virtual) olarak tanimlanmistir.
	*/
	virtual string GetShapeDiscription()=0;
};