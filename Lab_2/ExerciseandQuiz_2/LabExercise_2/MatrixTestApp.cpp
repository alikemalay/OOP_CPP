/*****************************************
* MatrixTestApp.cpp *
*****************************************
* IDE : Visual Studio 2013 *
* Author : Ali Kemal AY *
* Experiment 2: Introduction to C++ - II *
*****************************************/
#include "Matrix.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
/**
* \brief				Ekranda '+','-' ile basliklara cerceve olusturmak icin kullanilir.
* \param length			Cercevenin uzunlugunu alir.
*/
void PrintFrameLine(int length);
/**
* \brief				Basliklari cerceve icinde yazdirir.
* \details				Icerisinde cerceve olusturmak icin farkli fonksiyon kullanilmistir.
* \param message		Ekranda yazdirilacak basligi alir.
*/
void PrintMessageInFrame(const string& message);
/**
* \brief				Satir ve sutun boyutlari girilecek matrisin elemanlarini random atar.
* \details				Aslinda bir isaretciyi arda arda tutulan bir cok isaretcinin ilkini gosterir.
						Bu isaretcilerin gosterdigi degiskenlere random degerler atanir.
* \param row			Dizinin satir sayisini alir.
* \param column			Dizinin sutun sayisini alir.
*/
float** GetRandomData(int row, int column);
/**
* \brief				Genel amaci Matrix_FillByValue'yi test etmektir.
* \details				Diger fonksiyonlarida kullanir.
*/
void TEST_FILL_BY_VALUE();
/**
* \brief				Genel amaci Matrix_FillByData'yi test etmektir.
* \details				Diger fonksiyonlarida kullanir.
*/
void TEST_FILL_BY_DATA();
/**
* \brief				Genel amaci Matrix_Addition'yi test etmektir.
* \details				Diger fonksiyonlarida kullanir.
*/
void TEST_ADDITION();
/**
* \brief				Genel amaci Matrix_Substruction'yi test etmektir.
* \details				Diger fonksiyonlarida kullanir.
*/
void TEST_SUBSTRUCTION();
/**
* \brief				Genel amaci Matrix_Multiplication'yi test etmektir.
* \details				Diger fonksiyonlarida kullanir.
*/
void TEST_MULTIPLICATION_MATRIX();
/**
* \brief				Genel amaci Matrix_Multiplication'yi (skaler deger ile) test etmektir.
* \details				Diger fonksiyonlarida kullanir.
*/
void TEST_MULTIPLICATION_CONSTANT();
/**
* \brief				Genel amaci Matrix_Division'yi (skaler deger ile) test etmektir.
* \details				Diger fonksiyonlarida kullanir.
*/
void TEST_DIVISION();
/**
* \brief				Genel amaci Matrix_Transpose'yi test etmektir.
* \details				Diger fonksiyonlarida kullanir.
*/
void TEST_TRANSPOZE();
/**
* \brief				Genel amaci Matrix_Normalize'yi test etmektir.
* \details				Diger fonksiyonlarida kullanir.
*/
void TEST_NORMALIZE();
int main()
{
	TEST_TRANSPOZE();
	TEST_NORMALIZE();
	TEST_FILL_BY_VALUE();
	TEST_FILL_BY_DATA();
	TEST_ADDITION();
	TEST_SUBSTRUCTION();
	TEST_MULTIPLICATION_MATRIX();
	TEST_MULTIPLICATION_CONSTANT();
	TEST_DIVISION();
	system("pause");
	return 0;
}


void PrintFrameLine(int length)
{
	cout << "+";
	length -= 2;
	for (int i = 0; i < length; i++)
	{
		cout << "-";
	}
	cout << "+" << endl;
}

void PrintMessageInFrame(const string& message)
{
	PrintFrameLine(message.length() + 4);
	cout << "| " << message << " |" << endl;
	PrintFrameLine(message.length() + 4);
}
float** GetRandomData(int row, int column)
{
	float** matrixData = new float*[row];
	for (int i = 0; i < row; i++)
	{
		matrixData[i] = new float[column];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrixData[i][j] = -10 + rand() % (22);
		}
	}
	return matrixData;
}
void TEST_FILL_BY_VALUE()
{
	PrintMessageInFrame("FILL BY VALUE TEST");
	Matrix m1;
	Matrix_Allocate(m1, 2, 3);
	Matrix_FillByValue(m1, 1.34);
	Matrix_Display(m1);
	Matrix_Free(m1);
	Matrix_Allocate(m1, 4, 3);
	Matrix_FillByValue(m1, -2.65);
	Matrix_Display(m1);
	Matrix_Free(m1);
}
void TEST_FILL_BY_DATA()
{
	PrintMessageInFrame("FILL BY DATA TEST");
	Matrix m1;
	Matrix_Allocate(m1, 2, 3);
	Matrix_FillByData(m1, GetRandomData(2, 3));
	Matrix_Display(m1);
	Matrix_Free(m1);
	Matrix_Allocate(m1, 4, 3);
	Matrix_FillByData(m1, GetRandomData(4, 3));
	Matrix_Display(m1);
	Matrix_Free(m1);
}
void TEST_ADDITION()
{
	PrintMessageInFrame("ADDITION TEST");
	Matrix m1, m2, m3;
	Matrix_Allocate(m1, 2, 3);
	Matrix_FillByData(m1, GetRandomData(2, 3));
	cout << "First Matrix:" << endl;
	Matrix_Display(m1);
	Matrix_Allocate(m2, 2, 3);
	Matrix_FillByData(m2, GetRandomData(2, 3));
	cout << "Second Matrix:" << endl;
	Matrix_Display(m2);
	Matrix_Addition(m1, m2, m3);
	cout << "Result Matrix:" << endl;
	Matrix_Display(m3);
	Matrix_Free(m1);
	Matrix_Free(m2);
	Matrix_Free(m3);
}

