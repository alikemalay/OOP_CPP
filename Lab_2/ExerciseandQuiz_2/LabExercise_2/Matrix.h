/*****************************************
* Matrix.h *
*****************************************
* IDE : Visual Studio 2015 *
* Author : Ali Kemal AY *
* Experiment 2: Introduction to C++ - II *
*****************************************/
/**
* \struct Matrix		
* \brief				Iki boyutlu dizi(matris) yapi.
* \details				Varsayilan olarak satir ve sutun sayilari -1' dizi adres tutucusu 0 olarak tanimlanmistir.
*/
#pragma once
struct Matrix{
	int rowSize = -1;
	int columnSize = -1;
	float** data = 0;
};
/**
* \brief				Girilen satir ve sutun sayisi miktarinca matris yapisina heap'den yer ayrilir.
* \details				Matrix_Allocate void fonksiyondur.Geriye bir deger donmez.
* \param matrix			Heap'de yer ayrilacak matrisi alir.
* \param rowSize		Dizinin satir sayisini alir.
* \param columnSize		Dizinin sutun sayisini alir. 
*/
void Matrix_Allocate(Matrix& matrix, int rowSize, int columnSize);
/**
* \brief				Heap'de yer ayrilmis matrisi adresleri ve adres tutuculari siler.
* \details				Matrix_Free void fonksiyondur.Geriye bir deger donmez.		   
* \param matrix			Heap'den silinecek matrisi alir.
*/
void Matrix_Free(Matrix& matrix);
/**
* \brief				Dizinin tum elemanlarina value degiskeninin degeri atilir.
* \param matrix			Elemanlarina deger atanacak matris. 
* \param value			Tum elemanlara atanacak deger.
*/
void Matrix_FillByValue(Matrix& matrix, float value);
/**
* \brief				Iki diziyi elemansal olarak birbirine esitler.
* \param matrix			Elemanlari digeri tarafindan eslenecek matris.
* \param data			Elemanlarini diger diziye esleyecek matris.
*						bir isaretci birden cok isarecetlerin baslangicini gosterir. 
*						Isaretcilerde dizinin sutunlarini gosterir.
*						Sutun olmasinin sebebi kod yazimindan dolayi istersek satir olacak sekilde tasarlayabiliriz.	
*/
void Matrix_FillByData(Matrix& matrix, float** data);
/**
* \brief				Gelen diziyi ekranda yazdirir.
* \details				Matrix_Display void fonksiyondur.Geriye bir deger donmez.
* \param matrix			Ekranda gosterilecek matrisi alir.
*						Amacimiz sadece ekranda gostermek oldugu icin const ile sabitledik.
*/
void Matrix_Display(const Matrix& matrix);
/**
* \brief				Birinci matrisle ikinci matrisi toplayip sonuc matrisine atar.
* \details				Gelen ilk iki matrisi sadece toplamada kullanacagimiz icin const ile sabitledik.
*						Degisim sadece son matrisde(result) olacak.
* \param matrix_left	Toplamada ilk kullanilacak matris.
* \param matrix_right	Toplamada ikinci kullanilacak matris.
* \param result			Toplamin sonuclarini gosterecek matris.
*/
void Matrix_Addition(const Matrix& matrix_left, const Matrix& matrix_right, Matrix&
	result);
/**
* \brief				Birinci matrisden ikinci matrisi cikarip sonuc matrisine atar.
* \details				Gelen iki matrisi sadece cikarmada kullanacagimiz icin const ile sabitledik.
*						Degisim sadece son matrisde(result) olacak.
* \param matrix_left	Cikarmada ilk kullanilacak matris.
* \param matrix_right	Cikarmada ikinci kullanilacak matris.
* \param result			Cikarmanin sonuclarini gosterecek matris.
*/
void Matrix_Substruction(const Matrix& matrix_left, const Matrix& matrix_right, Matrix&
	result);
/**
* \brief				Iki matrisin carpma islemlerini gerceklestirir ve bunu baska matrisde gosterir.
* \details				Gelen ilk iki matrisi sadece carpmada kullanacagimiz icin const ile sabitledik.
*						Degisim sadece son matrisde(result) olacak.
* \param matrix_left	Carpmada ilk kullanilacak matris.
* \param matrix_right	Carpmada ikinci kullanilacak matris.
* \param result			Carpmanin sonuclarini gosterecek matris.
*/
void Matrix_Multiplication(const Matrix& matrix_left, const Matrix& matrix_right, Matrix&
	result);
/**
* \brief				Dizinin tum elemanlarini skaler bir deger ile carpar.
* \details				Gelen ilk matrisi sadece carpmada kullanacagimiz icin const ile sabitledik.
*						Degisim sadece son matrisde(result) olacak.
* \param matrix_left	Carpmada kullanilacak matris.
* \param scalarValue	Dizinin her bir elemaninin carpilacagi skaler deger.
* \param result			Carpmanin sonuclarini gosterecek matris.
*/
void Matrix_Multiplication(const Matrix& matrix_left, float scalarValue, Matrix& result);
/**
* \brief				Dizinin tum elemanlarini skaler bir deger ile boler.
* \details				Gelen ilk matrisi sadece bolmede kullanacagimiz icin const ile sabitledik.
*						Degisim sadece son matrisde(result) olacak.
* \param matrix_left	Bolmede kullanilacak matris.
* \param scalarValue	Dizinin her bir elemaninin bolunecegi skaler deger.
* \param result			Bolmenin sonuclarini gosterecek matris.
*/
void Matrix_Division(const Matrix& matrix_left, float scalarValue, Matrix& result);
/**
* \brief				Dizinin transpozunu alip baska matrisde gosterir.
* \details				Gelen ilk matrisde degisim olmayacagi icin const ile sabitledik.
*						Degisim sadece son matrisde(result) olacak.
* \param matrix			Transpozu alinacak matris.
* \param result			Matrisin transpozunu tutan diger matris.
*/
void Matrix_Transpose(const Matrix& matrix, Matrix& result);
/**
* \brief				Bir diziyi, tum elemanlarinin karelerinin toplaminin karekokune bolup baska bir dizide gostermek.
* \details				Bu olaya normalize denir.
* \param matrix			Normalize edilecek matris.
* \param result			Matrisin normalize edilmis halini gosteren diger matris.
*/
void Matrix_Normalize(const Matrix& matrix, Matrix& result);
