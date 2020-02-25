#pragma once
#include <iostream>
#include "FootballPlayer.h"
class MiddleFielderPlayer :public FootballPlayer {
private:
	/**
	* \brief						Assist miktarini tutan degisken.
	*/
	int assistCount;
	/**
	* \brief						Assist basina odemeyi tutan degisken.
	*/
	double paymentPerAssist;
public:
	/**
	* \brief						Yapici fonksiyonumuz isim, yas, yillik odeme ve assist basina odeme degerleri ile kullanilir.
	* \param name					MiddlePlayer nesnesinin, isminin tanimlandigi parametre.
	* \param age					MiddlePlayer nesnesinin, yasinin tanimlandigi parametre.
	* \param paymentPerYear			MiddlePlayer nesnesinin, yillik odemesinin tanimlandigi parametre.
	* \param paymentPerAssist		MiddlePlayer nesnesinin, gol basina odemesinin tanimlandigi parametre.
	*/
	MiddleFielderPlayer(const string& name, int age, double paymentPerYear, double paymentPerAssist);
	/**
	* \brief						Yikici fonksiyonumuz.
	*/
	~MiddleFielderPlayer();
	/**
	* \brief						Yillik odemeyi hesaplayan fonksiyon.
	* \return						Hesaplanan yillik odemeyi dondurur.
	*/
	double CalculatePaymentForThisYear();
	/**
	* \brief						Assist sayisini elde etmeye yarayan fonksiyon.
	* \return						Assist sayisini dondurur.
	*/
	int getAssistCount();
	/**
	* \brief						Assist sayisini duzenlemeye yarayan fonksiyon.
	* \param assistCount			Duzenlenecek assist sayisinin tanimlandigi parametre.
	*/
	void setAssistCount(int assistCount);
	/**
	* \brief						Top atmayi deneyen fonksiyon.
	* \param player					Top atilacak kisinin tanimlandigi parametre.
	*/
	void TryThroughBall(const Player* player);
	/**
	* \brief						Baski yapmaya yarayan fonksiyon.
	*/
	void Press();
	
};