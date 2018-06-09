#include <iostream>
#include <fstream>
#include "Menu.hpp"
#include <stdlib.h>

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
        displayBreakfast();
        selectedFood(1);
        break;
    case 2:
        displayLunch();
        selectedFood(2);
        break;
    case 3:
        displayDinner();
        selectedFood(3);
        break;
    case 4:
        displayVegetables();
        selectedFood(4);
        break;
    case 5:
        displayFruits();
        selectedFood(5);
        break;
    case 6:
        displayDrinks();
        selectedFood(6);
        break;
    }
}
