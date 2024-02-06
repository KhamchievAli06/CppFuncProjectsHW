#include <iostream>
#define random(min, max)(min + rand ()% (max + 1 - min));
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int const SIZE1 = 4, SIZE2 = 5;
    int array[SIZE1][SIZE2], iter;
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE2; j++) {
            array[i][j] = random(1,9);
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Введите число:\t";
    cin >> iter;
    for (int i = 0; i < iter; i++) {
        for (int k, j = 0; j < SIZE1; j++) {
            k = array[i][SIZE2 - 1];
            for (int j = SIZE2 - 1; j > 0; j--) {
                array[i][j] = array[i][j - 1];
            }
            array[i][0] = k;
        }
    }

    cout << endl;

    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE2; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
