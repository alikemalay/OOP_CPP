#pragma once
#include <iostream>
#include <string>
#include "Player.h"

using namespace std;
/**
* \brief							Player sinifindan tureyen VideoPlayer sinifi.
*/
class VideoPlayer :public Player {
protected:
	/**
	* \brief						Desteklenen formatlarin gizli tutuldugu degisken.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	string * supportedFormats;
	/**
	* \brief						Desteklenen format sayisinin gizli tutuldugu degisken.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	int supportedFormatCount;
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param maxVolumeLevel			Video oynaticisinin alabilecegi maksimum ses seviyenin tanimlandigi parametre.
	* \param supportedFormats		Video oynaticisinin destekledigi formatlarin tanimlandigi parametre.
	* \param supportedFormatCount	Video oynaticisinin destekledigi formatlarin sayisinin tanimlandigi parametre.
	*/
	VideoPlayer(int maxVolumeLevel,string supportedFormats[],int supportedFormatCount);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~VideoPlayer();
	/**
	* \brief						Oynaticida bir onceki videoya gecmeye yarayan fonksiyon.
	*/
	void BackWard();
	/**
	* \brief						Oynaticidan medyayi cikartan fonksiyon.
	*/
	void EjectMedia();
	/**
	* \brief						Oynaticida bir sonraki videoya gecmeye yarayan fonksiyon.
	*/
	void Forward();
	/**
	* \brief						Oynaticiya medyayi takmayi saglayan fonksiyon.
	* \param mediaName				Takilacak medyanin isminin tanimlandigi parametre.
	*/
	void MounthMedia(const string& mediaName);
};