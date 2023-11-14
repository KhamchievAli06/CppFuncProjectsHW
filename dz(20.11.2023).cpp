/*В одномерном массиве, заполненном случайными числами,
определить минимальный и максимальный элементы.*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int array[10];
	int min = 100, max = 0;
	for (int i = 0; i < 10; i++) {
		int r = 1 + rand() % (100 - 1 + 1);
		array[i] = r;
		cout << array[i] << " ";
		if (min > r) min = r;
		if (max < r) max = r;
	}
	cout << "\n" << "мин = " << min << "; макс = " << max << ";";
}
