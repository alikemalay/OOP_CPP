#include "BugiVideoPlayer.h"

BugiVideoPlayer::BugiVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount):VideoPlayer(maxVolumeLevel,supportedFormats,supportedFormatCount)
{
	this->volumeLevel = 50;
}

BugiVideoPlayer::~BugiVideoPlayer()
{
}

void BugiVideoPlayer::EjectMedia()
{
	VideoPlayer::EjectMedia();
	
	cout << "BugiVideoPlayer : " << "Media player crushed!"<< endl;
}
