#include "Walkman.h"

Walkman::Walkman(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount):MusicPlayer(maxVolumeLevel,supportedFormats,supportedFormatCount)
{
	this->volumeLevel = 35;
}

Walkman::~Walkman()
{
}

void Walkman::EjectMedia()
{
	MusicPlayer::EjectMedia();
	cout << "Walkman : " << "Closing the carriage " << endl;
}
