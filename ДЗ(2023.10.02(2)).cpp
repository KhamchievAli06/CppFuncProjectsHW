/*Написать программу подсчета стоимости разговора для
разных мобильных операторов. Пользователь вводит длительность
разговора и выбирает с какого на какой оператор
он звонит. Вывести стоимость на экран.*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	int a;
	float b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r;
	cout << "Введите с какого оператора на какой вы звоните: " << "\n";
	cout << "Megafon >> Megafon - 1 " << "\n";
	cout << "Megafon >> MTS - 2 " << "\n";
	cout << "Megafon >> Beline - 3 " << "\n";
	cout << "Megafon >> Tele 2 - 4 " << "\n";
	cout << "MTS >> MTS - 5 " << "\n";
	cout << "MTS >> Megafon - 6 " << "\n";
	cout << "MTS >> Beline - 7 " << "\n";
	cout << "MTS >> Tele 2 - 8 " << "\n";
	cout << "Beline >> Beline - 9 " << "\n";
	cout << "Beline >> Megafon - 10 " << "\n";
	cout << "Beline >> MTC - 11 " << "\n";
	cout << "Beline >> Tele 2 - 12 " << "\n";
	cout << "Tele 2 >> Tele 2 - 13 " << "\n";
	cout << "Tele 2 >> Megafon - 14 " << "\n";
	cout << "Tele 2 >> Beline - 15 " << "\n";
	cout << "Tele 2 >> MTC - 16 " << "\n";
	cin >> a;
	cout << "Длительность разговора(в секундах): ";
	cin >> b;
	c = b * 0.2;
	d = b * 0.3,4;
	e = b * 0.3,3;
	f = b * 0.3,5;
	g = b * 0.2,4;
	h = b * 0.3,4;
	i = b * 0.3,5;
	j = b * 0.3,6;
	k = b * 0.2,3;
	l = b * 0.3,3;
	m = b * 0.3,5;
	n = b * 0.3,7;
	o = b * 0.2,1;
	p = b * 0.3,5;
	q = b * 0.3,6;
	r = b * 0.3,7;
	if (a < 1 || a > 9) cout << "Не верный ввод";
	else {
		switch(a) {
		case 1:
			cout << "стоимость разговора: " << c;
			break;
		case 2:
			cout << "стоимость разговора: " << d;
			break;
		case 3:
			cout << "стоимость разговора: " << e;
			break;
		case 4:
			cout << "стоимость разговора: " << f;
			break;
		case 5:
			cout << "стоимость разговора: " << g;
			break;
		case 6:
			cout << "стоимость разговора: " << h;
			break;
		case 7:
			cout << "стоимость разговора: " << i;
			break;
		case 8:
			cout << "стоимость разговора: " << g;
			break;
		case 9:
			cout << "стоимость разговора: " << k;
			break;
		case 10:
			cout << "стоимость разговора: " << l;
			break;
		case 11:
			cout << "стоимость разговора: " << m;
			break;
		case 12:
			cout << "стоимость разговора: " << n;
			break;
		case 13:
			cout << "стоимость разговора: " << o;
			break;
		case 14:
			cout << "стоимость разговора: " << p;
			break;
		case 15:
			cout << "стоимость разговора: " << q;
			break;
		case 16:
			cout << "стоимость разговора: " << r;
			break;
		}
	}
}