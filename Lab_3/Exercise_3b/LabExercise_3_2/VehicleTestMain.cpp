/// VehicleTestMain.cpp

/** \brief						Olusturdugumuz Vehicle sinifini test ettimiz sayfa.
* \author						Ali Kemal AY - 152120151079
*/

#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

/**
* \brief						Vehicle::Accelarate fonksiyonunu test eder.
* \details						Eger hizlanma olursa onceki, gecerli hizi,
*								yoksa hata mesaji yazdirir.
* \param vehicle				Hizi artacak araci alan parametre.
* \param amount					Ne kadar hiz artacagini alan parametre.
*/
void TEST_Acceleration(Vehicle& vehicle, double amount)
{
	double previousSpeed = vehicle.getCurrentSpeed();
	if (vehicle.Accelarate(amount))
	{
		cout << "SUCCESS : Accelerated " << endl;
		cout << "Previous Speed : " << previousSpeed << " Current Speed : " <<
			vehicle.getCurrentSpeed() << endl;
	}
	else
	{
		cout << "FAILURE : Could not accelerated" << endl;
	}
}
/**
* \brief						Vehicle::Decelerate fonksiyonunu test eder.
* \details						Eger yavaslama olursa onceki, gecerli hizi,
*								yoksa hata mesaji yazdirir.
* \param vehicle				Hizi azalacak araci alan parametre.
* \param amount					Ne kadar hiz azalacagini alan parametre.
*/
void TEST_Deceleration(Vehicle& vehicle, double amount)
{
	double previousSpeed = vehicle.getCurrentSpeed();
	if (vehicle.Decelerate(amount))
	{
		cout << "SUCCESS : Decelerated " << endl;
		cout << "Previous Speed : " << previousSpeed << " Current Speed : " <<
			vehicle.getCurrentSpeed() << endl;
	}
	else
	{
		cout << "FAILURE : Could not decelerated" << endl;
	}
}
/**
* \brief						Vehicle::GetIn fonksiyonunu test eder.
* \details						Eger arac musaitse binis icin onceki, gecerli yolcu sayisini,
*								yoksa hata mesaji yazdirir.
* \param vehicle				Yolcu binecek araci alan parametre.
* \param passengerNumber		Ne kadar yolcu bindirecegini alan parametre.
*/
void TEST_GetIn(Vehicle& vehicle, int passengerNumber)
{
	double previousPassNum = vehicle.getCurrentPassengerNumber();
	if (vehicle.GetIn(passengerNumber))
	{
		cout << "SUCCESS : Got-In " << endl;
		cout << "Previous PassengerNumber : " << previousPassNum << " Current PassengerNumber : " <<
			vehicle.getCurrentPassengerNumber() << endl;
	}
	else
	{
		cout << "ERROR:Cannot get-in the vehicle while moving." << endl
		<< "FAILURE : Could not got-in" << endl;
	}

}
/**
* \brief						Vehicle::GetOut fonksiyonunu test eder.
* \details						Eger arac musaitse inis icin onceki, gecerli yolcu sayisini,
*								yoksa hata mesaji yazdirir.
* \param vehicle				Yolcu inecek araci alan parametre.
* \param passengerNumber		Ne kadar yolcu indirecegini alan parametre.
*/
void TEST_GetOut(Vehicle& vehicle, int passengerNumber)
{
	double previousPassNum = vehicle.getCurrentPassengerNumber();
	if (vehicle.GetOut(passengerNumber))
	{
		cout << "SUCCESS : Got-Out " << endl;
		cout << "Previous PassengerNumber : " << previousPassNum << " Current PassengerNumber : " <<
			vehicle.getCurrentPassengerNumber() << endl;
	}
	else
	{
		cout << "ERROR : Cannot get-out the vehicle while moving." << endl
		<< "FAILURE : Could not got-out" << endl;
	}
}
/**
* \brief						Vehicle::StartEngine fonksiyonunu test eder.
* \details						Araci calistiran fonksiyon.
* \param vehicle				Calisacak araci alan parametre.
*/
void TEST_StartEngine(Vehicle& vehicle)
{
	vehicle.StartEngine();
	cout << "ENGINE START" << endl;
}
/**
* \brief						Vehicle::StopEngine fonksiyonunu test eder.
* \details						Araci durduran fonksiyon.
* \param vehicle				Duracak araci alan parametre.
*/
void TEST_StopEngine(Vehicle& vehicle)
{
	vehicle.StopEngine();
	cout << "ENGINE STOP" << endl;
}
int main()
{
	cout << "+-----------------------+" << endl
		<< "| TEST OF FIRST VEHICLE |" << endl
		<< "+-----------------------+" << endl;
	Vehicle vehicle1(4, 220);

	vehicle1.StartEngine();
	
	TEST_Acceleration(vehicle1, 30);
	TEST_Deceleration(vehicle1, 20);
	TEST_GetIn(vehicle1, 2);
	TEST_GetOut(vehicle1, 1);
	vehicle1.StopEngine();
	cout << "+------------------------+" << endl
		<< "| TEST OF SECOND VEHICLE |" << endl
		<< "+------------------------+" << endl;
	Vehicle vehicle2(5, 180);
	TEST_Acceleration(vehicle2, 30);
	TEST_Deceleration(vehicle2, 20);
	TEST_GetIn(vehicle2, 2);
	TEST_GetOut(vehicle2, 1);
	system("pause");
	return 0;
}
