#include "app.h"

App::App(string fileName)
{
    _protocol = new Protocol(fileName);
}

App::~App()
{
    delete _protocol;
}

int App::menu()
{
    do
    {
        for(int count = 0; count < 9; count++)
        {
            cout << _menu[count] << endl;
        }

        int choice;
        cin >> choice;

        if(choice < 1 || choice > 8)
        {
            cout << "(" << choice << ")" << " - введен не корректный элемент меню" << endl;
        }
        else
        {
            return choice;
        }
    } while(true);
}

void App::exec()
{
    if(!_protocol->isReady())
    {
        cout << ErrorProtocolMsg << endl;
        return;
    }

    bool doWork = true;

    do
    {
        int choice = menu();

        switch(choice)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                {
                    double first = inputValue(InputMsg + FirstValueMsg + ColonMsg);
                    double second = inputValue(InputMsg + SecondValueMsg + ColonMsg);

                    Expression expression(second, choice, first);

                    double result = _calc.calculate(expression);

                    _protocol->save(OperationCodeMsg + ColonMsg, choice);
                    _protocol->save(FirstValueMsg + ColonMsg, first);
                    _protocol->save(SecondValueMsg + ColonMsg, second);
                    _protocol->save(ResultValueMsg + ColonMsg, result);

                    cout << ResultValueMsg + ColonMsg << endl << result << endl;
                }
            break;
            case 7:
                _protocol->view();
            break;
            case 8:
                doWork = false;
            break;
        }
     } while(doWork);
    cout << EndOfProgrammMsg << endl;
}

double App::inputValue(string message)
{
    cout << message << endl;

    double value;
    cin >> value;
  return value;
}

void Protocol::save(string message, double value)
{
    if(_isReady)
    {
        _file << message << value << endl;
    }
}

void Protocol::view()
{
    if(_isReady)
    {
        cout << "Протокол работы программы:" << endl;
        _file.seekg(0, _file.beg);

        cout << _file.rdbuf() << endl;
    }
}

Protocol::Protocol(string fileName)
{
    _file.open(fileName + _ext, std::fstream::in | std::fstream::out | std::fstream::app);
    if (!_file.is_open())
    {
        cout << "Файл не открыт !!!" << endl;
        _isReady = false;
    }
}

Protocol::~Protocol()
{
    if(_isReady)
    {
        _file.close();
    }
}
