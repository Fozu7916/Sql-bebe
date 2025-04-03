#include "Balance.h"
#include "Data.h"
#include <iostream>

Balance::Balance() : income(0), expenses(0), balance(10000.0) {}
  
    float Balance::Knowbalance() const { return balance; }
    float Balance::Knowexpenses() const { return expenses; }
    float Balance::Knowincome() const { return income; }

    void Balance::Addmoney() {
        std::cout << "������� ����� ������� ";
        std::cin >> income;
        if (income > 0)
        {
            std::cout << "������ ��������� " << "\n";
            balance = balance + income;
        }
        else
        {
            std::cout << "������� ����������� �����" << "\n";
        }
    }
    void Balance::Losemoney() {
        std::cout << "������� ����� �������� ";
        std::cin >> expenses;
        if (expenses > 0)
        {
            std::cout << "������� ������ " << "\n";
            balance = balance - expenses;
        }
        else
        {
            std::cout << "������� ����������� �����" << "\n";
        }
    }

    void Balance::AfterLogin() {
        int x = 0; int y = 0;
        std::cout << "������������ ���, " <<  "\n";
        while (y == 0)
        {
            std::cout << "��� �� ������ �������? 1-������ ������� 2-������ ������ 3-�������� ������� 4-�������� ������ 5-������ ������ 6-����� �� ����������" << "\n";
            std::cin >> x;
            switch (x)
            {
            case 3: Losemoney();
                break;
            case 4: Addmoney();
                break;
            case 1: std::cout << "���� ������� - " << Knowexpenses() << "\n";
                break;
            case 2: std::cout << "���� ������ - " << Knowincome() << "\n";
                break;
            case 5: std::cout << "��� ������ - " << Knowbalance() << "\n";
                break;
            case 6: y = 1;
                break;
            default:  std::cout << "�������� ���������� ������� ������";
                break;
            }
        }
    }
