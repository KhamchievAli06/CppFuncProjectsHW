#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float a1;
	cout << "Введите оценку за первую чертветь: ";
	cin >> a1;
	float a2;
	cout << "Введите оценку за вторую чертветь: ";
	cin >> a2;
	float a3;
	cout << "Введите оценку за третия чертветь: ";
	cin >> a3;
	float a4;
	cout << "Введите оценку за четвёртую чертветь: ";
	cin >> a4;
	cout << "Годовая оценка: " << round((a1 + a2 + a3 + a4) / 4);
}