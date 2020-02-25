#include "VLCVideoPlayer.h"

VLCVideoPlayer::VLCVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount):VideoPlayer(maxVolumeLevel,supportedFormats,supportedFormatCount)
{
	this->volumeLevel = 50;
}

VLCVideoPlayer::~VLCVideoPlayer()
{
}

void VLCVideoPlayer::BackWard()
{
	cout << "VLCVideoPlayer : " << "Backward the video '" << this->mediaName << "'" << endl;
}

void VLCVideoPlayer::Forward()
{
	cout << "VLCVideoPlayer : " << "Forward the video '" << this->mediaName <<  "'" << endl;
}

void VLCVideoPlayer::VolumeDown(int amount)
{
	Player::VolumeDown(amount);
	cout << "VLCVideoPlayer : " << "Adjusting Equaliser" << endl;
}

void VLCVideoPlayer::VolumeUp(int amount)
{
	Player::VolumeUp(amount);
	cout << "VLCVideoPlayer : " << "Adjusting Equaliser" << endl;
}
