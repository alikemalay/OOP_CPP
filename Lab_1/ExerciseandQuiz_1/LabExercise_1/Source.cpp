/*****************************************
* Source.cpp *
*****************************************
* IDE : Visual Studio 2013 *
* Author : Ali Kemal AY *
* Experiment 1: Introduction to C++ - I *
*****************************************/
#include <iostream>
#include <time.h>  
#include <iomanip> 
#include <string> 
using namespace std;
bool TakeUserInput(int& data_size, int& min_number, int& max_number);
int* CreateDataSet(int dataSize, int min_number, int max_number);
double CalculateMean(int* data_array, int data_size);
double CalculateVariance(int* data_array, int data_size, double mean);
double CalculateStandartDeviation(int* data_array, int data_size, double mean);
double* CalculateZScore(int* data_array, int data_size, double mean, double std_deviation);
void PrintMessage(const string& message);
void PrintDataArray(int* data_array, int data_size);
void PrintMean(double mean);
void PrintVariance(double variance);
void PrintStandartDeviation(double std_deviation);
void PrintZScoreArray(double* zscore, int data_size);
double* CalculateTScore(int* data_array, int data_size, double mean, double std_deviation);
void PrintTScoreArray(double* tscore, int data_size);
int* FindNumbersForMultiples(int* data_array, int data_size, int multipleCount);
void PrintNumbersForMarkedIndexes(int* data_array, int* marked_indexes, int data_size);

int main()
{
	srand(time(NULL));					
	int dataSize, minNumber, maxNumber; 
	if (!TakeUserInput(dataSize, minNumber, maxNumber))
	{
		PrintMessage("TERMINATED BY USER!"); 
		system("pause");
		return 1; 
	}
	int* DataArray = CreateDataSet(dataSize, minNumber, maxNumber); 
	PrintDataArray(DataArray, dataSize);
	int* MultipleDataArray = FindNumbersForMultiples(DataArray, dataSize,3);
	PrintNumbersForMarkedIndexes(DataArray, MultipleDataArray, dataSize);
	double mean = CalculateMean(DataArray, dataSize);
	PrintMean(mean);
	double variance = CalculateVariance(DataArray, dataSize, mean);
	PrintVariance(variance);
	double stdDeviation = CalculateStandartDeviation(DataArray, dataSize, mean);
	PrintStandartDeviation(stdDeviation);
	double* zscore = CalculateZScore(DataArray, dataSize, mean, stdDeviation);
	PrintZScoreArray(zscore, dataSize);
	double* tscore = CalculateTScore(DataArray, dataSize, mean, stdDeviation);
	PrintTScoreArray(tscore, dataSize);
	system("pause");
	return 0;
}

/** \brief Kullanicidan olusacak dizinin bilgilerini alir.
* \details TakeUserInput bool fonksiyondur, true veya false degeri doner.Kullanicidan bir dizi boyutu alir.
*		   Elemanlari rastgele olusacak bu dizinin en kucuk ve en buyuk sayi
*		   araligini bu fonksiyonda kullanici girer.
*                                    Dizi boyutu 0 girildiginde false doner, buda sonlandirma mesajini(main'deki) tetikler.
* \param data_size dizi boyutu belirtir.
* \param min_number olabilecek en kucuk sayiyi alir.
* \param max_number olabilecek en buyuk sayiyi alir.
* \return boolean tipinde bir deger doner. Donen deger ile sonlandirma mesaji ekranda yazilip
*		  yazilmayacagina karar verilir.
*/
bool TakeUserInput(int& data_size, int& min_number, int& max_number)
{
	cout << "+------------+\n| USER INPUT |\n+------------+\n  Enter the 'Data Size' (0 for terminate program) : ";
	cin >> data_size;
	if (data_size == 0)
		return false;
	else
	{
		cout << "  Enter the 'Minimum Number' : ";
		cin >> min_number;
		cout << "  Enter the 'Maximum Number' : ";
		cin >> max_number;
		return true;
	}
}

