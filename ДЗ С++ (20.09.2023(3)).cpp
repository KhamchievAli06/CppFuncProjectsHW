#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float a1;
	cout << "Введите зарплату за первый месяц: ";
	cin >> a1;
	float a2;
	cout << "Введите зарплату за первый месяц: ";
	cin >> a2;
	float a3;
	cout << "Введите зарплату за первый месяц: ";
	cin >> a3;
	cout << "Итоговая зарплата за квартал: " << a1 + a2 + a3;
}