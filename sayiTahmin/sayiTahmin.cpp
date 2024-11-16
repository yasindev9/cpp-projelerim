/* 
bilgisayarın rastgele seçtiği sayıyı kullanıcının tahmin ederek bulmaya çalıştığı program.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>
rand ve srand kulllanımı, do while kullanımı, local.h var.
*/
#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;
int inputNum, randomNum;

int main()
{
	setlocale(LC_ALL, "Turkish");	
	srand(time(NULL));
	randomNum = rand() % 101;
	cout << "Sihirli sayıyı tahmin etmeye hazır mısın?" << endl;
	do
	{
		cout << "0 ve 100 arasında bir sayı yaz" << endl;
		cin >> inputNum;
		if (inputNum < randomNum)
		{
			cout << "Sihirli sayı girdiğin sayıdan büyük" << endl;
		}
		if (randomNum < inputNum)
		{
			cout << "Sihirli sayı girdiğin sayıdan küçük" << endl;
		}

	} while (inputNum != randomNum);

	cout << "Helal olsun! Doğru tahmin";
	return 0;
}


