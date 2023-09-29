#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <cmath>

class Calculator
{
public:
    Calculator();

    inline double plus(double first, double second) { return first + second; }
    inline double minus(double first, double second) { return first - second; }
    inline double multiply(double first, double second) { return first * second; }
    inline double division(double first, double second) { return first/second; }
    inline double exponentiation(double first, double second) { return pow(first, second); }
    inline double log(double first, double second) { return std::log(first)/std::log(second); }
};

#endif // CALCULATOR_H
