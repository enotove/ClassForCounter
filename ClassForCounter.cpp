// ClassForCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include "Counter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUSSIAN");
    std::string answer;
    int a = 0;
    bool flag = true;
    while (flag)
    {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> answer;
        if ((answer == "Да") || (answer == "да"))
        {
            while (flag)
            {
                std::cout << "Введите начальное значение счётчика: ";
                while (!(std::cin >> a))
                {
                    std::cin.clear();
                    while (std::cin.get() != '\n');
                    std::cout << "Неправильный ввод. Повторите.\n";
                    std::cout << "Введите начальное значение счётчика: ";
                }

                if (a > 0)
                {
                    flag = false;
                }
                else
                {
                    std::cout << "Неправильный ввод. Повторите.\n";
                }

            };
        }
        else if ((answer == "Нет") || (answer == "нет"))
        {
            flag = false;
        }
        else
        {
            std::cout << "Неверный ввод!" << std::endl;
        }

    }
    Counter counter = a != 0 ? Counter(a) : Counter();
    flag = true;
    while (flag)
    {
        char b;
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> b;
        switch (b)
        {
        case '+':
            counter.counterAdd();
            break;
        case '-':
            counter.counterSub();
            break;
        case '=':
            counter.counterPrint();
            break;
        case 'x':
            std::cout << "До свидания!";
            flag = false;
            break;
        default:
            std::cout << "Неверный ввод!" << std::endl;
            break;
        }

    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
