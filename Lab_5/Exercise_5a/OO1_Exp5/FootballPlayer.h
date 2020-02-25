#pragma once

#include <iostream>
#include "Player.h"
class FootballPlayer:public Player{
protected:
	double paymentPerYear;
public:
	/**
	* \brief						Yapici fonksiyonumuz isim, yas ve yillik odeme degerleri ile kullanilir.
	* \param name					FootballPlayer nesnesinin ismini tanimladigimiz parametre.
	* \param age					FootballPlayer nesnesinin yasini tanimladigimiz parametre.
	* \param paymentPerYear			FootballPlayer nesnesinin yillik odemesini tanimladigimiz parametre.
	*/
	FootballPlayer(const string& name, int age, double paymentPerYear);
	/**
	* \brief						Yikici fonksiyonumuz.
	*/
	~FootballPlayer();
	/**
	* \brief						Yillik odeme miktarini veren fonksiyon.
	* \return						Yillik odeme miktarini dondurur.
	*/
	double getPaymentPerYear();
	/**
	* \brief						Pas atmayi saglayan fonksiyon.
	* \param player					Pas atilacak kisinin tanimlandigi parametre.
	*/
	void Pas(const Player*);
	/**
	* \brief						Yillik odeme miktarini duzenleyebildigimiz fonksiyon.
	* \param paymentPerYear			Yillik odeme miktarini duzenledigimiz parametre.
	*/
	void setPaymentPerYear(double paymentPerYear);
	/**
	* \brief						Sut atmayi saglayan fonksiyon.
	*/
	void Shot();
};