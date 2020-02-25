#include <iostream>
#include "shapeTwoD.h"


using namespace std;
/**
* \brief							shapeTwoD sinifindan tureyen circle sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class circle : public shapeTwoD {
private:
	/**
	* \brief						Daire yaricapini tutan degisken.
	*/
	double radius;
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param color					Daire renginin tanimlandigi parametre.
	* \param visibility				Daire gorunurlugunun tanimlandigi parametre.
	* \param centerOfMass			Daire kutle merkezinin tanimlandigi parametre.
	* \param radius					Daire yaricapinin tanimlandigi parametre.
	*/
	circle(string color,bool visibility,double centerOfMass[2],double radius);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~circle();
	/**
	* \brief						Dairenin yuzey alanini hesaplayan fonksiyon.
	*/
	double CalculateSurfaceArea();
	/**
	* \brief						Dairenin bilgilerini veren fonksiyon.
	*/
	string GetShapeDiscription();
};