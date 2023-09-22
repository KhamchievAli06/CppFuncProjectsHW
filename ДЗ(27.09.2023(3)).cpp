#include <iostream> 
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    int a, b, c, d, i, f, g;
    cout << "Введите семь целых чисел: ";
    cin >> a >> b >> c >> d >> i >> f >> g;
    if (a >= b and a >= c and a >= d and a >= i and a >= d and a >= g) {
        cout << "Наибольшая цифра : " << a;
    }
    else if (b >= a and b >= c and b >= d and b >= i and b >= f and b >= g) {
        cout << "Наибольшая цифра : " << b;
    }
    else if (c >= a and c >= b and c >= d and c >= i and c >= f and c >= g) {
        cout << "Наибольшая цифра : " << c;
    }
    else if (d >= a and d >= b and d >= c and d >= i and d >= f and d >= g) {
        cout << "Наибольшая цифра : " << d;
    }
    else if (i >= a and i >= b and i >= c and i >= d and i >= f and i >= g) {
        cout << "Наибольшая цифра : " << i;
    }
    else if (f >= a and f >= b and f >= c and f >= i and f >= d and f >= g) {
        cout << "Наибольшая цифра : " << f;
    }
    else if (g >= a and g >= b and g >= c and g >= i and g >= f and g >= d) {
        cout << "Наибольшая цифра : " << g;
    }
}