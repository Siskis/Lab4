#include <iostream>

using namespace std;

int main()

{
	setlocale(0,"");

	int age = 0; 

	int maxAge = 0; 

	int minAge = 100; 

	int sum = 0;    

	int srednie = 0; 

	int result = 0; 

	cout << "Введите количество посетителей спортзала: ";

	cin >> result;



	for (int i = 0; i < result; i++)

	{

		cout << "Введите возраст " << i + 1 << "-го посетителя: ";
		cin >> age;



		if (age > maxAge) 

			maxAge = age; 

		if (age < minAge)

			minAge = age;



		sum += age; 

	}

	srednie = sum / result;

	cout << "\nСредний возраст всех посетителей: " << srednie << endl;

	cout << "\nСамый взрослый: " << maxAge << endl;

	cout << "\nСамый молодой: " << minAge << endl;



	return 0;

}