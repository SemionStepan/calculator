#include "app.h"

using namespace std;

void App::save()
{

}

void App::view()
{

}

void App::dialog(int _chase)
{
    double first, second = 0;
    switch(_chase)
    {
    case 1:
        cout << "Введите первое число" << endl;
        cin >> first;
        cout << "Введите второе число" << endl;
        cin >> second;
        cout << calc.plus(first, second) << endl;
        break;
    case 2:
        cout << "Введите первое число" << endl;
        cin >> first;
        cout << "Введите второе число" << endl;
        cin >> second;
        cout << calc.minus(first, second) << endl;
        break;
    case 3:
        cout << "Введите первое число" << endl;
        cin >> first;
        cout << "Введите второе число" << endl;
        cin >> second;
        cout << calc.multiply(first, second) << endl;
        break;
    case 4:
        cout << "Введите первое число" << endl;
        cin >> first;
        cout << "Введите второе число" << endl;
        cin >> second;
        cout << calc.division(first, second) << endl;
        break;
    case 5:
        cout << "Введите первое число(основание)" << endl;
        cin >> first;
        cout << "Введите второе число(степень)" << endl;
        cin >> second;
        cout << calc.exponentiation(first, second) << endl;
        break;
    case 6:
        cout << "Введите логарифм первого числа" << endl;
        cin >> first;
        cout << "Введите второе число(основание)" << endl;
        cin >> second;
        cout << calc.log(first, second) << endl;
        break;
    }
}

App::App()
{}

void App::exec()
{
    while(true)
    {
        cout << "Выберите: " << endl //<<Выберите действие
             << "1. Сложить" << endl << "2. Отнять" << endl << "3. Умножить" << endl << "4. Разделить"
             << endl << "5. Возвести в степень" << endl << "6. Перейти к основанию(логарифм)"
             << endl << "7. Завершить" << endl;
        cin >> _chase; // >>1234567
        if(_chase == 7)
        {break;}
        dialog(_chase);
    }
    cout << "Отваливаюсь" << endl;
}

