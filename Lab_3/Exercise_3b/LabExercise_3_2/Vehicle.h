/// Vehicle.h

#pragma once
#include <iostream>
using namespace std;

/** \brief							Bir arac sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class Vehicle
{
public:
	/**
	* \brief						Yapici fonksiyonumuzda aracimizin bazi ozelliklerini tanimliyoruz.
	* \param maxPassengerNumber		Aracimizin maksimum alabilecegi yolcu sayisini tanimladigimiz parametre.
	* \param maxSpeed				Aracimizin maksimum yapabilecegi hizi tanimladigimiz parametre.
	*/
	Vehicle(int maxPassengerNumber = 4, double maxSpeed = 180);
	~Vehicle();
	/**
	* \brief						Aracimiza hiz kazandirabilecegimiz fonksiyon.
	* \param amount					Kazandirabilecegimiz hiz miktarini tanimladigimiz parametre.
	* \return						Hiz yapip yapmadigina dair 1 yada 0 degeri doner.
	*/
	bool Accelarate(double amount);
	/**
	* \brief						Aracimizin hizini azaltabilecegimiz fonksiyon.
	* \param amount					Azaltacagimiz hiz miktarini tanimladigimiz parametre.
	* \return						Hizin azalip azalmadigina dair 1 yada 0 degeri doner.
	*/
	bool Decelerate(double amount);
	/**
	* \brief						Aracimizin calistiracagimiz fonksiyon.
	*/
	void StartEngine();
	/**
	* \brief						Aracimizin durduracagimiz fonksiyon.
	*/
	void StopEngine();
	/**
	* \brief						Aracimiza yolcu bindirecegimiz fonksiyon.
	* \param passengerNumber		Binecek yolcu sayisini tanimladigimiz parametre.
	* \return						Yolcunun binip binmedigine dair 1 yada 0 degeri doner.
	*/
	bool GetIn(int passengerNumber);
	/**
	* \brief						Aracimizdan yolcu indirecegimiz fonksiyon.
	* \param passengerNumber		Inecek yolcu sayisini tanimladigimiz parametre.
	* \return						Yolcunun inip inmedigine dair 1 yada 0 degeri doner.
	*/
	bool GetOut(int passengerNumber);
	/**
	* \brief						Aracimizin anlik hizini verecek fonksiyon.
	* \return						Aracimizin hizini dondurur.
	*/
	double getCurrentSpeed();
	/**
	* \brief						Aracimizin anlik yolcu sayisini verecek fonksiyon.
	* \return						Aracimizin yolcu sayisini dondurur.
	*/
	double getCurrentPassengerNumber();
	/**
	* \brief						Aracimizin calisip calismadigina dair bilgi veren fonksiyon.
	* \return						Eger aktifse 1 degeri degilse 0 degerini dondurur.
	*/
	bool IsEngineStarted();
private:
	/**
	* \brief						Aracimizin aktif olup-olmadigini tutan bool degisken.
	*/
	bool engineStarted;
	/**
	* \brief						Aracimizin gecerli hizini tutan double degisken.
	*/
	double currentSpeed;
	/**
	* \brief						Aracimizin gecerli yolcu sayisini tutan int degisken.
	*/
	int currentPassengerNumber;
	/**
	* \brief						Aracimizin maksimum alabilecek yolcu sayisini tutan int degisken.
	*/
	int maxPassengerNumber;
	/**
	* \brief						Aracimizin maksimum yapabilecegi hizi tutan double degisken.
	*/
	double maxSpeed;
};
