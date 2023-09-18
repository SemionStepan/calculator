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

void Programm::hello()
{
    cout << "Здравствуйте, вы используете калькулятор, введите первое число:" << endl;
}

void Programm::input()
{
    cin >> calc.first;
}

void Programm::exec()
{

}
