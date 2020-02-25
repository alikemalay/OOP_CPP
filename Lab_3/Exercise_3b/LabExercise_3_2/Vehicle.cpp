/// Vehicle.cpp
#include "Vehicle.h"
Vehicle::Vehicle(int maxPassengerNumber, double maxSpeed)
{
	this->maxSpeed = maxSpeed;
	this->maxPassengerNumber = maxPassengerNumber;
	this->engineStarted = false;
	this->currentSpeed = 0;
	this->currentPassengerNumber = 0;
}
Vehicle::~Vehicle(){

}
bool Vehicle::Accelarate(double amount)
{
	double x = (currentSpeed + amount);
	if (engineStarted)
	{
		if ( x <= maxSpeed)
			currentSpeed += amount;
		else{
			currentSpeed = maxSpeed;
		}

		return (engineStarted);
	}
	else
	{
		return engineStarted;
	}

}
bool Vehicle::Decelerate(double amount)
{
	double x = (currentSpeed - amount);
	if (engineStarted)
	{
		if (!(x < 0))
		currentSpeed -= amount;
		else
		{
			currentSpeed = 0;
		}
		return engineStarted;
	}
	else
	{
		return engineStarted;
	}
}
void Vehicle::StartEngine()
{
	cout << "ENGINE START" << endl;
	engineStarted = true;
}
void Vehicle::StopEngine()
{
	cout << "ENGINE STOP" << endl;
	engineStarted = false;
}
bool Vehicle::GetIn(int passengerNumber)
{

	if (currentSpeed == 0)
	{
		if ((currentPassengerNumber == 0) && (currentPassengerNumber<maxPassengerNumber))
		{
			this->currentPassengerNumber += passengerNumber;
		}
		return true;
	}
	else
	{

		return false;
	}
}
bool Vehicle::GetOut(int passengerNumber)
{
	if (currentSpeed == 0)
	{
		if (((currentPassengerNumber) < maxPassengerNumber) && this->currentPassengerNumber>=passengerNumber)
		{
			currentPassengerNumber-=passengerNumber;
		}
		return true;
	}
	else
	{
		return false;
	}
}
double Vehicle::getCurrentSpeed()
{
	return currentSpeed;
}
double Vehicle::getCurrentPassengerNumber()
{
	return currentPassengerNumber;
}
bool Vehicle::IsEngineStarted()
{
	return engineStarted=true;
}
