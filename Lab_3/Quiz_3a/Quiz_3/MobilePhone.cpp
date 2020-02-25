#include <iostream>
#include "MobilePhone.h"

using namespace std;

MobilePhone::MobilePhone()
{
};

MobilePhone::MobilePhone(const string& brand, const string& model, double cameraResolution, double batteryCapacity)
{
	m_brand = brand;
	m_model = model;
	m_cameraResolution = cameraResolution;
	m_batteryCapacity = batteryCapacity;
	currentBatteryLevel = batteryCapacity;
	
};


const string& MobilePhone::getBrand(){
	return m_brand;
};
void MobilePhone::setBrand(const string& brand){
	m_brand = brand;
};
const string& MobilePhone::getModel(){
	return m_model;
};
void MobilePhone::setModel(const string& model){
	m_model = model;
};
double MobilePhone::getCameraResolution(){
	return m_cameraResolution;
};
void MobilePhone::setCameraResolution(double cameraResolution){
	m_cameraResolution = cameraResolution;
};
double MobilePhone::getBatteryCapacity(){
	return m_batteryCapacity;
};
void MobilePhone::setBatteryCapacity(double battaryCapacity){
	m_batteryCapacity = battaryCapacity;
};
double MobilePhone::getCurrentBatteryLevel(){
	return currentBatteryLevel;
};
void MobilePhone::startPhoneCall(){
	cout << "Starting a phone call..." << endl;
};
bool MobilePhone::endPhoneCall(double callDuration){
	
	if (m_status != false)
	{
		cout << "End a phone call..." << endl;
		currentBatteryLevel = (currentBatteryLevel)- (callDuration * 10);
		if (currentBatteryLevel <= 0)
		{
			m_status = false;
			cout << "Battery end." << endl;
			return false;
		}
		else if (currentBatteryLevel > 0)
		{
			return true;
		}
		
	}
	
};
bool MobilePhone::takePhoto(){
	if (m_status != false)
	{
		currentBatteryLevel = (currentBatteryLevel)-(20);
		if (currentBatteryLevel <= 0)
		{
			m_status = false;
			cout << "Battery end." << endl;
			return false;
		}
		else if (currentBatteryLevel > 0)
		{
			return true;
		}

		cout << "Taking a photo with resolution: " << m_cameraResolution << endl;
		
	}
	

};
void MobilePhone::startVideoCapture(){
	cout << "Starting a video capture..." << endl;
};
bool MobilePhone::endVideoCapture(double videoDuration){
	if (m_status != false){
		cout << "End a phone call..." << endl;
		currentBatteryLevel = (currentBatteryLevel)-(videoDuration * 30);
		if (currentBatteryLevel <= 0)
		{
			return false;
		}
		else if (currentBatteryLevel > 0)
		{
			return true;
		}
		
	}
	
};