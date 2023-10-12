#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num1;
	int num2;
	int res;
	cout << "Введите 1 число " << endl;
	cin >> num1;
	cout << "Введите 2 число " << endl;
	cin >> num2;
	cout << "введите свой ответ" << endl;
	cin >> res;
	if (res == num1 * num2)
	{
		cout<<"Верно" << endl;
	}
	else
	{
		cout << "неверно , правильный ответ - " << num1 * num2 << endl;
	}

	return 0;
}

