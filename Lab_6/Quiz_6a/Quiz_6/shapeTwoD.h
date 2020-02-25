#pragma once

#include "Shape.h"

#include <iostream>

using namespace std;
/**
* \brief							Shape sinifindan tureyen shapeTwoD sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class shapeTwoD : public Shape {
protected:
	/**
	* \brief						Sekil kutle merkezini tutan 2 boyutlu dizi.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	double centerOfMass[2];
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param color					Sekil renginin tanimlandigi parametre.
	* \param visibility				Sekil gorunurlugunun tanimlandigi parametre.
	* \param centerOfMass			Sekil kutle merkezinin tanimlandigi parametre.
	*/
	shapeTwoD(const string& color, const bool& visibility, double centerOfMass[2]);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~shapeTwoD();
	/**
	* \brief						Sekilin yuzey alanini hesaplayan fonksiyon.
	* \details						Bu siniftan tureyen siniflardada bu fonksiyonun zorunlu olmasi amaciyla saf sanal(pure virtual) olarak tanimlanmistir.
	*/
	virtual double CalculateSurfaceArea() = 0;
	/**
	* \brief						Sekil bilgilerini veren fonksiyon.
	* \details						Bu siniftan tureyen siniflardada bu fonksiyonun zorunlu olmasi amaciyla saf sanal(pure virtual) olarak tanimlanmistir.
	*/
	virtual string GetShapeDiscription() = 0;
};