#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <cmath>

struct Expression
{
    double  _first,
            _second;
    int     _action;

    Expression(double first, double second);

    inline void setAction(int action) { _action = action; }
};

class Calculator
{
    inline double plus(double first, double second) { return first + second; }
    inline double minus(double first, double second) { return first - second; }
    inline double multiply(double first, double second) { return first * second; }
    inline double division(double first, double second) { return first/second; }
    inline double exponentiation(double first, double second) { return pow(first, second); }
    inline double log(double first, double second) { return std::log(first)/std::log(second); }

public:
    Calculator();

    double calculate(Expression& expr);
};

#endif // CALCULATOR_H
