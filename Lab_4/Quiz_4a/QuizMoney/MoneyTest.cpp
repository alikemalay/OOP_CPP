/*****************************************
*****************************************
* IDE		: Visual Studio 2017 *
* Author	: Ali Kemal AY *
* Quiz 4	: Operator Overloading *
*****************************************/
#include "Money.h"
#include <iostream>
/**
* \brief				money nesnesinin >> giris operatorunu test eder.
* \param money			Verisi girilecek money tanimlandigi parametre.
*/
void TEST_Input(Money& money)
{
	cout << "+------------+" << endl
		<< "| INPUT TEST |" << endl
		<< "+------------+" << endl;
	cin >> money;
};
/**
* \brief				money nesnesinin << cikti operatorunu test eder.
* \param money			Verisi yazdirilacak money'in tanimlandigi parametre.
*/
void TEST_Output(Money& money)
{
	cout << "+-------------+" << endl
		<< "| OUTPUT TEST |" << endl
		<< "+-------------+" << endl;
	cout << money << endl;
}
/**
* \brief				2 money nesnesinin birbiri ile + toplama operatorunu test eder.
* \details				Sonuc baska bir money nesnesinde tutulur.
* \param m1				Toplanilacak birinci money nesnesinin tanimlandigi parametre.
* \param m2				Toplanilacak ikinci money nesnesinin tanimlandigi parametre.
*/
void Test_Addition(Money &m1,Money &m2)
{
	cout <<"+----------+" << endl
		<< "| ADDITION |" << endl
		<< "+----------+" << endl;
	Money tmp = m1 + m2;
	cout << m1 << " + " << m2 << " = " << tmp << endl;
	
};
/**
* \brief				2 money nesnesinin birbiriyle toplayip ustune esitlemesini += operatoru ile test eder.
* \details				Sonuc ilk money nesnesinde tutulur.
* \param m1				Toplanilacak birinci money nesnesinin tanimlandigi parametre.
* \param m2				Toplanilacak ikinci money nesnesinin tanimlandigi parametre.
*/
void Test_AdditionOver(Money &m1, Money &m2)
{
	cout <<"+--------------+" << endl
		<< "| ADDITION OVER|" << endl
		<< "+--------------+" << endl;
	
	cout << "Vector 1 Before Addition over: " << m1 << endl;
	m1 += m2;
	cout << "Vector 1 After Division over : " << m1 << endl;
};
/**
* \brief				money nesnesinin saibt bir deger ile + toplama operatorunu test eder.
* \details				Sonuc baska bir money nesnesinde tutulur.
* \param m1				Toplanilacak birinci money nesnesinin tanimlandigi parametre.
* \param constantDouble Toplanilacak sabit degerin tanimlandigi parametre.
*/
void Test_Constant_Addition(Money &m1, double constantDouble)
{
	cout << "+-------------------+" << endl
		<< "| ADDITION CONSTANT |" << endl
		<< "+-------------------+" << endl;
	Money tmp = m1 + constantDouble;
	cout << m1 << " + " << constantDouble << " = " << tmp << endl;

};
/**
* \brief				money nesnesinin sabit bir deger ile += toplayip esitleme operatorunu test eder.
* \details				Sonuc money nesnesinde tutulur.
* \param m1				Toplanilacak birinci money nesnesinin tanimlandigi parametre.
* \param constantDouble Toplanilacak sabit degerin tanimlandigi parametre.
*/
void Test_Constant_AdditionOver(Money &m1, double constantDouble)
{

	cout <<"+-----------------------+" << endl
		<< "| ADDITION CONSTANT OVER|" << endl
		<< "+-----------------------+" << endl;

	cout << "Vector 1 Before Addition over: " << m1 << endl;
	m1 += constantDouble;
	cout << "Vector 1 After Division over : " << m1 << endl;
};
/**
* \brief				2 money nesnesinin birbirinden cikarilmasini - operatoru ile test eder.
* \details				Sonuc baska bir money nesnesinde tutulur.
* \param m1				Cikarma islemi icin gerekli birinci money nesnesinin tanimlandigi parametre.
* \param m2				Cikarma islemi icin gerekli ikinci money nesnesinin tanimlandigi parametre.
*/
void TEST_Subscription(Money &m1, Money &m2)
{
	cout <<"+--------------+" << endl
		<< "| Subscription |" << endl
		<< "+--------------+" << endl;
	Money tmp = m1 - m2;
	cout << m1 << " - " << m2 << " = " << tmp << endl;
};
/**
* \brief				2 money nesnesinin birbirinden cikarip ustune esitlemesini -= operatoru ile test eder.
* \details				Sonuc ilk money nesnesinde tutulur.
* \param m1				Cikarma islemi icin gerekli birinci money nesnesinin tanimlandigi parametre.
* \param m2				Cikarma islemi icin gerekli ikinci money nesnesinin tanimlandigi parametre.
*/
void TEST_SubscriptionOver(Money &m1, Money &m2)
{
	cout <<"+------------------+" << endl
		<< "| Subscription OVER|" << endl
		<< "+------------------+" << endl;

	cout << "Vector 1 Before Subscription over: " << m1 << endl;
	m1 -= m2;
	cout << "Vector 1 After Subscription over : " << m1 << endl;
};
/**
* \brief				money nesnesinin bir sayidan cikarilmasini - operatoru ile test eder.
* \details				Sonuc baska bir money nesnesinde tutulur.
* \param m1				Cikarma islemi icin gerekli birinci money nesnesinin tanimlandigi parametre.
* \param constantDouble Cikarilacak sabit degerin tanimlandigi parametre.
*/
void Test_Constant_Subscription(Money &m1, double constantDouble)
{
	cout <<"+-----------------------+" << endl
		<< "| Subscription CONSTANT |" << endl
		<< "+-----------------------+" << endl;
	Money tmp = m1 - constantDouble;
	cout << m1 << " - " << constantDouble << " = " << tmp << endl;

};
/**
* \brief				money nesnesini sabit bir degerden cikarip ustune esitlemesini -= operatoru ile test eder.
* \details				Sonuc money nesnesinde tutulur.
* \param m1				Cikarilacak birinci money nesnesinin tanimlandigi parametre.
* \param constantDouble Cikarilacak sabit degerin tanimlandigi parametre.
*/
void Test_Constant_SubscriptionOver(Money &m1, double constantDouble)
{

	cout <<"+---------------------------+" << endl
		<< "| Subscription CONSTANT OVER|" << endl
		<< "+---------------------------+" << endl;

	cout << "Vector 1 Before Subscription over: " << m1 << endl;
	m1 -= constantDouble;
	cout << "Vector 1 After Subscription over : " << m1 << endl;
};

int main() {
	
Money m1, m2;
	double myDouble = 5.0;
	cout << "Constant Double Value : " << myDouble << endl;
	
	// input&output for m1
	TEST_Input(m1);
	TEST_Output(m1);

	// input&output for m2
	TEST_Input(m2);
	TEST_Output(m2);
	
	// addition test
	Test_Addition(m1, m2);
	Test_AdditionOver(m1, m2);
	Test_Constant_Addition(m1, myDouble);
	Test_Constant_AdditionOver(m1, myDouble);

	// subscription test
	TEST_Subscription(m1, m2);
	TEST_SubscriptionOver(m1, m2);
	Test_Constant_Subscription(m1, myDouble);
	Test_Constant_SubscriptionOver(m1, myDouble);

	system("pause");
	return 0;
}