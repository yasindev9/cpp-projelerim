/* 
Kullanıcının belirlediği userName ve userPin ile giriş yapması gereken,
ilk hatalı girişten sonra 3 hatalı giriş hakkının olduğu program.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>
while kullanımı, switch kullanımı, void kullanımı, locale.h var.
*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
string userName = "admin";
string inputUserName = "admin";
int pin = 1234;
int inputPin = 1234;
int i = 3;
char menu;

void giris()
{
	cout << "Kullanıcı adınız : ";
	cin >> userName;
	if (userName == inputUserName)
	{
		while (i >= 0)
		{
			cout << "Sayılardan oluşan 4 haneli şifreniz : ";
			cin >> pin;
			if (userName == inputUserName && pin == inputPin)
			{
				cout << "Giriş başarılı";
				i = -1;
			}
			else
			{
				cout << i << " deneme hakkınız kaldı." << endl;
				i--;
			}

		}
	}
	else
	{
		cout << "Kullanıcı adı hatalı." << endl;
	}
}

void kayit()
{
	cout << "Kullanıcı adınızı belirleyin" << endl;
	cin >> inputUserName;
	cout << "Sayılardan oluşan 4 haneli şifrenizi belirleyin" << endl;
	cin >> inputPin;
	giris();
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	cout << "Kayıt olmak için(k) / Oturum açmak için(o)" << endl;
	cin >> menu;
	switch (menu)
	{
	case 'k':
		kayit();
		break;
	case 'o':
		giris();
		break;
	default:
		cout << "Hatalı giriş";
		break;
	}
}
