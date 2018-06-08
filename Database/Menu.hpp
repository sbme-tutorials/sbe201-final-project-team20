#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iterator>
#include <vector>
//Declaring global variables
std::string meal;
std::vector<double> benefit;
std::vector<double> weight;
double protein, calorie;
struct food
{
    std::string foodie;
    double proteine, caloriee;
};

//Breakfast menu call

void displayBreakfast()
{

    //opening file
    std::ifstream bfone("Breakfast1.csv");

    //File opened successfully ?
    if (!bfone.is_open())
        std::cout << "ERROR: File Open" << '\n';

    //while loop passing data to variables
    while (bfone >> meal >> protein >> calorie)
    {
        //menu out on screen
        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        benefit.push_back(protein);
        std::cout << "Calories " << calorie << '\n';
        weight.push_back(calorie);
        std::cout << "-------------------" << '\n';
    }
    //close file
    bfone.close();

    //opening file
    std::ifstream bftwo("Breakfast2.csv");

    if (!bftwo.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (bftwo >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        benefit.push_back(protein);
        std::cout << "Calories " << calorie << '\n';
        weight.push_back(calorie);
        std::cout << "-------------------" << '\n';
    }
    //close file
    bftwo.close();

    //opening file
    std::ifstream bfthree("Breakfast3.csv");

    if (!bfthree.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (bfthree >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        benefit.push_back(protein);
        std::cout << "Calories " << calorie << '\n';
        weight.push_back(calorie);
        std::cout << "-------------------" << '\n';
    }
    std::cout << benefit.size() << std::endl;
    //close file
    bfthree.close();
}

//Lunch menu call
void displayLunch()
{
    //opening file
    std::ifstream lunchOne("Lunch1.csv");
    //File opened successfully ?
    if (!lunchOne.is_open())
        std::cout << "ERROR: File Open" << '\n';
    //while loop passing data to variables
    while (lunchOne >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }

    lunchOne.close();

    std::ifstream lunchTwo("Lunch2.csv");

    if (!lunchTwo.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (lunchTwo >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    lunchTwo.close();

    std::ifstream lunchThree("Lunch3.csv");

    if (!lunchThree.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (lunchThree >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }

    lunchThree.close();
}

//Dinner menu call
void displayDinner()
{

    //opening file
    std::ifstream dinnerOne("Dinner1.csv");

    //File opened successfully ?
    if (!dinnerOne.is_open())
        std::cout << "ERROR: File Open" << '\n';

    //while loop passing data to variables
    while (dinnerOne >> meal >> protein >> calorie)
    {
        //menu out on screen

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    //close file
    dinnerOne.close();

    //opening file
    std::ifstream dinnerTwo("Dinner2.csv");

    if (!dinnerTwo.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (dinnerTwo >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    //close file
    dinnerTwo.close();

    //opening file
    std::ifstream dinnerThree("Dinner3.csv");

    if (!dinnerThree.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (dinnerThree >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    //close file
    dinnerThree.close();
}

void displayVegetables()
{
    std::ifstream Vegeta("Vegetables.csv");

    if (!Vegeta.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (Vegeta >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    //close file
    Vegeta.close();
}

void displayFruits()
{
    std::ifstream Fruit("Fruits.csv");

    if (!Fruit.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (Fruit >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    //close file
    Fruit.close();
}

void displayDrinks()
{
    std::ifstream drink("Drinks.csv");

    if (!drink.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (drink >> meal >> protein >> calorie)
    {

        std::cout << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    //close file
    drink.close();
}



//SelectedFood Function
void selectedFood(int x)
{
    if (x == 1)
    {
        std::ifstream bfone("Breakfast1.csv");

        //File opened successfully ?
        if (!bfone.is_open())
            std::cout << "ERROR: File Open" << '\n';

        std::string selected1, selected2, selected3;
        std::cout << "Enter desired 3 meals" << std::endl;
        std::cin >> selected1;
        std::cin >> selected2;
        std::cin >> selected3;
        while (bfone >> meal >> protein >> calorie)
        {
            if (selected1 == meal)
            {
                food firstmeal;
                firstmeal.foodie = meal;
                firstmeal.proteine = protein;
                firstmeal.caloriee = calorie;
                std::cout << firstmeal.foodie << " " << firstmeal.proteine << " " << firstmeal.caloriee;
            }
            while (bfone >> meal >> protein >> calorie)
        {
            if (selected2 == meal)
            {
                food secondmeal;
                secondmeal.foodie = meal;
                secondmeal.proteine = protein;
                secondmeal.caloriee = calorie;
                std::cout << secondmeal.foodie << " " << secondmeal.proteine << " " << secondmeal.caloriee;
            }
        }
            while (bfone >> meal >> protein >> calorie)
        {
            if (selected3 == meal)
            {
                food thirdmeal;
                thirdmeal.foodie = meal;
                thirdmeal.proteine = protein;
                thirdmeal.caloriee = calorie;
                std::cout << thirdmeal.foodie << " " << thirdmeal.proteine << " " << thirdmeal.caloriee;
            }
        }
            
        }
        //close file
        bfone.close();

        std::ifstream bftwo("Breakfast2.csv");

        if (!bftwo.is_open())
            std::cout << "ERROR: File Open" << '\n';

        while (bfone >> meal >> protein >> calorie)
        {
            if (selected1 == meal)
            {
                food firstmeal;
                firstmeal.foodie = meal;
                firstmeal.proteine = protein;
                firstmeal.caloriee = calorie;
                std::cout << firstmeal.foodie << " " << firstmeal.proteine << " " << firstmeal.caloriee;
            }
            if (selected2 == meal)
            {
                food secondmeal;
                secondmeal.foodie = meal;
                secondmeal.proteine = protein;
                secondmeal.caloriee = calorie;
                std::cout << secondmeal.foodie << " " << secondmeal.proteine << " " << secondmeal.caloriee;
            }
            if (selected3 == meal)
            {
                food thirdmeal;
                thirdmeal.foodie = meal;
                thirdmeal.proteine = protein;
                thirdmeal.caloriee = calorie;
                std::cout << thirdmeal.foodie << " " << thirdmeal.proteine << " " << thirdmeal.caloriee;
            }
            else
                break;
        }
        //close file
        bftwo.close();

        std::ifstream bfthree("Breakfast3.csv");

        if (!bfthree.is_open())
            std::cout << "ERROR: File Open" << '\n';

        while (bfthree >> meal >> protein >> calorie)
        {
            if (selected1 == meal)
            {
                food firstmeal;
                firstmeal.foodie = meal;
                firstmeal.proteine = protein;
                firstmeal.caloriee = calorie;
                std::cout << firstmeal.foodie << " " << firstmeal.proteine << " " << firstmeal.caloriee;
            }
            if (selected2 == meal)
            {
                food secondmeal;
                secondmeal.foodie = meal;
                secondmeal.proteine = protein;
                secondmeal.caloriee = calorie;
                std::cout << secondmeal.foodie << " " << secondmeal.proteine << " " << secondmeal.caloriee;
            }
            if (selected3 == meal)
            {
                food thirdmeal;
                thirdmeal.foodie = meal;
                thirdmeal.proteine = protein;
                thirdmeal.caloriee = calorie;
                std::cout << thirdmeal.foodie << " " << thirdmeal.proteine << " " << thirdmeal.caloriee;
            }
            else
                break;
        }
        //close file
        bfthree.close();
    }
}
