#include "calculator.h"

Expression::Expression(double first, double second)
{
    _first = first;
    _second = second;
}

Calculator::Calculator()
{}

double Calculator::calculate(Expression &expr)
{
    switch(expr._action)
    {
        case 1:
            return plus(expr._first, expr._second);
        break;
        case 2:
            return minus(expr._first, expr._second);
        break;
        case 3:
            return multiply(expr._first, expr._second);
        break;
        case 4:
            return division(expr._first, expr._second);
        break;
        case 5:
            return exponentiation(expr._first, expr._second);
        break;
        case 6:
            return log(expr._first, expr._second);
        break;
        default:
            return 0;
    }
}

