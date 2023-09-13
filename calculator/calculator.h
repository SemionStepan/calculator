#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <cmath>

using namespace std;

class Programm // includes Calc, Protokol, In, Out, sth else
{

};

class Calculator
{
public:
    int _first;
    int _second;
    int _third;
public:
    Calculator(int first, int second, int third);

    int plus(int first, int second);
    int minus(int first, int second);
    int multiply(int first, int second);
    double division(int first, int second);
    int exponentiation(int first, int second);
    double log(int first, int second);
};

/*class Output
{
public:
    Output();

};
*/
class Input
{

};
#endif // CALCULATOR_H
