#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	//calculator (only output result + - * /
	float a, b;
	char op;
	cout << "Input a ";
	cin >> a;
	cout << "Input b ";
	cin >> b;
	cout << "Выберите действие: +,-,:,* ";
	cin >> op;
	if (op == '+'){
		cout << (a + b);
	}
	else if (op == '-') {
		cout << (a - b);
	}


	


	

	


	
}
