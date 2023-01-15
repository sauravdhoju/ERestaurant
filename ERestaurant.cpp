#include<iostream>
#include<string>
#include<fstream>
#include "log_sign.h"
#include "MainMenu.h"

int main(int argc, char* argv[])
{
    // command line argument for admin or customer

    std::cout << "Admin Or Customer?\n";
    int userChoice{};
    std::cout << "1 - Admin\n";
    std::cout << "2 - User\n";

    std::cin >> userChoice;

    if (userChoice == 1)
    {
        // admin login
        std::cout << "Admin Choices Show\n";
    }
    else
    {
        // user login
        int choice{};
        system("CLS");
        std::cout << "1 - Create Account\n";
        std::cout << "2 - Login In\n\n";

        std::cin >> choice;

        if (choice == 1)
        {
            createAccount();
        }
        else
        {
            // log in logic
        }
    }

    /*
    getRestaurants();
    // ask for restaurant (choice)
    */

	return 0;
}
