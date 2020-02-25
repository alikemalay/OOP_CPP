#pragma once
#include <iostream>
#include <string>
using namespace std;

/**
* \brief							Soyut olarak tanimlanan Player sinifi.
*/
class Player {
protected:
	/**
	* \brief						Maksimum ses seviyesini tutan degisken.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	int maxVolumeLevel;
	/**
	* \brief						Medya ismini tutan degisken.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	string mediaName;
	/**
	* \brief						Gecerli ses seviyesini tutan degisken.
	* \details						Sadece bu siniftan tureyen siniflarda kullanilmasi amaciyla korumali tanimlanmistir.
	*/
	int volumeLevel;
public:
	/**
	* \brief						Yapici fonksiyon.
	* \param maxVolumeLevel			Muzik oynaticisinin alabilecegi maksimum ses seviyenin tanimlandigi parametre.
	*/
	Player(int maxVolumeLevel = 100);
	/**
	* \brief						Yikici fonksiyon.
	*/
	~Player();
	/**
	* \brief						Oynaticida bir onceki sarkiya gecmeye yarayan fonksiyon.
	* \details						Bu siniftan tureyen siniflardada bu fonksiyonun zorunlu olmasi amaciyla saf sanal olarak tanimlanmistir.
	*/
	virtual void BackWard()=0;
	/**
	* \brief						Oynaticida bir sonraki sarkiya gecmeye yarayan fonksiyon.
	* \details						Bu siniftan tureyen siniflardada bu fonksiyonun zorunlu olmasi amaciyla saf sanal olarak tanimlanmistir.
	*/
	virtual void Forward() = 0;
	/**
	* \brief						Oynaticidan medyayi cikartan fonksiyon.
	* \details						Bu siniftan tureyen siniflardada bu fonksiyonun zorunlu olmasi amaciyla saf sanal olarak tanimlanmistir.
	*/
	virtual void EjectMedia() = 0;
	/**
	* \brief						Oynaticiya medyayi takmayi saglayan fonksiyon.
	* \details						Bu siniftan tureyen siniflardada bu fonksiyonun zorunlu olmasi amaciyla saf sanal olarak tanimlanmistir.
	* \param mediaName				Takilacak medyanin isminin tanimlandigi parametre.
	*/
	virtual void MounthMedia(const string& mediaName) = 0;
	/**
	* \brief						Oynaticida belirli miktarda ses arttirmayi saglayan fonksiyon.
	* \param amount					Arttirilmasi istenilen ses miktarinin tanimlandigi parametre.
	*/
	virtual void VolumeUp(int amount);
	/**
	* \brief						Oynaticida belirli miktarda ses azaltmayi saglayan fonksiyon.
	* \param amount					Azaltilmasi istenilen ses miktarinin tanimlandigi parametre.
	*/
	virtual void VolumeDown(int amount);
	/**
	* \brief						Oynaticiyi acmaya yarayan fonksiyon.
	*/
	void Open();
	/**
	* \brief						Oynaticiyi kapatmaya yarayan fonksiyon.
	*/
	void Close();
	/**
	* \brief						Oynaticidaki medyayi calmaya yarayan fonksiyon.
	*/
	void Play();
	/**
	* \brief						Oynaticidaki calinan medyayi duraklatmaya yarayan fonksiyon.
	*/
	void Pause();
	/**
	* \brief						Oynaticidaki calinan medyayi durdurmaya yarayan fonksiyon.
	*/
	void Stop();
	
};