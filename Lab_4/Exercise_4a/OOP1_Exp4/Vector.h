/// Vector.h

#include <iostream>

using namespace std;

/** \brief							Bir vektor sinifi.
* \author							Ali Kemal AY - 152120151079
*/
class Vector {
	/**
	* \brief						>> operatoru ile vektore veri girisleri yapilir. 
	*/
	friend istream &operator>>(istream &, Vector&);
	/**
	* \brief						<< operatoru ile vektorun verileri yazdirilir.
	*/
	friend ostream &operator<<(ostream &, const Vector &);
	
public:
	/**
	* \brief						Yapici fonksiyonumuzda vektorumuzun boyutu atanir, varsayilan 3'tur.
	* \param dimension				Vektor boyutu bu parametreye bagli olup yapici fonksiyonun
	*								parametresiz kullanimi durumunda 3 ya da parametreli tanimlandigi deger atanir. 
	*/
	Vector(int = 3);
	/**
	* \brief						Yapici fonksiyonumuzda vektorumuzun boyutu ve elemanlari atanir.
	* \param data					Ondalikli sayi dizisini vektorun verilerine esitler.	
	* \param dimension				Vektor boyutu bu parametreye atanilan deger ile belirlenir.
	*/
	Vector(double data[] , int dimension);
	/**
	* \brief						Kopya yapici fonksiyonumuzda onceden olusturulmus bir vektorden kopyalanarak
	*								yeni bir vektor nesnesi elde etmeye yarar.
	* \param copyVector				Parametreye girilen vektorun degerleri yeni olusacak vektorun degerlerine esitlenir.
	*								Kopyalanacak vektorde bir degisiklik yapmayi hedeflemedigimiz icin const tanimladik.
	*/
	Vector(const Vector &copyVector);
	/**
	* \brief						Yikici fonksiyonumuzda, olusturulan vektorler silinir.
	*/
	~Vector();
	/**
	* \brief						Vektorun boyutunu veren fonksiyonumuz.
	* \return						Vektorun boyutunu tam sayi seklinde dondurur.
	*/
	int getDimension();
	/**
	* \brief						Bu fonksiyon ile iki vektoru = operatoru ile birbirine esitleyebiliriz.
	* \param copyVector				Kopyalanalicak vektoru tanimladigimiz parametredir ve
	*								bu vektorde degisiklik olmasi gereksiz oldugu icin const tanimladik.
	* \return						Kopyalanmis vektoru dondurur.
	*/
	const Vector &operator=(const Vector &copyVector);
	/**
	* \brief						Bu fonksiyon == operatorunun kullanimi ile bize esit mi sartinin sonucunu gosterir.
	* \details						Karsilastirma iki vektor nesnesi arasinda olmalidir.
	* \param secondOperand			Karsilastirilacak diger vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Eger iki vektor birbirine esitse bize true degerini, degilse false dondurur.
	*/
	bool operator==(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon != operatorunun kullanimi ile bize esit degilmi sartinin sonucunu gosterir.
	* \details						Karsilastirma iki vektor nesnesi arasinda olmalidir.
	* \param secondOperand			Karsilastirilacak diger vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Eger iki vektor birbirine esit degilse bize true degerini, esitse false dondurur.
	*/
	bool operator!=(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon < operatorunun kullanimi ile bize kucuk mu sartinin sonucunu gosterir.
	* \details						Karsilastirma iki vektor nesnesi arasinda olmalidir.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Eger sol taraftaki vektor sag taraftakinden kucuk ise
	*								bize true degerini, degilse false dondurur.
	*/
	bool operator<(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon <= operatorunun kullanimi ile bize kucuk esit mi sartinin sonucunu gosterir.
	* \details						Karsilastirma iki vektor nesnesi arasinda olmalidir.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Eger sol taraftaki vektor sag taraftakinden kucuk veya esit ise
	*								bize true degerini, degilse false dondurur.
	*/
	bool operator<=(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon > operatorunun kullanimi ile bize buyuk mu sartinin sonucunu gosterir.
	* \details						Karsilastirma iki vektor nesnesi arasinda olmalidir.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Eger sol taraftaki vektor sag taraftakinden buyuk ise
	*								bize true degerini, degilse false dondurur.
	*/
	bool operator>(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon >= operatorunun kullanimi ile bize buyuk esitmi sartinin sonucunu gosterir.
	* \details						Karsilastirma iki vektor nesnesi arasinda olmalidir.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Eger sol taraftaki vektor sag taraftakinden buyuk veya esit ise
	*								bize true degerini, degilse false dondurur.
	*/
	bool operator>=(const Vector &secondOperand);
	/**
	* \brief						[] operatoru ile vektorun belirtilen indisdeki verisini elde etmeye yarayan fonksiyondur.
	* \param index					Hangi indisdeki veriye ulasmak istedigimizi belirttigimiz parametredir. 
	* \return						Belirtilen indisdeki ondalikli sayiyi donderir.
	*/
	double &operator[](int index);
	/**
	* \brief						[] operatoru ile vektorun belirtilen indisdeki verisini elde etmeye yarayan fonksiyondur.
	* \param index					Hangi indisdeki veriye ulasmak istedigimizi belirttigimiz parametredir
	* \return						Belirtilen indisdeki ondalikli sayiyi donderir.
	*/
	const double &operator[](int index) const;
	/**
	* \brief						Bu fonksiyon iki vektorun + operatoru ile toplanmasini saglar.
	* \details						Sonucu yeni bir vektorde tutar.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Iki vektorun toplamini iceren yeni bir vektor dondurur.
	*/
	Vector operator+(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon += operatoru ile bir vektorun degerlerinin ustune 
	*								baska bir vektorun degerlerinin eklenmesini saglar.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Iki vektorun toplamini iceren += operatorunun solundaki vektoru dondurur.
	*/
	Vector &operator+=(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon iki vektorun - operatoru ile cikarilmasini saglar.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Iki vektorun farkini iceren yeni bir vektor dondurur.
	*/
	Vector operator-(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon -= operatoru ile bir vektorun degerlerininin ustune
	*								diger vektorden farki alinmis halini yazar.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Iki vektorun farkini iceren -= operatorunun solundaki vektoru dondurur.
	*/
	Vector &operator-=(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon * operatoru ile iki vektorun degerlerinin 
	*								birbiriyle carpiminin toplamini dondurur.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Iki vektorun elemanlarinin birbiriyle carpimlarinin toplamini tutan ondalikli degiskeni dondurur.	
	*/
	double operator*(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon * operatoru ile bir vektorun degerlerini sabit bir degiskenle carpar.
	*								Sonucu yeni bir vektorde tutar.
	* \param multiplier				Vektorun degerlerinin carpilacagi sayiyi tanimladigimiz parametre.
	*								Bu degiskende bir degisiklik yapilmasi gereksiz oldugu icin
	*								const olarak tanimladik.
	* \return						Carpimi elde ettigimiz yeni bir vektor nesnesi dondurur.
	*/
	Vector operator*(const double multiplier);
	/**
	* \brief						Bu fonksiyon *= operatoru ile bir vektorun degerlerini sabit bir degiskenle carpar.
	*								Sonucu carpilan vektorun ustune yazar.
	* \param multiplier				Vektorun degerlerinin carpilacagi sayiyi tanimladigimiz parametre.
	*								Bu degiskende bir degisiklik yapilmasi gereksiz oldugu icin
	*								const olarak tanimladik.
	* \return						Carpimin ustune yazildigi vektor nesnesini dondurur.
	*/
	Vector operator*=(const double multiplier);
	/**
	* \brief						Bu fonksiyon / operatoru ile iki vektorun degerleri arasinda bolme islemi yapmamizi saglar.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Iki vektorun bolumunu tutan yeni vektoru dondurur.
	*/
	Vector operator/(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon /= operatoru ile iki vektor degerleri arasinda bolme 
	*								yaptiktan sonra esitlemeyi saglar.Sonucu bolunen vektorun ustune yazar.
	* \param secondOperand			Operatorun sag tarafindaki vektoru tanimladigimiz parametre,
	*								Bu vektorde bir degisiklik yapilmasini ve yeniden yaratilmasi gereksiz oldugu icin
	*								const ve referans olarak tanimladik.
	* \return						Bolumun ustune yazildigi vektor nesnesini dondurur.
	*/
	Vector &operator/=(const Vector &secondOperand);
	/**
	* \brief						Bu fonksiyon / operatoru ile yeni bir vektorde, bir vektorun bir sabit 
	*								ondalikli sayiya bolumunu tutar.
	* \param divider				Vektorun degerlerinin bolunecegi sayiyi tanimladigimiz parametre.
	*								Bu degiskende bir degisiklik yapilmasi gereksiz oldugu icin
	*								const olarak tanimladik.
	* \return						Bolme islemi sonucunu tutan yeni vektor nesnesini dondurur.
	*/
	Vector operator/(const double divider);
	/**
	* \brief						Bu fonksiyon /= operatoru ile bir vektorun degerlerinin ustune bir sabit
	*								ondalikli sayiyla bolumunu yazar.
	* \param divider				Vektorun degerlerinin bolunecegi sayiyi tanimladigimiz parametre.
	*								Bu degiskende bir degisiklik yapilmasi gereksiz oldugu icin
	*								const olarak tanimladik.
	* \return						Bolumun ustune yazildigi vektor nesnesini dondurur.
	*/
	Vector &operator/=(const double divider);
	/**
	* \brief						Bu fonksiyon () operatoru ile bir vektorun buyuklugunu(magnitude) hesaplar.
	* \return						Hesaplanan ondalikli buyukluk degerini dondurur.
	*/
	double operator()();
	/**
	* \brief						Bu fonksiyon ! operatoru ile bir vektorun degerlerinin tersini hesaplar.
	* \return						Hesaplanan vektoru dondurur.
	*/
	Vector &operator!();
private:
	/**
	* \brief						Vektor verilerinin adreslerini tutar.
	*/
	double* m_data;
	/**
	* \brief						Vektor veri boyutunu tutar.
	*/
	int m_dimension;
};
