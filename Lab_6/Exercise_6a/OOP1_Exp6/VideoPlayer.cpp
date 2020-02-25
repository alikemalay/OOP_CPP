#include "VideoPlayer.h"

VideoPlayer::VideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount):Player(maxVolumeLevel)
{
	this->supportedFormatCount = supportedFormatCount;
	this->supportedFormats = supportedFormats;
}

VideoPlayer::~VideoPlayer()
{
}

void VideoPlayer::BackWard()
{
	cout << "VideoPlayer : " << "Does not support the backward operation." << endl;
}

void VideoPlayer::EjectMedia()
{
	cout << "VideoPlayer : " << "Ejecting the media " << this->mediaName << endl;
}

void VideoPlayer::Forward()
{
	cout << "VideoPlayer : " << "Does not support the forward operation." << endl;
}

void VideoPlayer::MounthMedia(const string & mediaName)
{
	this->mediaName = mediaName;
	cout << "VideoPlayer : " << "Trying the mounth media " << "..." << endl;

	size_t found;
	for (int i = 0; i < supportedFormatCount; i++) {
		found = mediaName.find(supportedFormats[i]);
		if (found != string::npos) {
			cout << "VideoPlayer : " << "Media is supported and playeble" << endl;
			break;
		}
		else {
			cout << "VideoPlayer : " << "Media is not supported and playeble" << endl;
		}
	}
}
