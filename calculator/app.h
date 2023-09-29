#ifndef APP_H
#define APP_H

#include <iostream>

#include "calculator.h"

class App
{
    int _chase;
    Calculator calc;

    void save();
    void view();
    void dialog(int _chase);

public:
    App();

    void exec();
};

#endif // APP_H
