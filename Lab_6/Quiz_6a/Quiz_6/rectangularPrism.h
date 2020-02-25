#pragma once

#include "shapeThreeD.h"

#include <iostream>

using namespace std;
/**
* \brief							shapeThreeD sinifindan tureyen rectangularPrism sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class rectangularPrism : public shapeThreeD {
private:
	/**
	* \brief						Dikdortgenler prizmasinin genisligini tutan degisken.
	*/
	double width;
	/**
	* \brief						Dikdortgenler prizmasinin yuksekligini tutan degisken.
	*/
	double height;
	/**
	* \brief						Dikdortgenler prizmasinin derinligini tutan degisken.
	*/
	double depth;
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param color					Dikd. prizm. renginin tanimlandigi parametre.
	* \param visibility				Dikd. prizm. gorunurlugunun tanimlandigi parametre.
	* \param centerOfMass			Dikd. prizm. kutle merkezinin tanimlandigi parametre.
	* \param width					Dikd. prizm. genisliginin tanimlandigi parametre.
	* \param height					Dikd. prizm. yuksekliginin tanimlandigi parametre.
	* \param depth					Dikd. prizm. derinliginin tanimlandigi parametre.
	*/
	rectangularPrism(string color,bool visibility, double centerOfMass[3],double width, double height, double depth);
	/**
	* \brief						Yikici fonksiyon.
	*/
	rectangularPrism();
	/**
	* \brief						Dikd. prizm. yuzey alanini hesaplayan fonksiyon.
	*/
	double CalculateSurfaceArea();
	/**
	* \brief						Dikd. prizm. bilgilerini veren fonksiyon.
	*/
	string GetShapeDiscription();
};