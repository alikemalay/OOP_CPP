#include "Player.h"

Player::Player(int maxVolumeLevel)
{
	this->maxVolumeLevel = maxVolumeLevel;
}

Player::~Player()
{
}

void Player::BackWard() 
{
	cout << "Player : " << "Backward operation!" << endl;
}

void Player::Forward() 
{
	cout << "Player : " << "Forward operation!" << endl;

}

void Player::Close()
{
	cout << "Player : " << "Closed..." << endl;
}

void Player::EjectMedia()
{
	cout << "Player : " << "Ejecting the media " << this->mediaName << "..." << endl;
}

void Player::MounthMedia(const string & mediaName) 
{
	this->mediaName = mediaName;
	cout << "Player : " << "Trying the mounth '" << this->mediaName << "'" << "..." << endl;
}

void Player::Open()
{
	cout << "Player : " << "Opened..." << endl;
}

void Player::Pause()
{
	cout << "Player : " << "Pausing the media '" << this->mediaName << "'" << endl;
}

void Player::Play()
{
	cout << "Player : " << "Playing the media '" << this->mediaName << "'" << endl;
}

void Player::Stop()
{
	cout << "Player : " << "Stopping the media '" << this->mediaName << "'" << endl;
}

void Player::VolumeDown(int amount)
{
	if (volumeLevel - amount >= 0)
	{
		volumeLevel -= amount;
	}
	cout << "Player : " << "Volume Level : " << volumeLevel << endl;
}

void Player::VolumeUp(int amount)
{
	if (volumeLevel + amount <= maxVolumeLevel)
	{
		volumeLevel += amount;
	}
	cout << "Player : " << "Volume Level : " << volumeLevel << endl;
}
