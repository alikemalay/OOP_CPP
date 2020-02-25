#pragma once
#include <iostream>
#include <string>
#include "VideoPlayer.h"

using namespace std;
/**
* \brief							VideoPlayer sinifindan tureyen VLCVideoPlayer sinifi.
*/
class VLCVideoPlayer:public VideoPlayer {
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param maxVolumeLevel			Video oynaticisinin alabilecegi maksimum ses seviyenin tanimlandigi parametre.
	* \param supportedFormats		Video oynaticisinin destekledigi formatlarin tanimlandigi parametre.
	* \param supportedFormatCount	Video oynaticisinin destekledigi formatlarin sayisinin tanimlandigi parametre.
	*/
	VLCVideoPlayer(int maxVolumeLevel,string supportedFormats[],int supportedFormatCount);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~VLCVideoPlayer();
	/**
	* \brief						Oynaticida bir onceki videoya gecmeye yarayan fonksiyon.
	*/
	void BackWard();
	/**
	* \brief						Oynaticida bir sonraki videoya gecmeye yarayan fonksiyon.
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