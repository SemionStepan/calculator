#ifndef APP_H
#define APP_H

#include <fstream>
#include <iostream>

#include "calculator.h"

using namespace std;

class Protocol
{
private:
    const string _ext = ".protokol";
    fstream _file;
    bool _isReady = true;

public:
    inline bool isReady() { return _isReady; }
    void save(string message, double value);
    void view();

    Protocol(string fileName);
    ~Protocol();
};

class App
{
private:
    const string ColonMsg = ":";
    const string InputMsg = "Введите ";
    const string FirstValueMsg = "первое число";
    const string SecondValueMsg = "второе число";
    const string ResultValueMsg = "результат";
    const string EndOfProgrammMsg = "Программа завершена !!!";
    const string OperationCodeMsg = "Код операции:";

    const string ErrorProtocolMsg = "Ошибка работы протокола ...";

    const string _menu[9] = { "Выберите: ",
                              "1. Сложить",
                              "2. Отнять",
                              "3. Умножить",
                              "4. Разделить",
                              "5. Возвести в степень",
                              "6. Перейти к основанию(логарифм)",
                              "7. Показать протокол",
                              "8. Завершить"
                            };

    Protocol *_protocol = nullptr;
    Calculator _calc;

    double inputValue(string message);
    int menu();

public:
    App(string fileName);
    ~App();

    void exec();
};

#endif // APP_H
