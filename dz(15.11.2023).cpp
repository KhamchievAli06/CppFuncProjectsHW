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


#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int array[10];
	int min, max, summ = 0;
	cout << "Введите диапазон: ";
	cin >> min >> max;
	int a1;
	cout << "Введите любое число из диапазона: ";
	cin >> a1;
	if (a1 < min || a1 > max) cout << "некорректно введено число";
	for (int i = 0; i < 10; i++) {
		int r = min + rand() % (max - 1 + min);
		array[i] = r;
		cout << array[i] << " ";
		if (r <= a1) summ += r;
	}
	cout << summ;
}


