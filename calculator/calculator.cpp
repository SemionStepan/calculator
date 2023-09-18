#include"calculator.h"

Calculator::Calculator()
{}

int Calculator::plus(int first, int second)
{
    return first + second;
}

int Calculator::minus(int first, int second)
{
    return first - second;
}

int Calculator::multiply(int first, int second)
{
    return first * second;
}

double Calculator::division(int first, int second)
{
    return first/second;
}

int Calculator::exponentiation(int first, int second)
{
    return pow(first, second);
}

double Calculator::log(int first, int second)
{
    return std::log(first)/std::log(second);
}

Programm::Programm(int chase)
{
    _chase = chase;
}

void Programm::exec()
{
    while (_chase != 7)
    {
        int first, second = 0;
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
                cout << "Введите первое число" << endl;
                cin >> first;
                cout << "Введите второе число" << endl;
                cin >> second;
                cout << calc.log(first, second) << endl;
            break;
        }
    }
}
