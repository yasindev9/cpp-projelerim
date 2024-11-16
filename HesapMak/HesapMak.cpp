/* 
kullanıcının seçtiği 6 işlemden birini girilen sayılar doğrultusunda hesaplayan ve döngü içerisinde olan hesap makinesi programı.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>
switch case kullanımı, do while kullanımıı, local.h var, math.h var.
*/
#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>
using namespace std;
int sayi, sayi1, sayi2, toplam, i;
char isaret;
char yes_no;

void faktöriyel()
{
	i = 1;
	toplam = 1;
	while (i < sayi)
	{
		i++; toplam = toplam * i;
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	do
	{
		cout << "Yapmak istediğiniz işlemi seçiniz (+, -, *, /, faktöriyel(!), karekök(k) )" << endl;
		cin >> isaret;

		if (isaret == '!' || isaret == 'k')
		{
			cout << "Sayı giriniz" << endl;
			cin >> sayi;

			switch (isaret)
			{
			case '!':
				faktöriyel();
				cout << sayi << "!= " << toplam << endl;
				break;
			case 'k':
				cout << "Sonuç = " << sqrt(sayi) << endl;
				break;
			default:
				break;
			}
		}
		else
		{
			cout << "İlk sayıyı giriniz" << endl;
			cin >> sayi1;

			cout << "İkinci sayıyı giriniz" << endl;
			cin >> sayi2;

			switch (isaret)
			{
			case '+':
				cout << "Sonuç = " << sayi1 + sayi2 << endl;
				break;

			case '-':
				cout << "Sonuç = " << sayi1 - sayi2 << endl;
				break;

			case '/':
				cout << "Sonuç = " << sayi1 / sayi2 << endl;
				break;

			case '*':
				cout << "Sonuç = " << sayi1 * sayi2 << endl;
				break;
				cout << "hata" << endl;
				break;
			}
		}

		

		cout << "İşlem yapmaya devam etmek istiyor musunuz? Evet(y) Hayır(n)" << endl;
		cin >> yes_no;
	} while (yes_no == 'y');

	exit;
	return 0;
}




