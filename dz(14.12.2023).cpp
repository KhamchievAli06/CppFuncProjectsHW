#include <iostream>
#define random(min, max) (min + rand()%(max + 1 - min));
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int const SIZE1 = 5, SIZE2 = 5;
    int min = 1, max = 30;

    int array[SIZE1][SIZE2], summa = 0, coordinatmax1, coordinatmax2, coordinatmin1, coordinatmin2, max_stroka = min * SIZE2;
    int coordinatmax_stroka, min_stroka = max * SIZE2, coordinatmin_stroka,
        max_stolb = min * SIZE2, min_stolb = max * SIZE2, coordinatmax_stolb, coordinatmin_stolb;
    int max_znach = min, min_znach = max;

    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE2; j++) {
            array[i][j] = random(min, max);
            if (max_znach < array[i][j]) {
                max_znach = array[i][j];
                coordinatmax1 = j;
                coordinatmax2 = i;
            }
            if (min_znach > array[i][j]) {
                min_znach = array[i][j];
                coordinatmin1 = j;
                coordinatmin2 = i;
            }
        }
    }
    for (int sum = 0, i = 0; i < SIZE1; i++, sum = 0) {
        for (int j = 0; j < SIZE2; j++) {
            cout << array[i][j] << "\t";
            sum += array[i][j];
        }
        summa += sum;
        cout << "  " << sum << endl;

        if (max_stroka < sum) {
            max_stroka = sum;
            coordinatmax_stroka = i;
        }
        if (min_stroka > sum) {
            min_stroka = sum;
            coordinatmin_stroka = i;
        }
    }


    for (int j = 0; j < SIZE2; j++) cout << "_____";
    cout << endl;


    for (int sum = 0, i = 0; i < SIZE2; i++, sum = 0) {
        for (int j = 0; j < SIZE1; j++) {
            sum += array[j][i];
        }
        cout << sum << "\t";
        if (max_stolb < sum) {
            max_stolb = sum;
            coordinatmax_stolb = i;
        }
        if (min_stolb > sum) {
            min_stolb = sum;
            coordinatmin_stolb = i;
        }
    }
    cout << "  " << summa;






    cout << endl;
    cout << "\nМаксимальная элемент: " << max_znach << " (" << coordinatmax1 << ":" << coordinatmax2 << ")" << endl;
    cout << "Минимальный элемент: " << min_znach << " (" << coordinatmin1 << ":" << coordinatmin2 << ")" << endl;
    cout << "Максимальная сумма в строках: " << max_stroka << " (" << coordinatmax_stroka << ")" << endl;
    cout << "Минимальная сумма в строках: " << min_stroka << " (" << coordinatmin_stroka << ")" << endl;
    cout << "Максимальная сумма в столбцах: " << max_stolb << " (" << coordinatmax_stolb << ")" << endl;
    cout << "Минимальная сумма в столбцах: " << min_stolb << " (" << coordinatmin_stolb << ")";
}
