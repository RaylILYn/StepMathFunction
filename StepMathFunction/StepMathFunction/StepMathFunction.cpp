#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int j = 1, x, xk, dx, a, b;
	float y;
	cout << "Начальное значение X: ";
	cin >> x;
	cout << "Конечное значение X: ";
	cin >> xk;
	cout << "Шаг переменной X: ";
	cin >> dx;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	if (x == 0)
	{
		cout << "Бесконечность" << endl;
		return 0;
	}
	else {

		if (x >= xk)
		{
			cout << "Ошибка 1 - Начальное значение больше конечного" << endl;
			return 0;
		}
		else {
			if ((xk - x) <= dx)
			{
				cout << "Ошибка 2 - Слишком большой шаг" << endl;
				return 0;
			}
		}
	}
	while (x <= xk)
	{
		y = (pow(sin(x), 2) + a) / sqrt(x) + b * x;
		cout.precision(5);
		cout << endl << j << "." << "	x= " << x << "	b= " << y;
		x += dx;
		++j;
	}
	cout << endl << endl;
	system("pause");
}