#pragma once

#include <iostream>
#include <string>
#include "MusicPlayer.h"

using namespace std;
/**
* \brief							MusicPlayer sinifindan tureyen Walkman sinifi.
*/
class Walkman :public MusicPlayer {
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param maxVolumeLevel			Muzik oynaticisinin alabilecegi maksimum ses seviyenin tanimlandigi parametre.
	* \param supportedFormats		Muzik oynaticisinin destekledigi formatlarin tanimlandigi parametre.
	* \param supportedFormatCount	Muzik oynaticisinin destekledigi formatlarin sayisinin tanimlandigi parametre.
	*/
	Walkman(int maxVolumeLevel,string supportedFormats[],int supportedFormatCount);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~Walkman();
	/**
	* \brief						Oynaticidan medyayi cikartan fonksiyon.
	*/
	void EjectMedia();
};