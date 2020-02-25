#include <iostream>

#include "MineralCompany.h"
#include "FurnitureCompany.h"
#include "OtomobileCompany.h"
#include "AirPlaneCompany.h"

using namespace std;


void Test_MineralCompany() {
	cout <<"+----------------------+" << endl
		<< "| MINERAL COMPANY TEST |" << endl
		<< "+----------------------+" << endl;

	MineralCompany* mineral = new MineralCompany("Mineral1",2017,"Turkey");
	cout << mineral->getName() << endl;
	cout << mineral->getFoundation() << endl;
	mineral->payTax();
	mineral->SearchCoal();
	mineral->SearchGold();
	

};

void Test_FurnitureCompany() {

	cout <<"+------------------------+" << endl
		<< "| FURNITURE COMPANY TEST |" << endl
		<< "+------------------------+" << endl;

	FurnitureCompany* furniture = new FurnitureCompany("Furniture1", 2015, "Germany");
	
	cout << furniture->getName() << endl;
	cout << furniture->getFoundation() << endl;
	furniture->payTax();
	furniture->FabricateSeat();
	furniture->FabricateTable();


};

void Test_OtomobileCompany() {
	cout <<"+------------------------+" << endl
		<< "| OTOMOBILE COMPANY TEST |" << endl
		<< "+------------------------+" << endl;

	OtomobileCompany* otomobile = new OtomobileCompany("Otomobile1",2011,20);
	cout << otomobile->getName() << endl;
	cout << otomobile->getFoundation() << endl;
	otomobile->orderTaxPaymentForAllSubCompaies();
	otomobile->BuildOtomobile();
	otomobile->BuildTruck();

};

void Test_AirPlaneCompany() {
	cout <<"+------------------------+" << endl
		<< "| AIR PLANE COMPANY TEST |" << endl
		<< "+------------------------+" << endl;

	AirPlaneCompany* airplane = new AirPlaneCompany("AirPlane", 2016, 5);
	cout << airplane->getName() << endl;
	cout << airplane->getFoundation() << endl;
	airplane->orderTaxPaymentForAllSubCompaies();
	airplane->CreatePassengerAirPlane();
	airplane->CreateCargoAirPlane();
	airplane->CreateFighterAirPlane();
};


int main() {

	Test_MineralCompany();
	
	Test_FurnitureCompany();

	Test_OtomobileCompany();

	Test_AirPlaneCompany();


	system("pause");
	return 0;
}