#include <iostream>
using namespace std;

int main() {
    char station;

    system("cls");
    setlocale(0, "");
    cout << "Введите букву станции (A, B, C, D или E): ";
    cin >> station;

    switch (station)
    {
    case 'A':
    case 'a':
        cout << "Поезд на отсановку A прибудет в 13:22" << endl;
        break;
    case'B':
    case 'b':
        cout << "Поезд на отсановку B прибудет в 13:30" << endl;
        break;
    case'C':
    case 'c':
        cout << "Поезд на отсановку C прибудет в 13:45" << endl;
        break;
    case'D':
    case 'd':
        cout << "Поезд на отсановку D прибудет в 14:10" << endl;
        break;
    case 'E':
    case 'e':
        cout << "Поезд на отсановку E прибудет в 14:20 (конечная)" << endl;
        break;
    default:
        cout << "Некорректный ввод." << endl;
        break;
    }

    return 0;
}