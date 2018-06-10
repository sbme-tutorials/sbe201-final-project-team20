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
    int x, f, calories;
    float y, z, q, e;
    std::cout << "1-male , 2- female" << std::endl;
    std::cin >> x;
    std::cout << "height then weight then age " << std::endl;
    std::cout << " then enter your life style 1-little 2- light 3-average 4-heavy" << std::endl;
    std::cin >> y;
    std::cin >> z;
    std::cin >> q;
    std::cin >> f;
    if (f == 1)
    {
        e = 1.2;
    }
    else if (f == 2)
    {
        e = 1.26;
    }

    else if (f == 3)
    {
        e = 1.46;
    }

    else if (f == 4)
    {
        e = 1.61;
    }

    if (x = 1)
    {
        calories = (66 + (13.7 * z) + (5 * y) - (6.8 * q)) * e;
    }
    else if (x = 2)
    {
        calories = (655 + (9.6 * z) + (1.8 * y) - (4.7 * q)) * e;
    }
    std::cout << calories << std::endl;
    int capacity = .3 * calories;
    double *arrray[4];
    for (int row = 0; row < 4; row++)
    {
        arrray[row] = new double[20];
    }
    std::cout << "capacity =" << capacity << std::endl;
    knapsack(arrray, values, w, 3, 6);
    std::cout << "maxi value=" << maxi(arrray) << std::endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            std::cout << arrray[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << values.size() << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << values[i] << std::endl;
    }
    std::cout << w.size() << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << w[i] << std::endl;
    }

    return 0;
}
