
/** \brief							Bu sinif rastgele rakam veya harf uretir.
* \author Ali Kemal AY - 152120151079
*/
#pragma once
class RandomNumberGenerator
{
public:
	/** \brief						Bir enum tipi. Rakamlarin ondalikli hane sayisini belirlemek amaciyla tipler tanimladik.
	*/
	enum Precision { 
	ONE,							/**< Hane sayisi 1 icin */
	TWO,							/**< Hane sayisi 2 icin  */
	THREE,							/**< Hane sayisi 3 icin  */
	FOUR							/**< Hane sayisi 4 icin  */
	};
	/** \brief						Bir enum tipi. Karakter tipimizin buyuk kucuk harf yada rakam mi olacagini 
	*								belirlemek icin tipler tanimladik.
	*/
	enum CharacterType { 
	UPPER_LETTER,					/**< Buyuk harf icin */
	LOWER_LETTER,					/**< Kucuk harf icin*/
	DIGIT							/**< Rakam icin*/
	};
	/**
	* \brief						Yapici fonksiyonumuz burada random sayi uretmek icin
	*								rand() fonksiyonu kullaniyoruz.
	*/
	RandomNumberGenerator();
	/**								
	* \brief						Yikici fonksiyonumuz, burada sinif silinirken 
	*								silindigine dair mesaj yazdiriyor ekrana.
	*/ 
	virtual ~RandomNumberGenerator();
	/**
	* \brief						Alt ve ust sinir araliginda rastgele sayi ureten fonksiyon.
	* \param lowerBound				Uretilecek sayilarin alt araligini belirlemek icin girilen deger.								
	* \param upperBound				Uretilecek sayilarin ust araligini belirlemek icin girilen deger.
	* \return						Rastgele uretilmis tam sayi doner.
	*/
	int getRandomInteger(int lowerBound, int upperBound);
	/**
	* \brief						Alt ve ust sinir araliginda rastgele sayi ureten fonksiyon.
	* \details						Bu fonksiyonun farki ondalikli sayi dondurmesi ve bu ondalikli
	*								sayinin ondalik kismindaki hane sayisini duzenleyebilmemizdir.
	* \param lowerBound				Uretilecek sayilarin alt araligini belirlemek icin girilen deger.
	* \param upperBound				Uretilecek sayilarin ust araligini belirlemek icin girilen deger.
	* \param precision				Ondalik kismindaki hane sayisini burada belirtiyoruz. 
	*								Eger ondalikli kisminda 2 basamak gorunmesini istiyorsak 
	*								gerekli precision(enum) tipini yani TWO diyerek belirtiyoruz.
	* \return						Rastgele uretilmis ondalikli sayiyi doner.
	*/
	float getRandomFloat(float lowerBound, float upperBound, Precision precision);
	/**
	* \brief						Alt ve ust sinir araliginda rastgele sayi ureten fonksiyon.
	* \details						Bu fonksiyonun farki ondalikli sayi dondurmesi ve bu ondalikli
	*								sayinin ondalik kismindaki hane sayisini duzenleyebilmemizdir.
	* \param lowerBound				Uretilecek sayilarin alt araligini belirlemek icin girilen deger.
	* \param upperBound				Uretilecek sayilarin ust araligini belirlemek icin girilen deger.
	* \param precision				Ondalik kismindaki hane sayisini burada belirtiyoruz.
	*								Eger ondalikli kisminda 3 basamak gorunmesini istiyorsak
	*								gerekli precision(enum) tipini yani THREE diyerek belirtiyoruz.
	* \return						Rastgele uretilmis ondalikli sayiyi doner.
	*/
	double getRandomDouble(double lowerBound, double upperBound, Precision precision);
	/**
	* \brief						Karakter tipi belirtilerek rastgele karakter uretir.
	* \param characterType			Uretilecek degerin buyuk kucuk harf yada rakammi olucagini bildirdigimiz parametre.
	* \return						Rastgele uretilmis karakteri doner.
	*/
	char getRandomCharacter(CharacterType characterType);
};