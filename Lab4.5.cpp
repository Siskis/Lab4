#include <iostream>
using namespace std;
int main()
{
	setlocale(0 ,"");
	int finger;
		cin >> finger;
	switch(finger)
	{
	case 1:
		cout << "Это большой палец";
		break;

	case 2:
		cout << "Это указательный палец";
		break;

	case 3:
		cout << "Это средний палец";
		break;

	case 4:
		cout << "Это безымянный палец";
		break;

	case 5:
		cout << "Это мизинец палец";
		break;


	default:
		cout << "Что то ты прошлитался с пальцами";
		break;
	}
	return 0;
}
