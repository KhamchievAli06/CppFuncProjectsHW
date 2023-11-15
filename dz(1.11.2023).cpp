#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "");
    int d = 0;
    int min, max;
    cout << "Введите диапазон: ";
    cin >> min >> max;
    bool f;
    for (int i = min; i <= max; i++) {
        f = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                f = false;
                break;
            }
        }
        if (f) {
            d++;
        }
    }
    cout << d;
}
