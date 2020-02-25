#pragma once
#include <iostream>

using namespace std;

/** \brief							Bir money sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class Money
{/**
	* \brief	>> operatoru ile money nesnesine veri girisleri yapilir. 
	*/
	friend istream &operator>>(istream &is, Money &money);
	/**
	* \brief	<< operatoru ile money nesnesinin verileri yazdirilir.
	*/
	friend ostream &operator<<(ostream &os, Money &money);
	/**
	* \brief	para miktarinin tutuldugu degisken.
	*/
	double amount;
public:
	/**
	* \brief						Varsayilan yapici fonksiyonumuz.
	*/
	Money();
	/**
	* \brief						Varsayilan yikici fonksiyonumuz.
	*/
	~Money();
	/**
	* \brief						Amount'u elde etmeye yarayan fonksiyon.
	*/
	double getAmount();
	/**
	* \brief						Amount'u duzenlemeye yarayan fonksiyon.
	* \param amount					Duzenlenecek amount degiskeninin tanimlandigi parametre.
	*/
	void setAmount(int amount);
	/**
	* \brief						Nesneler arasinda toplama yapar.
	* \param money					Toplanilacak nesnenin tanimlandigi parametre.
	*/
	Money &operator+(const Money& money);
	/**
	* \brief						Nesneler arasinda uzerine toplama yapar.
	* \param money					Toplanilacak nesnenin tanimlandigi parametre.
	*/
	Money &operator+=(const Money &money);
	/**
	* \brief						Nesne ile bir sabit degeri toplar.
	* \param amount					Toplanilacak sabit degerin tanimlandigi parametre.
	*/
	Money &operator+(double amount);
	/**
	* \brief						Nesne ile bir sabit degeri uzerine toplar .
	* \param amount					Toplanilacak sabit degerin tanimlandigi parametre.
	*/
	Money &operator+=(double amount);
	
	/**
	* \brief						Nesneler arasinda cikarma yapar.
	* \param money					Cikarilacak nesnenin tanimlandigi parametre.
	*/
	Money &operator-(const Money& money);
	/**
	* \brief						Nesneler arasinda uzerine cikarma yapar.
	* \param money					Cikarilacak nesnenin tanimlandigi parametre.
	*/
	Money &operator-=(const Money &money);
	/**
	* \brief						Nesne ile bir sabit degeri cikarir.
	* \param amount					Cikarilacak sabit degerin tanimlandigi parametre.
	*/
	Money &operator-(double amount);
	/**
	* \brief						Nesne ile bir sabit degerin farkini uzerine yazar.
	* \param amount					Cikarilacak sabit degerin tanimlandigi parametre.
	*/
	Money &operator-=(double amount);
	
	
	/**
	* \brief						Nesneler arasinda carpma yapar.
	* \param money					Carpilacak nesnenin tanimlandigi parametre.
	*/
	Money &operator*(const Money& money);
	/**
	* \brief						Nesneler arasinda uzerine carpma yapar.
	* \param money					Carpilacak nesnenin tanimlandigi parametre.
	*/
	Money &operator*=(const Money &money);
	/**
	* \brief						Nesne ile bir sabit degeri carpar.
	* \param amount					Carpilacak sabit degerin tanimlandigi parametre.
	*/
	Money &operator*(double amount);
	/**
	* \brief						Nesne ile bir sabit degeri uzerine carpar.
	* \param amount					Carpilacak sabit degerin tanimlandigi parametre.
	*/
	Money &operator*=(double amount);
	
	
	
	/**
	* \brief						Nesneler arasinda bolme yapar.
	* \param money					Bolunecek nesnenin tanimlandigi parametre.
	*/
	Money &operator/(const Money& money);
	/**
	* \brief						Nesneler arasinda uzerine bolme yapar.
	* \param money					Bolunecek nesnenin tanimlandigi parametre.
	*/
	Money &operator/=(const Money &money);
	/**
	* \brief						Nesne ile bir sabit degeri boler.
	* \param amount					Bolunecek sabit degerin tanimlandigi parametre.
	*/
	Money &operator/(double amount);
	/**
	* \brief						Nesne ile bir sabit degerin bolumunu uzerine yazar.
	* \param amount					Bolunecek sabit degerin tanimlandigi parametre.
	*/
	Money &operator/=(double amount);
};

