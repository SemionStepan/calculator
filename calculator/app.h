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

    int _choice;
    string _fileName;
    fstream _file;
    Calculator _calc;

    void save(double saved, string message);
    void view();
    void dialog();
    string menu();
    double ask(string message);

public:
    App(string fileName);
    ~App();

    void exec();
};

#endif // APP_H
