// Пользователь вводит с клавиатуры символ. Определить,
// какой это символ : Буква, цифра, знак препинания или другое.

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	char a;
	cout << "Введите любой символ с клавиатуры";
	cin >> a;
	if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') cout << "Буква";
	else {
		switch (a) {
		case '&':
			cout << "Амперса́нд";
			break;
		case '$':
			cout << "Знак доллара";
			break;
		case '*':
		case '/':
		case '-':
		case '+':
			cout << "Математическая операция";
			break;
		case ' ':
			cout << "Пробел";
			break;
		case '_':
			cout << "Нижнее подчеркивание";
			break;
		case '|':
		case '//':
			cout << "Слэш";
			break;
		case '^':
			cout << "Степень";
			break;
		case '(':
		case ')':
		case '[':
		case ']':
		case '{':
		case '}':
			cout << "Скобка";
			break;
		case '>':
		case '<':
		case '=':
			cout << "Неравенство";
			break;
		case '@':
			cout << "Собачка";
			break;
		case '#':
			cout << "Решётка";
			break;
		case '№':
			cout << "Номер";
			break;
		case '%':
			cout << "Процент";
			break;
		case '!':
		case ',':
		case '.':
		case '?':
		case ';':
		case ':':
			cout << "Знаки препинания";
			break;
		case '"':
			cout << "Кавычка";
			break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			cout << "Цифра";
			break;
		}
	
	}
}

