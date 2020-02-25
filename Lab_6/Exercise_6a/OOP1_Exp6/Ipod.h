#pragma once
#include <iostream>
#include <string>
#include "MusicPlayer.h"

using namespace std;
/**
* \brief							MusicPlayer sinifindan tureyen Ipod sinifi.
*/
class Ipod :public MusicPlayer {
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param maxVolumeLevel			Muzik oynaticisinin alabilecegi maksimum ses seviyenin tanimlandigi parametre.
	* \param supportedFormats		Muzik oynaticisinin destekledigi formatlarin tanimlandigi parametre.
	* \param supportedFormatCount	Muzik oynaticisinin destekledigi formatlarin sayisinin tanimlandigi parametre.
	*/
	Ipod(int maxVolumeLevel,string supportedFormats[],int supportedFormatCount);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~Ipod();
	/**
	* \brief						Oynaticida bir onceki sarkiya gecmeye yarayan fonksiyon.
	*/
	void BackWard();
	/**
	* \brief						Oynaticida bir sonraki sarkiya gecmeye yarayan fonksiyon.
	*/
	void Forward();
	/**
	* \brief						Oynaticida belirli miktarda ses azaltmayi saglayan fonksiyon.
	* \param amount					Azaltilmasi istenilen ses miktarinin tanimlandigi parametre.
	*/
	void VolumeDown(int amount);
	/**
	* \brief						Oynaticida belirli miktarda ses arttirmayi saglayan fonksiyon.
	* \param amount					Arttirilmasi istenilen ses miktarinin tanimlandigi parametre.
	*/
	void VolumeUp(int amount);
};