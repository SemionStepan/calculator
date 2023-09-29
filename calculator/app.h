#ifndef APP_H
#define APP_H

#include <fstream>
#include <iostream>

#include "calculator.h"

using namespace std;

class App
{
    int _chase;
    Calculator calc;

    void save(double a);
    void view();
    void dialog(int _chase);

public:
    App();

    void exec();
};

#endif // APP_H
