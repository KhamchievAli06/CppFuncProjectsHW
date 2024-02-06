#include <iostream>
#define random(min, max)(min + rand ()%(max + 1 - min));
using namespace std;
int main()
{
    srand(time(NULL));
    int const SIZE = 10, A = 0, B = 9;
    int a, b, array[SIZE], count = 0, sort = 0;
    bool flag;
    for (int i = 0; i < SIZE; i++) {
        array[i] = random(0,9);
        cout << array[i] << " ";
    }

    cout << endl;

    int array2[SIZE] = {};
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (array[j] == i)
                array2[i]++;
            sort++;
        }
    }
    for (int k = 0, i = 0; i < SIZE; i++) {
        for (int j = array2[i]; j > 0; k++, j--) {
            array[k] = i;
        }
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
}
