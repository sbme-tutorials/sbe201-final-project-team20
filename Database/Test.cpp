#include <iostream>
#include <fstream>
#include "Menu.hpp"
#include <stdlib.h>
using namespace menu;
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
    std::array<std::array<double, 3>, 20> array;
    int calo = 1000;
    int capacity = .12 * calo;
    knapsack(array);
    std::cout << "value=" << maxi(array) << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            std::cout << array[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << w.size() << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << w[i] << std::endl;
    }
    return 0;
}
