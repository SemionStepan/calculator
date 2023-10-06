#include "app.h"

void App::save(double a)
{
    ofstream fout(_fileName, ios::app);
    fout << a << "\n";

    fout.close();
}

void App::view()
{
    ifstream f(_fileName);

    string sss;
    while(!f.eof())
    {
        getline(f, sss);
        cout << sss << endl;
    }
}

void App::dialog()
{
    double first, second = 0;
    Expression expression(firstAsk(first), secondAsk(second));
    switch(_chase)
    {
        case 1:
            expression.setAction(1);
            cout << _calc.calculate(expression) << endl;
            save(_calc.calculate(expression));
        break;
        case 2:
            expression.setAction(2);
            cout << _calc.calculate(expression) << endl;
            save(_calc.calculate(expression));
        break;
        case 3:
            expression.setAction(3);
            cout << _calc.calculate(expression) << endl;
            save(_calc.calculate(expression));
        break;
        case 4:
            expression.setAction(4);
            cout << _calc.calculate(expression) << endl;
            save(_calc.calculate(expression));
        break;
        case 5:
            expression.setAction(5);
            cout << _calc.calculate(expression) << endl;
            save(_calc.calculate(expression));
        break;
        case 6:
            expression.setAction(6);
            cout << _calc.calculate(expression) << endl;
            save(_calc.calculate(expression));
        break;
    }
}

void App::menu()
{
    cout << "Выберите: " << endl
         << "1. Сложить" << endl
         << "2. Отнять" << endl
        << "3. Умножить" << endl
        << "4. Разделить" << endl
        << "5. Возвести в степень" << endl
        << "6. Перейти к основанию(логарифм)" << endl
        << "7. Показать протокол" << endl
        << "8. Завершить" << endl;
    cin >> _chase; // >>1234567
}

double App::firstAsk(double first)
{
    cout << "Введите первое число" << endl;
    cin >> first;
    save(first);
  return first;
}

double App::secondAsk(double second)
{
    cout << "Введите второе число" << endl;
    cin >> second;
    save(second);
  return second;
}

App::App(string fileName)
{
    _fileName = fileName + _ext;
}

void App::exec()
{
    _file.open(_fileName, fstream::app);
    if (!_file.is_open())
    {
        cout << "Файл не открыт\n";
        return;
    }

    while(true)
    {
        menu();

        save(_chase);

        if(_chase == 7)
        {
            view();
            break;
        }

        if(_chase == 8)
        {
            break;
        }

        dialog();
    }
    cout << "Отваливаюсь" << endl;
}

