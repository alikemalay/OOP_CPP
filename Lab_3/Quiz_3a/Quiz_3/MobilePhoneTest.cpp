#include <iostream>
#include "MobilePhone.h"

using namespace std;

int main(){
	MobilePhone mp1("Samsung","Note 5",200,3000);
	
	cout << "Phone Brand:" << mp1.getBrand() << endl;
	cout << "Phone Model: " << mp1.getModel() << endl;
	cout << "Camera Resolution: " << mp1.getCameraResolution() << endl;
	cout << "Battery Capacity: " << mp1.getBatteryCapacity() << endl << endl;
	

	mp1.setBrand("IPhone");
	mp1.setModel("6 Plus");
	mp1.setCameraResolution(300);
	mp1.setBatteryCapacity(3500);

	cout << "Phone Brand:" << mp1.getBrand() << endl;
	cout << "Phone Model: " << mp1.getModel() << endl;
	cout << "Camera Resolution: " << mp1.getCameraResolution() << endl;
	cout << "Battery Capacity: " << mp1.getBatteryCapacity() << endl << endl;


	
	

	mp1.startPhoneCall();

	cout << mp1.getCurrentBatteryLevel() << endl;

	mp1.endPhoneCall(5);

	cout << mp1.getCurrentBatteryLevel() << endl;

	mp1.takePhoto();
	
	cout << mp1.getCurrentBatteryLevel() << endl;

	mp1.startVideoCapture();

	mp1.endVideoCapture(5);

	cout << mp1.getCurrentBatteryLevel() << endl;
	system("pause");
	return 0;
}