void TEST_SUBSTRUCTION()
{
	PrintMessageInFrame("SUBSTRUCTION TEST");
	Matrix m1, m2, m3;
	Matrix_Allocate(m1, 2, 3);
	Matrix_FillByData(m1, GetRandomData(2, 3));
	cout << "First Matrix:" << endl;
	Matrix_Display(m1);
	Matrix_Allocate(m2, 2, 3);
	Matrix_FillByData(m2, GetRandomData(2, 3));
	cout << "Second Matrix:" << endl;
	Matrix_Display(m2);
	Matrix_Substruction(m1, m2, m3);
	cout << "Result Matrix:" << endl;
	Matrix_Display(m3);
	Matrix_Free(m1);
	Matrix_Free(m2);
	Matrix_Free(m3);
}
void TEST_MULTIPLICATION_MATRIX()
{
	PrintMessageInFrame("MATRIX MULTIPLICATION TEST");
	Matrix m1, m2, m3;
	Matrix_Allocate(m1, 2, 3);
	Matrix_FillByData(m1, GetRandomData(2, 3));
	cout << "First Matrix:" << endl;
	Matrix_Display(m1);
	Matrix_Allocate(m2, 3, 2);
	Matrix_FillByData(m2, GetRandomData(3, 2));
	cout << "Second Matrix:" << endl;
	Matrix_Display(m2);
	Matrix_Multiplication(m1, m2, m3);
	cout << "Result Matrix:" << endl;
	Matrix_Display(m3);
	Matrix_Free(m1);
	Matrix_Free(m2);
	Matrix_Free(m3);
}
void TEST_TRANSPOZE()
{
	PrintMessageInFrame(" TRANSPOZE TEST ");
	Matrix m1, r1;
	Matrix_Allocate(m1, 2, 3);
	Matrix_FillByData(m1, GetRandomData(2, 3));
	cout << "First Matrix:" << endl;
	Matrix_Display(m1);
	Matrix_Transpose(m1,r1);
	cout << "Second Matrix:" << endl;
	Matrix_Display(r1);
	Matrix_Free(m1);
	Matrix_Free(r1);
}

void TEST_NORMALIZE()
{
	PrintMessageInFrame(" NORMALIZE TEST ");
	Matrix m1, r1;
	Matrix_Allocate(m1, 2, 3);
	Matrix_FillByData(m1, GetRandomData(2, 3));
	cout << "First Matrix:" << endl;
	Matrix_Display(m1);
	Matrix_Normalize(m1, r1);
	cout << "Second Matrix:" << endl;
	Matrix_Display(r1);
	Matrix_Free(m1);
	Matrix_Free(r1);
}
void TEST_MULTIPLICATION_CONSTANT()
{
	PrintMessageInFrame("SCALAR MULTIPLICATION TEST");
	Matrix m1, m2;
	Matrix_Allocate(m1, 2, 3);
	Matrix_FillByData(m1, GetRandomData(2, 3));
	Matrix_Display(m1);
	float scalar = 3;
	Matrix_Multiplication(m1, scalar, m2);
	cout << "Result Matrix:" << endl;
	Matrix_Display(m2);
	Matrix_Free(m1);
	Matrix_Free(m2);
}
void TEST_DIVISION()
{
	PrintMessageInFrame("SCALAR DIVISION TEST");
	Matrix m1, m2;
	Matrix_Allocate(m1, 2, 3);
	Matrix_FillByData(m1, GetRandomData(2, 3));
	Matrix_Display(m1);
	float scalar = 3;
	Matrix_Division(m1, scalar, m2);
	cout << "Result Matrix:" << endl;
	Matrix_Display(m2);
	Matrix_Free(m1);
	Matrix_Free(m2);
}