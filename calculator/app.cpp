#include "app.h"

void App::save(double a)
{
    ofstream fout("/home/semeon/QtHW/calculator/proga.txt", ios::app);
    fout << a << "\n";

    fout.close();
}

void App::view()
{
    ifstream fin("/home/semeon/QtHW/calculator/proga.txt");

    int size = 0;
    file.seekg (0, std::ios::end);
    size = file.tellg();

    int n = size, v;
    for (int i=1; i<=n; i++)
    {
        fin >> v;
        cout << v << "\n"; // прибавили к значениям 1 и распечатали
    }
}

void App::dialog(int _chase)
{
    double first, second = 0;
    switch(_chase)
    {
    case 1:
        cout << "Введите первое число" << endl;
        cin >> first;
        save(first);
        cout << "Введите второе число" << endl;
        cin >> second;
        save(second);
        cout << calc.plus(first, second) << endl;
        save(calc.plus(first, second));
        break;
    case 2:
        cout << "Введите первое число" << endl;
        cin >> first;
        save(first);
        cout << "Введите второе число" << endl;
        cin >> second;
        save(second);
        cout << calc.minus(first, second) << endl;
        save(calc.minus(first, second));
        break;
    case 3:
        cout << "Введите первое число" << endl;
        cin >> first;
        save(first);
        cout << "Введите второе число" << endl;
        cin >> second;
        save(second);
        cout << calc.multiply(first, second) << endl;
        save(calc.multiply(first, second));
        break;
    case 4:
        cout << "Введите первое число" << endl;
        cin >> first;
        save(first);
        cout << "Введите второе число" << endl;
        cin >> second;
        save(second);
        cout << calc.division(first, second) << endl;
        save(calc.division(first, second));
        break;
    case 5:
        cout << "Введите первое число(основание)" << endl;
        cin >> first;
        save(first);
        cout << "Введите второе число(степень)" << endl;
        cin >> second;
        save(second);
        cout << calc.exponentiation(first, second) << endl;
        save(calc.exponentiation(first, second));
        break;
    case 6:
        cout << "Введите логарифм первого числа" << endl;
        cin >> first;
        save(first);
        cout << "Введите второе число(основание)" << endl;
        cin >> second;
        save(second);
        cout << calc.log(first, second) << endl;
        save(calc.log(first, second));
        break;
    }
}

App::App()
{}

void App::exec()
{
    file.open("/home/semeon/QtHW/calculator/proga.txt", fstream::app);
    if (!file.is_open())
    {
        cout << "Файл не открыт\n";
        return;
    }

    while(true)
    {
        cout << "Выберите: " << endl //<<Выберите действие
             << "1. Сложить" << endl << "2. Отнять" << endl << "3. Умножить" << endl << "4. Разделить"
             << endl << "5. Возвести в степень" << endl << "6. Перейти к основанию(логарифм)"
             << endl << "7. Показать протокол" << endl << "8. Завершить" << endl;
        cin >> _chase; // >>1234567
        save(_chase);
        if(_chase == 7)
        { view(); }
        if(_chase == 8)
        {break;}
        dialog(_chase);
        save(0);
    }
    cout << "Отваливаюсь" << endl;
}

