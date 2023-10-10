#include "app.h"

App::App(string fileName)
{
    fstream _file;

    if (!_file.is_open())
    {
        cout << "Файл не открыт\n";
        return;
    }

    _fileName = fileName + _ext;
}

void App::save(double saved)
{
    _file.open(_fileName, ios::app);
    _file << saved << "\n";
}

void App::view()
{
    _file.open(_fileName);

    string sss;
    while(!_file.eof())
    {
        getline(_file, sss);
        cout << sss << endl;
    }
    _file.close();
}

void App::dialog()
{
    double first, second = 0;
    first = ask("Введите первое число:");
    second = ask("Введите второе число:");

    Expression expression(second, first);
    expression.setAction(_choice);

    double result = _calc.calculate(expression);

    save(first);
    save(second);
    save(result);

    cout << result << endl;
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

App::~App()
{
  _file.close();
}

void App::exec()
{   
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

