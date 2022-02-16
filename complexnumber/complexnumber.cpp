//Завдання 1. Створіть структуру, що описує комплексне  число.Реалізуйте арифметичні операції з комплексними числами : суму, різницю, множення, ділення
#include <iostream>
#include <string>
#include<Windows.h>
#include <cmath>
using namespace std;
void  Sum(double a1, double b1, double a2, double b2, const int i);//ф-н  суми комплексних чисел
void  Difference(double a1, double b1, double a2, double b2, const int i);//ф-н  різнмці комплексних чисел
void  Product(double a1, double b1, double a2, double b2, const int i);//ф-н добутку комплексних чисел
void  Division(double a1, double b1, double a2, double b2, const int i);//ф-н ділення комплексних чисел
struct complexNumber
{
	double a = 0;//дійсні числа
	double b = 0;//дійсні числа
	const int i = -1;//уявна одиниця комплексного числа ;подивився в інтернеті то здається і має дорівнювати -1
	void input() {//ф-н введення дійсних чисел комплексного числа
		cout << "Введіть число a :";
		cin >> a;
		cout << "Введіть число b :";
		cin >> b;
	}
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	complexNumber numb1;
	cout << "Введіть перше комплексне число" << endl;
	numb1.input();//вводим перше комплексне число
	cout << "Введіть друге комплексне число" << endl;
	complexNumber numb2;
	numb2.input();//вводим друге комплексне число

	Sum(numb1.a, numb1.b, numb2.a, numb2.b, numb1.i); //ф-н суми комплексних чисел

	Difference(numb1.a, numb1.b, numb2.a, numb2.b, numb1.i);//ф-н різнмці комплексних чисел

	Product(numb1.a, numb1.b, numb2.a, numb2.b, numb1.i);// ф-ндобутку комплексних чисел

	Division(numb1.a, numb1.b, numb2.a, numb2.b, numb1.i);//ф-н ділення комплексних чисел
}
void  Sum(double a1, double b1, double a2, double b2, const int i) {//ф-н  суми комплексних чисел
	double sum = (a1 + a2) + (b1 + b2) * i;
	cout << "Сума комплексних чисел = " << sum << endl;
}
void  Difference(double a1, double b1, double a2, double b2, const int i) {//ф-н  різнмці комплексних чисел
	double dif = (a1 - a2) + (b1 - b2) * i;
	cout << "Різниця комплесних чисел = " << dif << endl;
}
void  Product(double a1, double b1, double a2, double b2, const int i) {//ф-н добутку комплексних чисел
	double prod = (a1 * a2 - b1 * b2) + (a1 * b2 + b1 * a2) * i;
	cout << "Добуток комплексних чисел = " << prod << endl;
}
void  Division(double a1, double b1, double a2, double b2, const int i) {//ф-н ділення комплексних чисел
	double div = ((a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2)) - ((a1 * b2 - b1 * a2) / (a2 * a2 + b2 * b2)) * i;
	cout << "Частка комплексних чисел  = " << div << endl;
}
