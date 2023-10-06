#ifndef APP_H
#define APP_H

#include <fstream>
#include <iostream>

#include "calculator.h"

using namespace std;

class App
{
private:
    const string _ext = ".protokol";

    int _chase;
    string _fileName;
    fstream _file;
    Calculator _calc;

    void save(double a);
    void view();
    void dialog();
    void menu();
    double firstAsk(double first);
    double secondAsk(double second);

public:
    App(string fileName);

    void exec();
};

#endif // APP_H
