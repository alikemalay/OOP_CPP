#pragma once

#include <iostream>
#include "Player.h"
#include <string>

using namespace std;
/**
* \brief							Player sinifindan tureyen MusicPlayer sinifi.
*/
class MusicPlayer : public Player {
protected:
	/**
	* \brief						Desteklenen format sayisinin gizli tutuldugu degisken.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	int supportedFormatCount;
	/**
	* \brief						Desteklenen formatlarin gizli tutuldugu degisken.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	string* supportedFormats;
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param maxVolumeLevel			Muzik oynaticisinin alabilecegi maksimum ses seviyenin tanimlandigi parametre.
	* \param supportedFormats		Muzik oynaticisinin destekledigi formatlarin tanimlandigi parametre.
	* \param supportedFormatCount	Muzik oynaticisinin destekledigi formatlarin sayisinin tanimlandigi parametre.
	*/
	MusicPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~MusicPlayer();
	/**
	* \brief						Oynaticida bir onceki sarkiya gecmeye yarayan fonksiyon.
	*/
	void BackWard();
	/**
	* \brief						Oynaticidan medyayi cikartan fonksiyon.
	*/
	void EjectMedia();
	/**
	* \brief						Oynaticida bir sonraki sarkiya gecmeye yarayan fonksiyon.
	*/
	void Forward() ;
	/**
	* \brief						Oynaticiya medyayi takmayi saglayan fonksiyon.
	* \param mediaName				Takilacak medyanin isminin tanimlandigi parametre.
	*/
	void MounthMedia(const string& mediaName);
};