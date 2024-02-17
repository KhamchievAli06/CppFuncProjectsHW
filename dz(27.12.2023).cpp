#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    const int SIZE = 4;
    char array[SIZE][SIZE] = {};
    char showarray[SIZE][SIZE] = {};
    for (int i = 0, k = 1; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = k + 48;
            if (j % 2) k++;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        array[SIZE - 1][i] = '¤';
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            swap(array[i][j], array[rand() % SIZE][rand() % SIZE]);
        }
    }

    cout << "  a b c d" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < SIZE; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "  a b c d" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < SIZE; j++) {
            showarray[i][j] = '?';
            cout << showarray[i][j] << " ";
        }
        cout << endl;
    }

    char x, y;
    int prevX, prevY;
    int count = SIZE * SIZE;
    int openPare = 0;
    while (count > 0) {
        while (true) {
            system("cls");
            cout << "  a b c d" << endl;
            for (int i = 0; i < SIZE; i++) {
                cout << i + 1 << " ";
                for (int j = 0; j < SIZE; j++) {
                    cout << showarray[i][j] << " ";
                }
                cout << endl;
            }

            cout << "введите букву координаты: ";
            cin >> x;
            if (x < 'a' || x>'d') {
                cout << "некорректная координата" << endl;
                continue;
            }
            cout << "введите цифру координаты: ";
            cin >> y;
            if (y < '1' || y>'4') {
                cout << "некорректная координата" << endl;
                continue;
            }
            if (showarray[y - 49][x - 97] != '?') continue;
            break;
        }

        openPare++;
        showarray[y - 49][x - 97] = array[y - 49][x - 97];
        count--;
        if (openPare > 1) {
            if (showarray[y - 49][x - 97] != (showarray[prevY][prevX])) {
                system("cls");
                cout << "  a b c d" << endl;
                for (int i = 0; i < SIZE; i++) {
                    cout << i + 1 << " ";
                    for (int j = 0; j < SIZE; j++) {
                        cout << showarray[i][j] << " ";
                    }
                    cout << endl;
                }
                Sleep(2000);
                showarray[y - 49][x - 97] = '?';
                showarray[prevY][prevX] = '?';
                count += 2;
            }
            openPare = 0;
        }
        else {
            prevX = x - 97;
            prevY = y - 49;
        }

    }
}
