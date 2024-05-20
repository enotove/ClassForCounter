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
        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
        std::cin >> answer;
        if ((answer == "��") || (answer == "��"))
        {
            while (flag)
            {
                std::cout << "������� ��������� �������� ��������: ";
                while (!(std::cin >> a))
                {
                    std::cin.clear();
                    while (std::cin.get() != '\n');
                    std::cout << "������������ ����. ���������.\n";
                    std::cout << "������� ��������� �������� ��������: ";
                }

                if (a > 0)
                {
                    flag = false;
                }
                else
                {
                    std::cout << "������������ ����. ���������.\n";
                }

            };
        }
        else if ((answer == "���") || (answer == "���"))
        {
            flag = false;
        }
        else
        {
            std::cout << "�������� ����!" << std::endl;
        }

    }
    Counter counter = a != 0 ? Counter(a) : Counter();
    flag = true;
    while (flag)
    {
        char b;
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
            std::cout << "�� ��������!";
            flag = false;
            break;
        default:
            std::cout << "�������� ����!" << std::endl;
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