/** 
* \brief Gelen mesaji ekranda yazdirir.
* \details PrintMessage void fonksiyondur.Geriye bir deger donmez. 
* String degiskenin degismesini istemedigimiz icin const ile sabitledik.
* \param message Ekranda yazdiracagimiz mesaji alir. 
*				 Const ile fonksiyon icerisinde message'nin degerini degistirilemez hale getirdik.
*/
void PrintMessage(const string& message)
{
	cout << message << "\n";
}


/** 
* \brief Dizinin elemanlarini min-max araliginda rastgele olusturur.
* \details CreateDataSet pointer(int) fonksiyondur, bir int dizisinin baslangic degerinin adresini doner.
*						 Dizi eleman boyutunca ram'dan yer alinarak olusturulur.
*						 Dondurulen dizi diger(PrintDataArray v.b) fonksiyonlarda kullanilir.
*						 rand() fonksiyonu kullanilarak rastgele degerler atanir.
* \param dataSize dizi boyutu belirtir.
* \param min_number dizi elemanlarinin olabilecek en kucuk sayi degerini alir.
* \param max_number dizi elemanlarinin olabilecek en buyuk sayi degerini alir..
* \return arrayPointer olusturulan dizi diger fonksiyonlarda kullanilmak icin dondurulur.
*/
int* CreateDataSet(int dataSize, int min_number, int max_number)
{
	int i;
	int* arrayPointer = new int[dataSize];
	for (i = 0; i < dataSize; i++)
	{
		arrayPointer[i] = min_number + rand() % (max_number - min_number + 1);
	}
	return arrayPointer;
}

/** \brief Alinan diziyi ekranda yazdirir.
* \details PrintDataArray void fonksiyondur, bir deger dondurmez.Iki parametresi vardir.
*		   setw(22) ile 22 karakterlik alan icerisinde her bir dizi elemani yazdirilir.
* \param data_array yazdiralacak diziyi tutar.
* \param data_size dizi boyutu belirtir.
*/
void PrintDataArray(int* data_array, int data_size)
{	
	cout << "+----------------------+\n|      DATA ARRAY      |\n+----------------------+\n";
	int i;
	for (i = 0; i < data_size; i++)
	{
		cout <<"|"<< setw(22)
			 << *data_array << "|\n";
		*data_array++;
	}
	cout << "+----------------------+\n";
}

/** \brief Belirli bir sayinin dizi icerisindeki katlarini bulur.
* \details FindNumbersForMultiples pointer(int) fonksiyondur, eger dizinin elemani 3.parametrenin katiysa
*				       			    yeni diziye 1 degilse 0 degeri atanir. Olusturulan dizi dondurulur.
*					                Bu dizi ekranda yazdirma islemi yaptirilir.
* \param data_array icinde kat aranacak dizidir.
* \param data_size kat aranacak dizi boyutudur.
* \param multipleCount hangi sayinin kati olacagi belirtilir.
* \return multiplearray oluþturulan dizi PrintNumbersForMarkedIndexes kullanilmak icin geri dondurulur. 
*/
int* FindNumbersForMultiples(int* data_array, int data_size, int multipleCount)
{	
	int i;
	int* multiplearray = new int[data_size];
	
	for (i = 0; i < data_size; i++)
	{ 
		if ((data_array[i]%multipleCount)==0)
		{
			multiplearray[i] = 1;
		}
		else
		{
			multiplearray[i] = 0;
		}
	}
	return multiplearray;
}
/** \brief Alinan ikinci dizinin 1 degerine denk gelen birinci dizi elemanlarini yazdirir.
* \details PrintNumbersForMarkedIndexes void fonksiyondur, bir deger dondurmez.Uc parametresi vardir. 
*		   setw(22) ile 22 karakterlik alan icerisinde birinci dizinin,
		   ikinci dizide 1 degerine denk gelen indisli elemanlari yazdirilir.
* \param data_array elemanlari yazdirilacak dizidir.
* \param marked_indexes elemanlarinin 1 degerine denk geldigini kontrol edilecek dizidir.
* \param data_size dizi boyutu belirtir.
*/
void PrintNumbersForMarkedIndexes(int* data_array, int* marked_indexes, int data_size)
{
	cout << "+----------------------+\n|      MARKED DATA     |\n+----------------------+\n";
	int i;
	for (i = 0; i < data_size; i++)
	{
		if (marked_indexes[i] == 1)
		{
			cout << "|" << setw(22) 
				 << *data_array << "|\n";
		}
		*data_array++;
		
	}
	cout << "+----------------------+\n";
}

