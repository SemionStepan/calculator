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

void App::save(double saved, string message)
{
    _file.open(_fileName, ios::app);
    _file << message << ":" << saved << "\n";
}

void App::view()
{
    _file.open(_fileName);

    string sss;
    while(!_file.eof())
    {
         getline(_file, sss);
        _file << sss << endl;
    }
}

void App::dialog()
{
    double first, second = 0;
    first = ask("Введите первое число:");
    second = ask("Введите второе число:");

    Expression expression(first, second);
    expression.setAction(_choice);

    double result = _calc.calculate(expression);

    save(first, "Первое число");
    save(second, "Второе число");
    save(result, "Результат");

    cout << result << endl;
}

string App::menu()
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
    string message;
    switch(_choice)
    {
        case 1: return message = "Выбрано сложение";break;
        case 2: return message = "Выбрано вычитание";break;
        case 3: return message = "Выбрано умножение";break;
        case 4: return message = "Выбрано деление";break;
        case 5: return message = "Выбрано возведение в степень";break;
        case 6: return message = "Выбрано логарифмирование";break;
        case 7: return message = "Выбрано показать протокол";break;
        case 8: return message = "Выбрано завершить";break;
        default: return message = "Ошибка : ввод - число от 1 до 8";
    }
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
    if(_file.is_open())
    {
        do
        {
            save(_choice, menu());

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
}
