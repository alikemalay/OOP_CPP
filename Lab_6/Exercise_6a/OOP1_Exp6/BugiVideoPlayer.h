#pragma once
#include <iostream>
#include <string>
#include "VideoPlayer.h"

using namespace std;
/**
* \brief							VideoPlayer sinifindan tureyen BugiVideoPlayer sinifi.
*/
class BugiVideoPlayer:public VideoPlayer{
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param maxVolumeLevel			Video oynaticisinin alabilecegi maksimum ses seviyenin tanimlandigi parametre.
	* \param supportedFormats		Video oynaticisinin destekledigi formatlarin tanimlandigi parametre.
	* \param supportedFormatCount	Video oynaticisinin destekledigi formatlarin sayisinin tanimlandigi parametre.
	*/
	BugiVideoPlayer(int maxVolumeLevel,string supportedFormats[],int supportedFormatCount);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~BugiVideoPlayer();
	/**
	* \brief						Oynaticidan medyayi cikartan fonksiyon.
	*/
	void EjectMedia();
};