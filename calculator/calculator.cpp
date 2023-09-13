#include"calculator.h"

/*void Output::message(string message)
{
    cout << message << endl;
}
*/
Calculator::Calculator(int first, int second, int third)
{
    _first = first;
    _second = second;
    _third = third;
}

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
    return ::log(first)/::log(second);
}