/** \brief Dizi elemanlarinin ortalamasini hesaplar.
* \details CalculateMean double fonksiyondur, hesaplanan ortalamayi dondurur.
* \param data_array elemanlarinin ortalamasi hesaplanacak dizidir.
* \param data_size dizi boyutu belirtir.
* \return Diger fonksiyonlarda kullanmak icin ortalamayi(mean) dondurur.
*/
double CalculateMean(int* data_array, int data_size)
{
	int i;
	double sum = 0.0, mean;
	for (i = 0; i < data_size; i++)
	{
		sum +=*data_array;
		*data_array++;
	}
	return mean = sum / data_size;
}

/** \brief Hesaplanan ortalamayi ekranda yazdirir.
* \details PrintMean void fonksiyondur, bir deger dondurmez.Tek parametresi vardir.
*		   setw(22) ile 22 karakterlik alan icerisinde hesaplanan ortalama yazdirilir.
* \param mean ortalamayi tutar, ekranda yazdirmak icin.
*/
void PrintMean(double mean)
{
	cout << "+----------------------+\n|         MEAN         |\n+----------------------+\n"
		 << "|" << setw(22) << mean << "|\n"
		 << "+----------------------+\n";
}

/** \brief Dizi elemanlari ile varyans degeri hesaplar.
* \details Varyans hesaplamak icin ozel formul vardir.
*          CalculateVariance double fonksiyondur, hesaplanan varyans degerini dondurur.
* \param data_array elemanlari ile varyans hesaplanacak dizidir.
* \param data_size dizi boyutu belirtir.
* \param mean dizi elemanlarinin ortalamasini tutar.
* \return Diger fonksiyonlarda kullanmak icin varyans degerini dondurur.
*/
double CalculateVariance(int* data_array, int data_size, double mean)
{
	
	int i;
	double variance,sum=0.0;
	for (i = 0; i < data_size; i++)
	{
		sum += pow((*data_array - mean),2.0);
		*data_array++;
	}
	return variance = sum / data_size;
}


/** \brief Hesaplanan varyans degerini ekranda yazdirir.
* \details PrintVariance void fonksiyondur, bir deger dondurmez.Tek parametresi vardir.
*		   setw(22) ile 22 karakterlik alan icerisinde varyans degeri yazdirilir.
* \param variance varyansý tutar, ekranda yazdirmak icin.
*/
void PrintVariance(double variance)
{
	cout << "+----------------------+\n|       VARIANCE       |\n+----------------------+\n" 
		 << "|" << setw(22) << variance << "|\n"
		 << "+----------------------+\n";
}

/** \brief Dizi elemanlari ile standart sapmayi hesaplar.
* \details Standart sapmayi hesaplamak icin ozel formul vardir.
*          CalculateStandartDeviation double fonksiyondur, hesaplanan standart sapma degerini dondurur.
* \param data_array elemanlari ile standart sapma hesaplanacak dizidir.
* \param data_size dizi boyutu belirtir.
* \param mean dizi elemanlarinin ortalamasini tutar.
* \return Diger fonksiyonlarda kullanmak icin standart sapma degerini dondurur.
*/
double CalculateStandartDeviation(int* data_array, int data_size, double mean)
{
	int i;
	double standartDeviation, sum = 0.0;
	for (i = 0; i < data_size; i++)
	{
		sum += pow((*data_array - mean), 2.0);
		*data_array++;
	}
	return standartDeviation = sqrt(sum / data_size);
}

/** \brief Hesaplanan standart sapma degerini ekranda yazdirir.
* \details PrintStandartDeviation void fonksiyondur, bir deger dondurmez.Tek parametresi vardir.
*		   setw(22) ile 22 karakterlik alan icerisinde standart sapmayi yazdirir.
* \param std_deviation standart sapmayi tutar, ekranda yazdirmak icin.
*/
void PrintStandartDeviation(double std_deviation)
{

	cout << "+----------------------+\n|  STANDART DEVIATION  |\n+----------------------+\n"
		 << "|" << setw(22) << setprecision(4) << std_deviation << "|\n"
		 << "+----------------------+\n";
}

