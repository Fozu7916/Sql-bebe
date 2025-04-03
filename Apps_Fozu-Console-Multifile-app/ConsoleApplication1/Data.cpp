#include "Data.h"
#include <iostream>

Data::Data() :  pas(""), user(""), Tpas("zxc"), Tuser("Fozu"), logged(false) {}

    std::string Data::Getpas() const { return Tpas; }
    std::string Data::Getuser() const { return Tuser; }
    bool  Data::Logged() const { return logged; }

    void Data::Setpas(std::string password) { pas = password; }
    void Data::Setuser(std::string username) { user = username; }
    void Data::Newuser(std::string username) { Tuser = username; }
    void Data::Newpas(std::string password) { Tpas = password; }

    void Data::Check()
    {
        if (user == Tuser && pas == Tpas)
        {
            std::cout << "�� ����� � ������� \n";
            logged = true;
        }
        else
        {
            std::cout << "�� �� ����� � ������� \n"; Login();
        }

    }
    void Data::Registr()
    {
        std::string password; std::string username;
        std::cout << "����� - ";
        std::cin >> username;
        Newuser(username);
        std::cout << "������ - ";
        std::cin >> password;
        Newpas(password);
        std::cout << "�� ������� ������� \n";
        Login();

    }
    void Data::Login()
    {
        std::string password; std::string username;
        std::cout << "����� - ";
        std::cin >> username;
        Setuser(username);
        std::cout << "������ - ";
        std::cin >> password;
        Setpas(password);
        Check();
    }
    void Data::Beforelogin()
    {
        int otvet = 0; std::string x; std::string y; 
        std::cout << "����� ����������. ������ ������� ����� ������� ��� � ��� ��� ����?(1-�����  2-������������������)  ";
        std::cin >> otvet;
            switch (otvet)
            {
            case 1:
                Login();
                break;
            case 2:
                Registr();
                break;
            default:
                std::cout << "�������� ���������� ������� \n";
                break;
        }
    }
