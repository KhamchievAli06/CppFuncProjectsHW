#include <iostream>
using namespace std;
void chetn(int num1) {
    (num1 % 2 == 1) ? cout << "Введенное число нечетное" : cout << "Введенное число четное";
}
bool polindrom(int num2) {
    int c = 0, b = num2;
    while (0 < b) {
        c = c * 10 + b % 10;
        b /= 10;
    }
    if (c == num2) return 1;
    else return 0;
}
void factorial(int num3) {
    long long otvet = 1;
    for (int i = 2; i <= num3; i++) {
        otvet *= i;
    }
    cout << otvet;
}
int main() {
    setlocale(LC_ALL, "");
    int num1;
    cout << "Введите число:\t";
    cin >> num1;
    chetn(num1);
    cout << endl;



    int num2;
    cout << "Введите число:\t";
    cin >> num2;
    (polindrom(num2)) ? cout << "Введенное число является полиндромом" : cout << "Введенное число не является полиндромом";
    cout << endl;



    int num3;
    cout << "Введите число:\t";
    cin >> num3;
    factorial(num3);
}
