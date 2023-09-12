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

void Calculator::message(string message)
{
    cout << message << endl;
}

void Calculator::input()
{
    cin >> _first;
}

void Calculator::inputChase()
{
    cin >> _chase;
}
