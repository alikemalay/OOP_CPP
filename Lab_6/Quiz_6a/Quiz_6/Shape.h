#pragma once
#include <iostream>
#include <string>
using namespace std;
/**
* \brief							Soyut olarak tanimlanan Shape sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class Shape {
protected:
	/**
	* \brief						Sekil rengini tutan degisken.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	string m_color;
	/**
	* \brief						Sekil gorunurlugunu tutan degisken.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	bool m_visibility;
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param m_color				Sekil renginin tanimlandigi parametre.
	* \param m_visibility			Sekil gorunurlugunun tanimlandigi parametre.
	*/
	Shape(const string& m_color, const bool& m_visibility);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~Shape();
	/**
	* \brief						Sekil rengi bilgisini elde etmeye yarayan fonksiyon.
	* \details						Poliformik yapiya uygun olmasi amaciyla sanal(virtual) kullanilmistir.
	*/
	virtual string getColor();
	/**
	* \brief						Sekil rengini duzenlemeye yarayan fonksiyon.
	* \param color					Sekil renginin tanimlandigi parametre.
	* \details						Poliformik yapiya uygun olmasi amaciyla sanal(virtual) kullanilmistir.
	*/
	virtual void setColor(string color);
	/**
	* \brief						Sekil gorunurlugu bilgisini elde etmeye yarayan fonksiyon.
	* \details						Poliformik yapiya uygun olmasi amaciyla sanal(virtual) kullanilmistir.
	*/
	virtual bool getVisibility();
	/**
	* \brief						Sekil gorunurlugunu duzenlemeye yarayan fonksiyon.
	* \param visibility				Sekil gorunurlugunun tanimlandigi parametre.
	* \details						Poliformik yapiya uygun olmasi amaciyla sanal(virtual) kullanilmistir.
	*/
	virtual void setVisibility(bool visibility);
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