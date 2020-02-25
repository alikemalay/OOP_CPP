#pragma once
#include <iostream>
#include "FootballPlayer.h"
class GoalKeeper :public FootballPlayer {
public:
	/**
	* \brief						Yillik odemeyi hesaplayan fonksiyon.
	* \return						Hesaplanan odemeyi dondurur.
	*/
	double CalculatePaymentForThisYear();
	/**
	* \brief						Topu ucarak yakalamayi saglayan fonksiyon.
	*/
	void FlyAndTryCatch();
	/**
	* \brief						Yapici fonksiyonumuz isim, yas ve yillik odeme degerleri ile kullanilir.
	* \param name					GoalKeeper nesnesinin, isminin tanimlandigi parametre.
	* \param age					GoalKeeper nesnesinin, yasinin tanimlandigi parametre.
	* \param paymentPerYear			GoalKeeper nesnesinin, yillik odemesinin tanimlandigi parametre.
	*/
	GoalKeeper(const string& name, int age, double paymentPerYear);
	/**
	* \brief						Yikici fonksiyonumuz.
	*/
	~GoalKeeper();
};