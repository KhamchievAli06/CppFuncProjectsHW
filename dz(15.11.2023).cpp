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

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	int const SIZE = 12;
	int arr[SIZE];
	int min, max;
	for (int i = 0; i < SIZE;i++) {
		cout << "Введите прибыль фирмы за " << i + 1 << " месяц: ";
		cin >> arr[i];
	}
	cout << "Введите диапозон: ";
	cin >> min >> max;
	if (min > max) swap(min, max);
	if (min > 12 && min < 1 || max > 12 && max < 1) {
		cout << "не корректно введён диапозон" << "\n";
		while (min <= 12 && min >= 1 && max <= 12 && max >= 1) {
			cout << "Введите диапозон ещё раз: ";
			cin >> min >> max;
		}
	}
	int min1 = arr[SIZE], max1 = arr[SIZE];
	for (int i = min; i < max; i++) {
		if (arr[i] < min1) min1 = arr[i];
		if (arr[i] > max1) max1 = arr[i];
	}
	cout << "min = " << min1 << "; max = " << max1;
}
