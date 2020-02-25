/**
* \brief				RandomNumberGenerator sinifini test amaciyla yazdik.
* \author				Ali Kemal AY - 152120151079
*/
#include "RandomNumberGenerator.h"
#include <iostream>
#include <iomanip>
using namespace std;




/**
* \brief				RandomNumberGenerator::getRandomInteger fonksiyonunu test etmek icin kullanir.
* \details				Eger aralik disina cikarsa hata cikmazsa basarili mesaji yazdirir.
* \param generator		Rastgele sayi uretecek nesne.
* \param lowerBound		Rastgele uretilecek sayinin alt tabani.
* \param upperBound		Rastgele uretilecek sayinin ust tabani.
*/
void TEST_RandomInteger(RandomNumberGenerator& generator, int lowerBound, int upperBound) {
	int randomNumber = generator.getRandomInteger(lowerBound, upperBound);
	if (randomNumber >= lowerBound && randomNumber <= upperBound) 
	{
		cout << "SUCCESS: " << randomNumber << endl; 
	}
	else
	{
			cout << "FAILURE : Obtained number is not between the range [" <<
				lowerBound << "," << upperBound << "]" << endl;
	}
}
/**
* \brief				RandomNumberGenerator::getRandomFloat fonksiyonunu test etmek icin kullanir.
* \details				Eger aralik disina cikarsa hata cikmazsa basarili mesaji yazdirir.
* \param generator		Rastgele sayi uretecek nesne.
* \param lowerBound		Rastgele uretilecek sayinin alt tabani.
* \param upperBound		Rastgele uretilecek sayinin ust tabani.
* \param precision		Rastgele uretilececek sayinin ondalik kisminin hane sayisi.
*/
void TEST_RandomFloat(RandomNumberGenerator& generator, float lowerBound, 
	float upperBound, RandomNumberGenerator::Precision precision) {
		float randomNumber = generator.getRandomFloat(lowerBound, upperBound, precision);	
		if (randomNumber >= lowerBound && randomNumber <= upperBound)
		{
			cout << "SUCCESS: " << randomNumber << endl;
		}
		else
		{
			cout << "FAILURE : Obtained number is not between the range [" <<
				lowerBound << "," << upperBound << "]" << endl;
		}

}
/**
* \brief				RandomNumberGenerator::getRandomDouble fonksiyonunu test etmek icin kullanir.
* \details				Eger aralik disina cikarsa hata cikmazsa basarili mesaji yazdirir.
* \param generator		Rastgele sayi uretecek nesne.
* \param lowerBound		Rastgele uretilecek sayinin alt tabani.
* \param upperBound		Rastgele uretilecek sayinin ust tabani.
* \param precision		Rastgele uretilececek sayinin ondalik kisminin hane sayisi.
*/
void TEST_RandomDouble(RandomNumberGenerator& generator, double lowerBound, double
		upperBound, RandomNumberGenerator::Precision precision) {
		double randomNumber = generator.getRandomDouble(lowerBound, upperBound, precision);
		if (randomNumber >= lowerBound && randomNumber <= upperBound)
		{
			cout << "SUCCESS: " << randomNumber << endl;
		}
		else
		{
			cout << "FAILURE : Obtained number is not between the range [" <<
				lowerBound << "," << upperBound << "]" << endl;
		}
}
/**
* \brief				RandomNumberGenerator::getRandomCharacter fonksiyonunu test etmek icin kullanir.
* \param generator		Rastgele karakter yada rakam uretecek nesne.
* \param type			Rastgele uretilecek karakterin tipini belirttigimiz parametre.
*/
void TEST_RandomCharacter(RandomNumberGenerator& generator,
		RandomNumberGenerator::CharacterType type) {
		char c = generator.getRandomCharacter(type);
			cout << "SUCCESS: " << c << endl;
}

int main()
{
		RandomNumberGenerator generator;
		cout << "+---------------------+" << endl
			<< "| Random Integer Test |" << endl
			<< "+---------------------+" << endl;
		TEST_RandomInteger(generator, 5, 20);
		TEST_RandomInteger(generator, 2, 60);
		cout << "+-------------------+" << endl
			<< "| Random Float Test |" << endl
			<< "+-------------------+" << endl;
		TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::ONE);
		TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::TWO);
		TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::THREE);
		TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::FOUR);
		cout << "+--------------------+" << endl
			<< "| Random Double Test |" << endl
			<< "+--------------------+" << endl;
		TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::ONE);
		TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::TWO);
		TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::THREE);
		TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::FOUR);
		cout << "+-----------------------+" << endl
			<< "| Random Character Test |" << endl
			<< "+-----------------------+" << endl;
		TEST_RandomCharacter(generator,RandomNumberGenerator::CharacterType::LOWER_LETTER);
		TEST_RandomCharacter(generator,RandomNumberGenerator::CharacterType::UPPER_LETTER);
		TEST_RandomCharacter(generator, RandomNumberGenerator::CharacterType::DIGIT);

		system("pause");
		return 0;
		
}
