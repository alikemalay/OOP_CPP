/*****************************************
*****************************************
* IDE : Visual Studio 2017 *
* Author : Ali Kemal AY *
* Experiment 4: Operator Overloading *
*****************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
#include "Vector.h"
/**
* \brief				Vektore veri girisini saglar.
* \param vector			Verisi girilecek vektorun tanimlandigi parametre.
*/
void TEST_Input(Vector& vector)
{
		cout << "+------------+" << endl
			<< "| INPUT TEST |" << endl
			<< "+------------+" << endl;
		cin >> vector;
};
/**
* \brief				Vektor verilerini ekranda yazdirir.
* \param vector			Verisi yazdirilacak vektorun tanimlandigi parametre.
*/
void TEST_Output(Vector& vector)
{
		cout << "+-------------+" << endl
			<< "| OUTPUT TEST |" << endl
			<< "+-------------+" << endl;
		cout << vector << endl;
}
/**
* \brief				Kopya yapici fonksiyonun kullanimini test eder, ekranda gosterir.
* \param vector			Kopyalanacak vektoru tanimladigimiz parametre.
*/
void TEST_CopyConstructor(Vector& vector)
{
		cout << "+-----------------------+" << endl
			<< "| COPY CONSTRUCTOR TEST |" << endl
			<< "+-----------------------+" << endl;
		Vector copy_vector(vector);
		cout  << left << setw(15) << "Original Vector" << " : "  << vector << endl 
			  << left << setw(15) << "Copy Vector" << " : " << copy_vector << endl;
}
/**
* \brief				Atama fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector			Atanmasini istedigimiz vektorun tanimlandigi parametre.
*/
void TEST_Assignment(Vector& vector)
{
		cout << "+-----------------+" << endl
			<< "| ASSIGNMENT TEST |" << endl
			<< "+-----------------+" << endl;
		Vector copy_vector;
		copy_vector = vector;
		cout << left << setw(22) << "Original Vector" << " : " << vector << endl 
			 << left << setw(22) << "Assignment Copy Vector" << " : " << copy_vector << endl;
}
/**
* \brief				Esitmi fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Esitlik sartini karsilayacak ilk vektorun tanimlandigi parametre.
* \param vector2		Esitlik sartini karsilayacak ikinci vektorun tanimlandigi parametre.
*/
void TEST_Equal(Vector& vector1, Vector& vector2)
{
		cout <<"+------------+" << endl
			<< "| EQUAL TEST |" << endl
			<< "+------------+" << endl;
		if (vector1 == vector2)
		{
			cout << vector1 << " is equal to " << vector2 << endl;
		}
		else
		{
			cout << vector1 << " is not equal to " << vector2 << endl;
		}
}
/**
* \brief				Esit degilmi fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Esit olmama sartini karsilayacak ilk vektorun tanimlandigi parametre.
* \param vector2		Esit olmama sartini karsilayacak ikinci vektorun tanimlandigi parametre.
*/
void TEST_Not_Equal(Vector& vector1, Vector& vector2)
{
	cout <<"+----------------+" << endl
		<< "| NOT EQUAL TEST |" << endl
		<< "+----------------+" << endl;
	if (vector1 == vector2)
	{
		cout << vector1 << " is equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not equal to " << vector2 << endl;
	}
}
/**
* \brief				Kucukmu fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Ikinci vektorden kucuk olmasi beklenen vektorun tanimlandigi parametre.
* \param vector2		Ilk vektorden buyuk olmasi beklenen vektorun tanimlandigi parametre.
*/
void TEST_LESS_THAN(Vector& vector1, Vector& vector2)
{
		cout << "+----------------+" << endl
			<< "| LESS THAN TEST |" << endl
			<< "+----------------+" << endl;
		if (vector1 < vector2)
		{
			cout << vector1 << " is less than " << vector2 << endl;
		}
		else
		{
			cout << vector1 << " is not less than " << vector2 << endl;
		}
}
/**
* \brief				Kucuk veya esitmi fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Ikinci vektorden kucuk yada esit olmasi beklenen vektorun tanimlandigi parametre.
* \param vector2		Ilk vektore esit yada buyuk olmasi beklenen vektorun tanimlandigi parametre.
*/
void TEST_LESS_THAN_OR_EQUAL(Vector& vector1, Vector& vector2)
{
	cout <<"+-------------------------+" << endl
		<< "| LESS THAN OR EQUAL TEST |" << endl
		<< "+-------------------------+" << endl;
	if (vector1 <= vector2)
	{
		cout << vector1 << " is less than or equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not less than or equal to " << vector2 << endl;
	}
}
/**
* \brief				Buyukmu fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Ikinci vektorden buyuk olmasi beklenen vektorun tanimlandigi parametre.
* \param vector2		Ilk vektorden kucuk olmasi beklenen vektorun tanimlandigi parametre.
*/
void TEST_GREATER_THAN(Vector& vector1, Vector& vector2)
{
	cout <<"+-------------------+" << endl
		<< "| GREATER THAN TEST |" << endl
		<< "+-------------------+" << endl;
	if (vector1 > vector2)
	{
		cout << vector1 << " is greater than " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not greater than " << vector2 << endl;
	}
}
/**
* \brief				Buyuk veya esitmi fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Ikinci vektorden buyuk yada esit olmasi beklenen vektorun tanimlandigi parametre.
* \param vector2		Ilk vektore esit yada kucuk olmasi beklenen vektorun tanimlandigi parametre.
*/
void TEST_GREATER_THAN_OR_EQUAL(Vector& vector1, Vector& vector2)
{
	cout <<"+----------------------------+" << endl
		<< "| GREATER THAN OR EQUAL TEST |" << endl
		<< "+----------------------------+" << endl;
	if (vector1 >= vector2)
	{
		cout << vector1 << " is greater than or equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not greater than or equal to " << vector2 << endl;
	}
}
/**
* \brief				Vektorun i indisindeki degeri newValue ile degistirir.
* \param vector			i indisinin degistirelecegi vektorun tanimladigi parametre.
* \param i				indis numarasini girdigimiz parametre.
* \param newValue		i indisinin olmasini istedigimiz yeni degeri tanimladigimiz parametre.
*/
void TEST_Subscription(Vector& vector, int i, double newValue)
{
		cout <<"+-------------------+" << endl
			<< "| SUBSCRIPTION TEST |" << endl
			<< "+-------------------+" << endl;
		cout << "Vector itself : " << vector << endl;
		cout << "Get vector[" << i << "] = " << vector[i] << endl;
		vector[i] = newValue;
		cout << "Set vector[" << i << "] to " << newValue << ", then vector[" << i << "] =" << vector[i] << endl;
}
/**
* \brief				Vektor toplama fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Toplanacak birinci vektorun tanimlandigi parametre.
* \param vector2		Toplanacak ikinci vektorun tanimlandigi parametre.
*/
void TEST_Addition(Vector& vector1, Vector& vector2)
{
		cout <<"+---------------+" << endl
			<< "| ADDITION TEST |" << endl
			<< "+---------------+" << endl;
		Vector result = vector1 + vector2;
		cout << vector1 << " + " << vector2 << " = " << result << endl;
}
/**
* \brief				Vektorun ustune toplama fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Ustune toplanacak vektorun tanimlandigi parametre.
* \param vector2		Ilk vektorun ustune eklenecek vektoru tanimlandigi parametre.
*/
void TEST_AdditionOver(Vector vector1, Vector vector2)
{
		cout <<"+--------------------+" << endl
			<< "| ADDITION OVER TEST |" << endl
			<< "+--------------------+" << endl;
		cout << "Vector 1 Before Addition over: " << vector1 << endl;
		vector1 += vector2;
		cout << "Vector 1 After Addition over : " << vector1 << endl;
}
/**
* \brief				Vektor cikarma fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Cikarilan vektorun tanimlandigi parametre.
* \param vector2		Cikan ikinci vektorun tanimlandigi parametre.
*/
void TEST_Substraction(Vector& vector1, Vector& vector2)
{
	cout <<"+-------------------+" << endl
		<< "| SUBSTRACTION TEST |" << endl
		<< "+-------------------+" << endl;
	Vector result = vector1 - vector2;
	cout << vector1 << " - " << vector2 << " = " << result << endl;
}
/**
* \brief				Vektorun ustunden cikarma fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Kendisinden cikarilip, sonucun ustune yazildigi vektorun tanimlandigi parametre.
* \param vector2		Ilk vektorden cikarilacak vektoru tanimlandigi parametre.
*/
void TEST_SubstractionOver(Vector vector1, Vector vector2)
{
	cout <<"+------------------------+" << endl
		<< "| SUBSTRACTION OVER TEST |" << endl
		<< "+------------------------+" << endl;
	cout << "Vector 1 Before Substraction over: " << vector1 << endl;
	vector1 -= vector2;
	cout << "Vector 1 After Substraction over : " << vector1 << endl;
}
/**
* \brief				Vektor carpma fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Carpim yapilacak ilk vektorun tanimlandigi parametre.
* \param vector2		Carpim yapilacak ikinci vektorun tanimlandigi parametre.
*/
void TEST_DotProduct(Vector& vector1, Vector& vector2)
{
	cout<< "+------------------+" << endl
		<< "| DOT-PRODUCT TEST |" << endl
		<< "+------------------+" << endl;
	cout << vector1 << " * " << vector2 << " = " << vector1*vector2 << endl;
}
/**
* \brief				Vektoru sayiyla carpma fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Carpim yapilacak vektorun tanimlandigi parametre.
* \param constant_value	Vektorun carpilacagi ondalikli sayiyi tanimlandigi parametre.
*/
void TEST_Constant_Multiplication(Vector& vector1, double constant_value)
{
	cout <<"+------------------------------+" << endl
		<< "| CONSTANT MULTIPLICATION TEST |" << endl
		<< "+------------------------------+" << endl;
	cout << vector1 << " * " << constant_value << " = " << vector1*constant_value << endl;
}
/**
* \brief				Vektoru sayi ile carpma fonksiyonunun kullanimini test eder, ekranda gosterir,sonucu vektore yazar.
* \param vector		Ustune yazilacak ve carpim yapilacak vektorun tanimlandigi parametre.
* \param constant_value	Vektorun carpilacagi ondalikli sayiyi tanimlandigi parametre.
*/
void TEST_Constant_MultiplicationOver(Vector vector, double constant_value)
{
		cout <<"+-----------------------------+" << endl
			<< "| CONSTANT MULTIPLICATIN OVER |" << endl
			<< "+-----------------------------+" << endl;
		cout << "Vector 1 Before Constant Multiplication over: " << vector << endl;
		vector *= constant_value;
		cout << "Vector 1 After Constant Multiplication over : " << vector << endl;
}
/**
* \brief				Vektor bolme fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Bolunen vektorun tanimlandigi parametre.
* \param vector2		Bolen vektorun tanimlandigi parametre.
*/
void TEST_Division(Vector& vector1, Vector& vector2)
{
	cout <<"+---------------+" << endl
		<< "| DIVISION TEST |" << endl
		<< "+---------------+" << endl;
	cout << vector1 << " / " << vector2 << " = " << vector1/vector2 << endl;
}
/**
* \brief				Vektor bolme fonksiyonunun kullanimini test eder, ekranda gosterir,sonucu ilk vektore yazar.
* \param vector1		Bolunen vektorun tanimlandigi parametre.
* \param vector2		Bolen vektorun tanimlandigi parametre.
*/
void TEST_DivisionOver(Vector vector1, Vector vector2)
{
	cout <<"+---------------+" << endl
		<< "| DIVISION OVER |" << endl
		<< "+---------------+" << endl;
	cout << "Vector 1 Before Division over: " << vector1 << endl;
	vector1 /= vector2;
	cout << "Vector 1 After Division over : " << vector1 << endl;
}
/**
* \brief				Vektoru sabit bir sayiyla bolme fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Sabit bir sayiyla bolunecek vektorun tanimlandigi parametre.
* \param constant_value	Vektorun bolunecegi ondalikli sayiyi tanimladigimiz parametre.
*/
void TEST_Constant_Division(Vector& vector1, double constant_value)
{
	cout <<"+------------------------+" << endl
		<< "| CONSTANT DIVISION TEST |" << endl
		<< "+------------------------+" << endl;
	cout << vector1 << " / " << constant_value << " = " << vector1/constant_value << endl;
}
/**
* \brief				Vektoru sabit bir sayiyla bolme fonksiyonunun kullanimini test eder, ekranda gosterir,sonuc vektor uzerine yazilir.
* \param vector			Sabit bir sayiyla bolunecek ve sonucun uzerine yazilacagi vektorun tanimlandigi parametre.
* \param constant_value	Vektorun bolunecegi ondalikli sayiyi tanimladigimiz parametre.
*/
void TEST_Constant_DivisionOver(Vector vector, double constant_value)
{
	cout <<"+------------------------+" << endl
		<< "| CONSTANT DIVISION OVER |" << endl
		<< "+------------------------+" << endl;
	cout << "Vector 1 Before Constant Division over: " << vector << endl;
	vector /= constant_value;
	cout << "Vector 1 After Constant Division over : " << vector << endl;
}
/**
* \brief				Vektorun buyukluk(magnitude) fonksiyonunun kullanimini test eder, ekranda gosterir.
* \param vector1		Buyuklugu hesaplanacak vektorun tanimlandigi parametre.
*/
void TEST_Magnitude(Vector& vector1)
{
		cout <<"+----------------+" << endl
			<< "| MAGNITUDE TEST |" << endl
			<< "+----------------+" << endl;
		double result = vector1();
		cout << "MAG( " << vector1 << " ) = " << result << endl;
}
/**
* \brief				Vektor degerlerinin tersini hesaplayan fonksiyonun kullanimini test eder, ekranda gosterir.
* \param vector			Tersi hesaplanacak vektorun tanimlandigi parametre.
*/
void TEST_InverseDirection(Vector vector)
{
		cout <<"+-------------------+" << endl
			<< "| INVERSE DIRECTION |" << endl
			<< "+-------------------+" << endl;
		cout << "Original Vector: " << vector << endl;
		cout << "Inversed Vector: " << !vector << endl;
}

