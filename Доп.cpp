#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, sum = 1, sqrt_num, kratos ,num3;
    cout << "Выберите задание : \n";
    cin >> num;
    
    switch (num)
    {
        case 1:
            system("cls");
            for (int i = 1; i <= 10; i++)
            {
                cout << i << endl;
            }
            break;

        case 2:
            system("cls");
            for (int i = 1; i <= 10; i++)
            {
                cout << "5 * " << i << " = " << i * 5 << endl;
            }
            break;

        case 3:
            system("cls");
            for (int i = 1; i <= 100; i++)
            {
                sum += i;
            }
            cout << "Сумма чисел от одного до ста: " << sum << endl;
            break;

        case 4:
            system("cls");
            for (int i = 1; i <= 10; i++)
            {
                sum *= i;
            }
            cout << "Факториал 10: " << sum << endl;
            break;

        case 5:
            system("cls");
            for (int i = 1; i <= 20; i++)
            {
                if (i % 2 == 0)
                {
                    cout << i << endl;
                }
            }
            break;

        case 6:
            system("cls");
            for (int i = 50; i <= 100; i++)
            {
                if (i % 2)
                {
                    cout << i << endl;
                }
            }
            break;

        case 7:
            cin >> num;
            sqrt_num = sqrt(num);
            for (int i = 2; i <= sqrt_num; i++)
            {
                if (num % i == 0)
                {
                    cout << "НЕПроостое число" << endl;
                    return 0;
                }
            }
            cout << "Простое число" << endl;
            break;
            
        case 8:
        cin >> kratos;
        if (kratos % 5 == 0 && kratos % 3 == 0)
        {
            cout << "число кратное 3 и 5" << endl;
        }
        else
        {
            cout << "число не кратное 3 и 5" << endl;
        }
        break;
        
        
        case 9:
        int num56 = 0;
        int num57 = 1;
             cout << num56 << " ";
             cout << num57 << " ";
             for (int i = 2; i < 10; ++i) 
            {
        int nextNum = num56 + num57;
        cout << nextNum << " ";
        num56 = num57;
        num57 = nextNum;
             }
             break;

             
            
        case 10:
        int num3;
        cout << "Введите число: ";
        cin >> num3;
        cout << "Делители числа " << num3 << ":\n";
        
        for (int i = 1; i <= num3; i++)
        {
            if (num3 % i == 0) 
            {
                cout << i << "\n";
            }
        }
        break;
        
    }
    
    return 0;
}