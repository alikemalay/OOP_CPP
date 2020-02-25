#include "Player.h"

Player::Player(const string & name, int age)
{
	this->name = name;
	this->age = age;
}

Player::~Player()
{
}

int Player::getAge() const
{
	return age;
}

const string & Player::getName() const
{
	return this->name;
}

void Player::Move(Direction direction)
{
	if (direction == EAST)
		MoveEast();
	else if (direction == NORTH)
		MoveNorth();
	else if (direction == NORTH_EAST)
		MoveNorthEast();
	else if (direction == NORTH_WEST)
		MoveNorthWest();
	else if (direction == SOUTH)
		MoveSouth();
	else if (direction == SOUTH_EAST)
		MoveSouthEast();
	else if (direction == SOUTH_WEST)
		MoveSouthWest();
	else
		MoveWest();
}

void Player::MoveEast()
{
	cout << this->name << " is moving to East " << endl;
}

void Player::MoveNorth()
{
	cout << this->name << " is moving to North " << endl;
}

void Player::MoveNorthEast()
{
	cout << this->name << " is moving to North-East " << endl;
}

void Player::MoveNorthWest()
{
	cout << this->name << " is moving to North-West " << endl;
}

void Player::MoveSouth()
{
	cout << this->name << " is moving to South " << endl;
}

void Player::MoveSouthEast()
{
	cout << this->name << " is moving to South-East " << endl;
}

void Player::MoveSouthWest()
{
	cout << this->name << " is moving to South-West " << endl;
}

void Player::MoveWest()
{
	cout << this->name << " is moving to West " << endl;
}
