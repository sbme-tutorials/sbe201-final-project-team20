#include <iostream>
#include <fstream>
#include "Menu.hpp"

int main()
{
    int choice;
    std::cout << "-------------------"
              << " Menu "
              << "-------------------" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "1- "
              << "Breakfast" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "2- "
              << "Lunch" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "3- "
              << "Dinner" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "4- "
              << "Vegetables" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "5- "
              << "Fruits" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "6- "
              << "Drinks" << std::endl;
    std::cout << " " << std::endl;

    std::cin >> choice;

    switch (choice)
    {
    case 1:
        breakfast();
        break;
    case 2:
        lunch();
        break;
    case 3:
        dinner();
        break;
    case 4:
        vegetables();
        break;
    case 5:
        fruits();
        break;
    case 6:
        drinks();
        break;
    }
}