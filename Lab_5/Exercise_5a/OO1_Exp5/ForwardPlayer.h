#pragma once
#include <iostream>
#include "FootballPlayer.h"
class ForwardPlayer:public FootballPlayer{
private:
	/**
	* \brief						Gol sayisini tutan degisken.
	*/
	int goalCount;
	/**
	* \brief						Gol basina olan odemeyi tutan degisken.
	*/
	double paymentPerGoal;
public:
	/**
	* \brief						Yillik odemeyi hesaplayan fonksiyon.
	* \return						Hesaplanan yillik odemeyi dondurur.
	*/
	double CalculatePaymentForThisYear();
	/**
	* \brief						Yapici fonksiyonumuz isim, yas, yillik odeme ve gol basina odeme degerleri ile kullanilir.
	* \param name					ForwardPlayer nesnesinin, isminin tanimlandigi parametre.
	* \param age					ForwardPlayer nesnesinin, yasinin tanimlandigi parametre.
	* \param paymentPerYear			ForwardPlayer nesnesinin, yillik odemesinin tanimlandigi parametre.
	* \param paymentPerGoal			ForwardPlayer nesnesinin, gol basina odemesinin tanimlandigi parametre.
	*/
	ForwardPlayer(const string& name, int age,double paymentPerYear, double paymentPerGoal);
	/**
	* \brief						Yikici fonksiyonumuz.
	*/
	~ForwardPlayer();
	/**
	* \brief						Gol sayisini elde etmeye yarayan fonksiyon.
	* \return						Gol sayisini dondurur.
	*/
	int getGoalCount();
	/**
	* \brief						Gol sayisini duzenlemeye yarayan fonksiyon.
	* \param goalCount				Gol sayisini duzenledigimiz sayinin tanimladigi parametre.
	*/
	void setGoalCount(int goalCount);
	/**
	* \brief						Kendini atmayi saglayan fonksiyon.
	*/
	void ThrowYourSelf();
	/**
	* \brief						Top surerek pas atmayi saglayan fonksiyon.
	* \param player					Pas atilacak kisinin tanimlandigi parametre.
	*/
	void TryDribblePast(const Player* player);
};