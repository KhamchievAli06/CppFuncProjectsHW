#include <iostream>
#define random(min,max)(min + rand()%(max-min+1))
#include <iomanip>
using namespace std;
void fillArray(int* arr) {
    int SIZE = _msize(arr) / sizeof(arr[0]);
    cout << "DO sort:" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = random(0,100);
    }
}
void showArray(int* arr) {
    int SIZE = _msize(arr) / sizeof(arr[0]);
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubbleSortArray(int* &arr) {
    int SIZE = _msize(arr) / sizeof(arr[0]);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
    cout << "Posle sort:" << endl;
}
int main()
{
    setlocale(LC_ALL, "rus");                   
    srand(time(NULL));
    const int SIZE = 10;
    int* arr = new int[SIZE] {};
    fillArray(arr);
    showArray(arr);
    bubbleSortArray(arr);
    showArray(arr);
}
