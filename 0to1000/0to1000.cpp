/* 
0 dan 1000'e kadar olan sayıları ve sayıların tek/çift durumunu yazdıran,
çift ve tek kaç sayı olduğunu,çift sayıların ve tek sayıların ort. hesaplayan program.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>
girilen sayının üssünü hesaplayan program.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>
for kullanımı, if else kullanımı, pow(üs hesaplama) kullanımı, locale.h var, math.h var, setw var.
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <iomanip>
using namespace std;
int toplamC, sayacC;
int toplamT, sayacT;

int main()
{
	setlocale(LC_ALL, "Turkish");
	/*
		for (int i = 0; i < 100; i++)
	{
		cout << i << " sayısının küpü " << pow(i, 3) << endl;
	}
	*/

	for (int i = 0; i <= 1000; i++)
	{
		if (i % 2 == 0)
		{
			sayacC++;
			cout << i << " sayısı çift " << endl;
			toplamC = toplamC + i;
		}
		else
		{
			sayacT++;
			cout << i << " sayısı tek " << endl;
			toplamT = toplamT + i;
		}
	}
	cout << "Çift sayıların toplamı " << toplamC << endl << "Çift sayıların ortalaması " << toplamC / sayacC << endl
		 << sayacC << setw(4) << "tane çift sayı var " << endl;
	cout << "Tek sayıların toplamı " << toplamT << endl << "Tek sayıların ortalaması " << toplamT / sayacT << endl
		 << sayacT << setw(4) << "tane tek sayı var " << endl;
}