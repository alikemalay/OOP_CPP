#include "MusicPlayer.h"

MusicPlayer::MusicPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount):Player(maxVolumeLevel)
{
	this->supportedFormatCount = supportedFormatCount;
	this->supportedFormats = supportedFormats;
}

MusicPlayer::~MusicPlayer()
{
}

void MusicPlayer::BackWard()
{
	cout << "MusicPlayer : " << "Does not support the backward operation." << endl;
}

void MusicPlayer::Forward() 
{
	cout << "MusicPlayer : " << "Does not support the forward operation." << endl;
}

void MusicPlayer::EjectMedia() 
{
	cout << "MusicPlayer : " << "Ejecting the media '" << this->mediaName << "'" << endl;
}

void MusicPlayer::MounthMedia(const string & mediaName) 
{
	this->mediaName = mediaName;
	cout << "MusicPlayer : " << "Trying the mounth media " << "..." << endl;
	
	size_t found;
	for (int i = 0; i < supportedFormatCount; i++) {
		found = mediaName.find(supportedFormats[i]);
		if (found != string::npos) {
			cout << "MusicPlayer : " << "Media is supported and playeble" << endl;
			break;
		}
		else {
			cout << "MusicPlayer : " << "Media is not supported and playeble" << endl;
		}
	}
	

}
