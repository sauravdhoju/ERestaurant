#include<iostream>
#include<string>
#include<fstream>
#include "log_sign.h"

int createAccount()
{
    system("CLS");
    std::ofstream outf{ "USERS.csv", std::ios::app };

    if (!outf)
    {
        std::cerr << "the file counldn't be opened.\n";
        return 1;
    }

    std::string username{};
    std::cout << "Enter username: ";
    std::cin >> username;

    std::string password{};
    std::cout << "Enter password: ";
    std::cin >> password;

    std::string phone{};
    std::cout << "Enter phone number: ";
    std::cin >> phone;

    std::string email{};
    std::cout << "Enter email: ";
    std::cin >> email;

    std::string address{};
    std::cout << "Enter address: ";
    std::getline(std::cin >> std::ws, address);

    outf << username << ',' << password << ',' << phone << ',' << email << ',' << address << '\n';

    /*
    if(isAccountValid(username, password))
    {
        std::cout << "Valid\n";
        outf << username << password << '\n';
    }
    else
    {
        std::cout << "username already taken!\n";
    }
    */

    outf.close();
    return 0;
}