#include <iostream>
using namespace std;
int pluss(int num1, int num2) {
	return num1 + num2;
}
int minuss(int num1, int num2) {
	return num1 - num2;
}
int umnojenie(int num1, int num2) {
	return num1 * num2;
}
int delenie(int num1, int num2) {
	if (num2 != 0) {
		return num1 / num2;
	}
	else {
		cout << "ошибка";
		return 0;
	}
}
float pluss(float num1, float num2) {
	return num1 + num2;
}
float minuss(float num1, float num2) {
	return num1 - num2;
}
float umnojenie(float num1, float num2) {
	return num1 * num2;
}
float delenie(float num1, float num2) {
	if(num2 != 0) {
		return num1 / num2;
	}
	else {
		cout << "ошибка";
		return 0;
	}
}
int calculator(int num1, int num2, char op) {
	switch (op) {
	case '+':
		return pluss( num1, num2);
	case '-':
		return minuss( num1, num2);
	case '*':
		return umnojenie( num1, num2);
	case '/':
		return delenie( num1, num2);
	default:
		cout << "ошибка";
		return 0;
	}
}
float calculator(float num1, float num2, char op) {
	switch (op) {
	case '+':
		return pluss( num1, num2);
	case '-':
		return minuss( num1, num2);
	case '*':
		return umnojenie( num1, num2);
	case '/':
		return delenie( num1, num2);
	default:
		cout << "ошибка";
		return 0;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	float num1, num2;
	char op;
	cout << "Введите первое число:\t";
	cin >> num1;
	cout << "Введите второе число:\t";
	cin >> num2;
	cout << "Математическая операция(+ или - или * или /):\t";
	cin >> op;
	if (op == '+' || op == '-' || op == '*' || op == '/') cout << " " << calculator(num1, num2, op);
	else cout << "Неверные входные значения";
}
