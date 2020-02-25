#pragma once
#include <iostream>
#include "FootballPlayer.h"
class DefensivePlayer :public FootballPlayer {
private:
	/**
	* \brief						Mac basina yapilan odemeyi tutan degisken.
	*/
	double paymentPerMatch;
	/**
	* \brief						Oynanan mac sayisini tutan degisken.
	*/
	int playedMatchCount;
public:
	/**
	* \brief						Yapici fonksiyonumuz isim, yas, yillik odeme ve mac basina odeme degerleri ile kullanilir.
	* \param name					DefensivePlayer nesnesinin, isminin tanimlandigi parametre.
	* \param age					DefensivePlayer nesnesinin, yasinin tanimlandigi parametre.
	* \param paymentPerYear			DefensivePlayer nesnesinin, yillik odemesinin tanimlandigi parametre.
	* \param paymentPerMatch		DefensivePlayer nesnesinin, mac basina odemesinin tanimlandigi parametre.
	*/
	DefensivePlayer(const string& name, int age, double paymentPerYear, double paymentPerMatch);
	/**
	* \brief						Yikici fonksiyonumuz.
	*/
	~DefensivePlayer();
	/**
	* \brief						Yillik odemeyi hesaplayan fonksiyon.
	* \return						Hesaplanan odemeyi dondurur.
	*/
	double CalculatePaymentForThisYear();
	/**
	* \brief						Defans yapmayi saglayan fonksiyon.
	*/
	void Defense();
	/**
	* \brief						Engel yapmayi saglayan fonksiyon.
	* \param player					Kime karsi engel yapilacaginin tanimlandigi parametre.
	*/
	void TripUp(const Player* player);
	/**
	* \brief						Oynanan mac sayisini elde etmeye yarayan fonksiyon.
	* \return						Oynanan mac sayisini dondurur.
	*/
	int getPlayedMatchCount();
	/**
	* \brief						Oynanan mac sayisini duzenlemeye yarayan fonksiyon.
	* \param playedMatchCount		Oynanan mac sayisinin duzenlendigi parametre.
	*/
	void setPlayedMatchCount(int playedMatchCount);
};