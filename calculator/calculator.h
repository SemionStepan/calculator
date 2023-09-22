#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <cmath>

using namespace std;

class Calculator
{
public:
    int _first {0};
    int _second {0};
    int _third {0};

public:
    Calculator();

    int plus(int first, int second);
    int minus(int first, int second);
    int multiply(int first, int second);
    double division(int first, int second);
    int exponentiation(int first, int second);
    double log(int first, int second);
};

class Programm // includes Calc, Protokol, In, Out, sth else
{
    int _chase;
    Calculator calc;

public:
    Programm(int chase);
    Programm();

    void exec();
};

#endif // CALCULATOR_H
