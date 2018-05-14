#include <iostream>
#include <fstream>


//Declaring global variables
std::string meal;
double protein, calorie;

//Breakfast menu call

void breakfast()
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
        std::cout << "Calories " << calorie << '\n';
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
        std::cout << "Calories " << calorie << '\n';
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
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    //close file
    bfthree.close();
}

//Lunch menu call
void lunch()
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
void dinner()
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

void vegetables()
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

void fruits()
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

void drinks()
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
