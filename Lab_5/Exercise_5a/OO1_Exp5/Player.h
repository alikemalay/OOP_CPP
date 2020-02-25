#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player{
protected:
	/** \brief						Olusturalacak nesnelerin yas ozelligi, turetilen nesnelerde kullanmilasi amaciyla korumali(protected) tanimlanmistir. 
	*/
	int age;
	/** \brief						Olusturalacak nesnelerin isim ozelligi, turetilen nesnelerde kullanmilasi amaciyla korumali(protected) tanimlanmistir.
	*/
	string name;
	
public:
	/** \brief						Bir enum tipi. Hareket(Move) fonksiyonunda yon belirlemek amaciyla tipler tanimladik.
	*/
	enum Direction {
		EAST, NORTH, NORTH_EAST, NORTH_WEST, SOUTH
		, SOUTH_EAST, SOUTH_WEST, WEST
	};
	/**
	* \brief						Yapici fonksiyonumuz isim ve yas degerleri ile kullanilir.
	* \param name					Player nesnesinin ismini tanimladigimiz parametre.
	* \param age					Player nesnesinin yasini tanimladigimiz parametre.
	*/
	Player(const string& name, int age);
	/**
	* \brief						Yikici fonksiyonumuz.
	*/
	~Player();
	/**
	* \brief						Player nesnesinin yasini donduren fonksiyon.
	* \return						Nesnesinin yasini dondurur.
	*/
	int getAge() const;
	/**
	* \brief						Player nesnesinin ismini donduren fonksiyon.
	* \return						Nesnenin ismini dondurur.
	*/
	const string& getName() const;
	/**
	* \brief						Girilen parametredeki yone dogru hareket(move) fonksiyonlarini calistiran fonksiyon.
	* \param direction				Hareketin yonunu belirledigimiz parametre.
	*/
	void Move(Direction direction);
private:
	/**
	* \brief						Hareket(move) fonksiyonunda belirlenen yon(direction) ile uyumlu oldugunda calisir.
	*/
	void MoveEast();
	/**
	* \brief						Hareket(move) fonksiyonunda belirlenen yon(direction) ile uyumlu oldugunda calisir.
	*/
	void MoveNorth();
	/**
	* \brief						Hareket(move) fonksiyonunda belirlenen yon(direction) ile uyumlu oldugunda calisir.
	*/
	void MoveNorthEast();
	/**
	* \brief						Hareket(move) fonksiyonunda belirlenen yon(direction) ile uyumlu oldugunda calisir.
	*/
	void MoveNorthWest();
	/**
	* \brief						Hareket(move) fonksiyonunda belirlenen yon(direction) ile uyumlu oldugunda calisir.
	*/
	void MoveSouth();
	/**
	* \brief						Hareket(move) fonksiyonunda belirlenen yon(direction) ile uyumlu oldugunda calisir.
	*/
	void MoveSouthEast();
	/**
	* \brief						Hareket(move) fonksiyonunda belirlenen yon(direction) ile uyumlu oldugunda calisir.
	*/
	void MoveSouthWest();
	/**
	* \brief						Hareket(move) fonksiyonunda belirlenen yon(direction) ile uyumlu oldugunda calisir.
	*/
	void MoveWest();
};