int main(){
		double firstTestData[]{ 1.2, 2.4, 3.6 };
		double secondTestData[]{ 1.8, 2.6, 3.4 };
		Vector v1(3);
		Vector v2(firstTestData, 3);
		Vector v3(firstTestData, 3);
		Vector v4(secondTestData, 3);
		TEST_Input(v1);
		TEST_Output(v1);
		TEST_CopyConstructor(v1);
		TEST_Assignment(v1);
		TEST_Equal(v2, v3);
		TEST_Not_Equal(v3, v4);
		TEST_LESS_THAN(v1, v2);
		TEST_LESS_THAN_OR_EQUAL(v2, v3);
		TEST_GREATER_THAN(v1, v2);
		TEST_GREATER_THAN_OR_EQUAL(v2, v3);
		TEST_Subscription(v1, 1, 5.3);
		TEST_Addition(v1, v2);
		TEST_AdditionOver(v1, v2);
		TEST_Substraction(v1, v2);
		TEST_SubstractionOver(v1, v2);
		TEST_DotProduct(v1, v2);
		TEST_Constant_Multiplication(v1, 2);
		TEST_Constant_MultiplicationOver(v1, 2);
		TEST_Division(v1, v2);
		TEST_DivisionOver(v1, v2);
		TEST_Constant_Division(v1, 2);
		TEST_Constant_DivisionOver(v1, 2);
		TEST_Magnitude(v1);
		TEST_InverseDirection(v1);
		system("pause"); 
		return 0;
}
