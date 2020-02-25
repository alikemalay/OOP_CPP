#include <iostream>
#include <string>

using namespace std;
class MobilePhone{
	string m_brand;
	string m_model;
	double m_cameraResolution;
	double m_batteryCapacity;
	double currentBatteryLevel;
	bool m_status = true;
public:
	MobilePhone();
	MobilePhone(const string& brand, const string& model, double cameraResolution, double batteryCapacity);
	const string& getBrand();
	void setBrand(const string& brand);
	const string& getModel();
	void setModel(const string& model);
	double getCameraResolution();
	void setCameraResolution(double cameraResolution);
	double getBatteryCapacity();
	void setBatteryCapacity(double battaryCapacity);
	double getCurrentBatteryLevel();
	void startPhoneCall();
	bool endPhoneCall(double callDuration);
	bool takePhoto();
	void startVideoCapture();
	bool endVideoCapture(double videoDuration);
	
};