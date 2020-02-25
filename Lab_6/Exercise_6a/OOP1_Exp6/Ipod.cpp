#include "Ipod.h"

Ipod::Ipod(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount):MusicPlayer(maxVolumeLevel,supportedFormats,supportedFormatCount)
{
	this->volumeLevel = 50;
}

Ipod::~Ipod()
{
}

void Ipod::BackWard()
{
	cout << "IPod : " << "Backward the music '" << this->mediaName <<"'" << endl;
}

void Ipod::Forward()
{
	cout << "IPod : " << "Forward the music '" << this->mediaName << "'" << endl;
}

void Ipod::VolumeDown(int amount)
{
	Player::VolumeDown(amount);
	cout << "IPod : "  << "Adjusting Equaliser" << endl;
}

void Ipod::VolumeUp(int amount)
{
	Player::VolumeUp(amount);
	cout << "IPod : " << "Adjusting Equaliser" << endl;
}
