/*
Girilen sayının modunu kontrol ederek asal olup olmadığını söyleyen program.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>
dizi(array) kullanımı, mod kullanımı, for kullanımı, locale.h var.
*/
#include <iostream>
#include <locale.h>
using namespace std;

int inputNum;
int a[20];
bool asalDegil = false;

int main()
{
	setlocale(LC_ALL, "Turkish");
	cout << "Asal sayı bulma programına hoşgeldin. Sayı girerek başla : ";
	cin >> inputNum;
	for (int i = 2; i<= 9; i++)
	{
		a[i] = inputNum % i;
	}
	for (int i = 2; i < 9; i++)
	{
		if (a[i] == 0 && i != inputNum)
		{
			cout << inputNum << " sayısı " << i << " rakamına bölünür. Asal değildir." << endl;
			asalDegil = true;
			//system("pause");
		}
	}
	if (asalDegil == false)
	{
		cout << inputNum << " sayısı asaldır.";
	}
}