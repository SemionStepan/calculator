#include "app.h"

void App::save(double saved)
{
    fstream _file(_fileName, ios::app);
    _file << saved << "\n";
}

void App::view()
{
    fstream _file(_fileName);

    string sss;
    while(!_file.eof())
    {
        getline(_file, sss);
        cout << sss << endl;
    }
}

void App::dialog()
{
    double first, second = 0;
    first = ask("Введите первое число:");
    second = ask("Введите второе число:");
    Expression expression(second, first);
    save(first);
    save(second);
    expression.setAction(_choice);
    cout << _calc.calculate(expression) << endl;
    save(_calc.calculate(expression));
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
    cin >> _choice;
}

double App::ask(string message)
{
    cout << message << endl;
    double answer;
    cin >> answer;
  return answer;
}

App::App(string fileName)
{

  _fileName = fileName + _ext;
}

App::~App()
{
  _file.close();
}

void App::exec()
{
    _file.open(_fileName, fstream::app);
    if (!_file.is_open())
    {
        cout << "Файл не открыт\n";
        return;
    }

    do
    {
        menu();

        save(_choice);

        if(_choice == 7)
        {
            view();
            break;
        }

        if(_choice == 8)
        {
            break;
        }

        dialog();
    } while(true);
    cout << "Отваливаюсь" << endl;
}

