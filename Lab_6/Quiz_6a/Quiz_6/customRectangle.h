#pragma once

#include "shapeTwoD.h"

#include <iostream>

using namespace std;
/**
* \brief							shapeTwoD sinifindan tureyen customRectangle sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class customRectangle : public shapeTwoD {
private:
	/**
	* \brief						Dikdortgen genisligini tutan degisken.
	*/
	double width;
	/**
	* \brief						Dikdortgen yuksekligini tutan degisken.
	*/
	double height;
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param color					Dikdortgen renginin tanimlandigi parametre.
	* \param visibility				Dikdortgen gorunurlugunun tanimlandigi parametre.
	* \param centerOfMass			Dikdortgen kutle merkezinin tanimlandigi parametre.
	* \param width					Dikdortgen genisliginin tanimlandigi parametre.
	* \param height					Dikdortgen yuksekliginin tanimlandigi parametre.
	*/
	customRectangle(const string& color, const bool& visibility, double centerOfMass[2],double width, double height);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~customRectangle();
	/**
	* \brief						Dikdortgen yuzey alanini hesaplayan fonksiyon.
	*/
	double CalculateSurfaceArea();
	/**
	* \brief						Dikdortgen bilgilerini veren fonksiyon.
	*/
	string GetShapeDiscription();
};