/** \brief Dizi elemanlari ile z-skor dizisinin elemanlarini hesaplar.
* \details Z-skoru hesaplamak icin ozel formul vardir.
*          CalculateZScore pointer(double) fonksiyondur, hesaplanan z-skor dizisini dondurur.
* \param data_array elemanlari ile z-skor dizisini olusturulacak dizidir.
* \param data_size dizi boyutu belirtir. Dongunun kac kez calisacagini belirtmek icinde kullanilir.
* \param mean dizi elemanlarinin ortalamasini tutar.
* \param std_deviation dizi elemanlari ile hesaplanmis standart sapmayi tutar.
* \return Diger fonksiyonlarda kullanmak icin z-skor dizisini dondurur.
*/
double* CalculateZScore(int* data_array, int data_size, double mean, double std_deviation)
{
	int i;
	double *arrayZScore = new double[data_size];
	for (i = 0; i < data_size; i++)
	{
		arrayZScore[i] = ((*data_array - mean) / std_deviation);
		*data_array++;
	}
	return arrayZScore;
}
/** \brief Hesaplanan z-skor dizisini ekranda yazdirir.
* \details PrintZScoreArray void fonksiyondur, bir deger dondurmez.Iki parametresi vardir.
*		   setw(22) ile 22 karakterlik alan icerisinde z-skor dizisini yazar.
*		   setprecision(5) ile de tam ve ondalik kisim maksimum 5 hane yazar 
* \param zscore hesaplanan z-skor dizisinin elemanlarini tutar.
* \param data_size dizi boyutu belirtir. Dongunun kac kez calisacagini belirtmek icinde kullanilir.
*/
void PrintZScoreArray(double* zscore, int data_size)
{	
	int i;
	cout << "+----------------------+\n|        Z-SCORE       |\n+----------------------+\n";
	for (i = 0; i < data_size; i++)
	{
		cout << "|" << setw(22) << setprecision(5) << *zscore << "|\n";
		*zscore++;
	}
	cout << "+----------------------+\n";
}
/** \brief Dizi elemanlari ile t-skor dizisinin elemanlarini hesaplar.
* \details T-skoru hesaplamak icin ozel formul vardir.
*          CalculateTScore pointer(double) fonksiyondur, hesaplanan t-skor dizisini dondurur.
* \param data_array elemanlari ile t-skor dizisini olusturulacak dizidir.
* \param data_size dizi boyutu belirtir. Dongunun kac kez calisacagini belirtmek icinde kullanilir.
* \param mean dizi elemanlarinin ortalamasini tutar.
* \param std_deviation dizi elemanlari ile hesaplanmis standart sapmayi tutar.
* \return Diger fonksiyonlarda kullanmak icin t-skor dizisini dondurur.
*/
double* CalculateTScore(int* data_array, int data_size, double mean, double std_deviation)
{
	int i;
	double *arrayTScore = new double[data_size];
	for (i = 0; i < data_size; i++)
	{
		arrayTScore[i] = (10*((*data_array - mean) / std_deviation))+50;
		*data_array++;
	}
	return arrayTScore;
}

/** \brief Hesaplanan t-skor dizisini ekranda yazdirir.
* \details PrintTScoreArray void fonksiyondur, bir deger dondurmez.Iki parametresi vardir.
*		   setw(22) ile 22 karakterlik alan icerisinde t-skor dizisini yazar.
*		   setprecision(5) ile de tam ve ondalik kisim maksimum 5 hane yazar
* \param tscore hesaplanan t-skor dizisinin elemanlarini tutar.
* \param data_size dizi boyutu belirtir. Dongunun kac kez calisacagini belirtmek icinde kullanilir.
*/
void PrintTScoreArray(double* tscore, int data_size)
{
	int i;
	cout << "+----------------------+\n|        T-SCORE       |\n+----------------------+\n";
	for (i = 0; i < data_size; i++)
	{
		cout << "|" << setw(22) << setprecision(5) << *tscore << "|\n";
		*tscore++;
	}
	cout << "+----------------------+\n" ;
}

