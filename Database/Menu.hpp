#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iterator>
#include <vector>
#include <cmath>
//Declaring global variables
namespace menu
{
std::string meal;
std::vector<double> Protein, Calorie;
std::vector<std::string> Meal;
double protein, calorie, pr1, cl1, pr2, cl2, pr3, cl3;
int index;
void preparedData(int x, int y, int z);

//Breakfast menu call

void displayBreakfast()
{

    //opening file
    std::ifstream bfone("Breakfast1.csv");

    //File opened successfully ?
    if (!bfone.is_open())
        std::cout << "ERROR: File Open" << '\n';

    //while loop passing data to variables
    while (bfone >> index >> meal >> protein >> calorie)
    {
        //menu out on screen
        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        //Push all the protein, Calorie values in vectors
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    //close file
    bfone.close();

    //opening file
    std::ifstream bftwo("Breakfast2.csv");

    if (!bftwo.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (bftwo >> index >> meal >> protein >> calorie)
    {

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }
    //close file
    bftwo.close();

    //opening file
    std::ifstream bfthree("Breakfast3.csv");

    if (!bfthree.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (bfthree >> index >> meal >> protein >> calorie)
    {

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
    }

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
    while (lunchOne >> index >> meal >> protein >> calorie)
    {

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
        std::cout << "-------------------" << '\n';
    }

    lunchOne.close();

    std::ifstream lunchTwo("Lunch2.csv");

    if (!lunchTwo.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (lunchTwo >> index >> meal >> protein >> calorie)
    {

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
        std::cout << "-------------------" << '\n';
    }
    lunchTwo.close();

    std::ifstream lunchThree("Lunch3.csv");

    if (!lunchThree.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (lunchThree >> index >> meal >> protein >> calorie)
    {

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
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
    while (dinnerOne >> index >> meal >> protein >> calorie)
    {
        //menu out on screen

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
        std::cout << "-------------------" << '\n';
    }
    //close file
    dinnerOne.close();

    //opening file
    std::ifstream dinnerTwo("Dinner2.csv");

    if (!dinnerTwo.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (dinnerTwo >> index >> meal >> protein >> calorie)
    {

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
        std::cout << "-------------------" << '\n';
    }
    //close file
    dinnerTwo.close();

    //opening file
    std::ifstream dinnerThree("Dinner3.csv");

    if (!dinnerThree.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (dinnerThree >> index >> meal >> protein >> calorie)
    {

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
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

    while (Vegeta >> index >> meal >> protein >> calorie)
    {
        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
    }
    //close file
    Vegeta.close();
}

void displayFruits()
{
    std::ifstream Fruit("Fruits.csv");

    if (!Fruit.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (Fruit >> index >> meal >> protein >> calorie)
    {

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        std::cout << "-------------------" << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
    }
    //close file
    Fruit.close();
}

void displayDrinks()
{
    std::ifstream drink("Drinks.csv");

    if (!drink.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (drink >> index >> meal >> protein >> calorie)
    {

        std::cout << index << "- " << meal << '\n';
        std::cout << "Proteins(g) " << protein << '\n';
        std::cout << "Calories " << calorie << '\n';
        Protein.push_back(protein);
        Calorie.push_back(calorie);
        Meal.push_back(meal);
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
        int selected1, selected2, selected3;
        std::cout << "Enter desired 3 meals ( Insert their # )" << std::endl;
        std::cin >> selected1;
        std::cin >> selected2;
        std::cin >> selected3;
        std::cout << "You choosed " << Meal[selected1 - 1] << ", " << Meal[selected2 - 1] << " and " << Meal[selected3 - 1] << ", Correct ?(Y/N)" << std::endl;
        bool correction;
        char correct;
        std::cin >> correct;
        if (correct == 'Y' || correct == 'y')
            correction = true;
        else
        {
            correction = false;
            std::cout << "Please re-enter your desired 3 meals" << std::endl;
        }

        if (!correction)
            selectedFood(1);
        else
        {
            preparedData(selected1, selected2, selected3);
        }
    }

    else if (x == 2)
    {
        int selected1, selected2, selected3;
        std::cout << "Enter desired 3 meals ( Insert their # )" << std::endl;
        std::cin >> selected1;
        std::cin >> selected2;
        std::cin >> selected3;
        std::cout << "You choosed " << Meal[selected1 - 1] << ", " << Meal[selected2 - 1] << " and " << Meal[selected3 - 1] << ", Correct ?(Y/N)" << std::endl;
        bool correction;
        char correct;
        std::cin >> correct;
        if (correct == 'Y' || correct == 'y')
            correction = true;
        else
        {
            correction = false;
            std::cout << "Please re-enter your desired 3 meals" << std::endl;
        }

        if (!correction)
            selectedFood(2);
        else
        {
            preparedData(selected1, selected2, selected3);
        }
    }

    if (x == 3)
    {
        int selected1, selected2, selected3;
        std::cout << "Enter desired 3 meals ( Insert their # )" << std::endl;
        std::cin >> selected1;
        std::cin >> selected2;
        std::cin >> selected3;
        std::cout << "You choosed " << Meal[selected1 - 1] << ", " << Meal[selected2 - 1] << " and " << Meal[selected3 - 1] << ", Correct ?(Y/N)" << std::endl;
        bool correction;
        char correct;
        std::cin >> correct;
        if (correct == 'Y' || correct == 'y')
            correction = true;
        else
        {
            correction = false;
            std::cout << "Please re-enter your desired 3 meals" << std::endl;
        }

        if (!correction)
            selectedFood(3);
        else
        {
            preparedData(selected1, selected2, selected3);
        }
    }

    if (x == 4)
    {
        int selected1, selected2, selected3;
        std::cout << "Enter desired 3 meals ( Insert their # )" << std::endl;
        std::cin >> selected1;
        std::cin >> selected2;
        std::cin >> selected3;
        std::cout << "You choosed " << Meal[selected1 - 1] << ", " << Meal[selected2 - 1] << " and " << Meal[selected3 - 1] << ", Correct ?(Y/N)" << std::endl;
        bool correction;
        char correct;
        std::cin >> correct;
        if (correct == 'Y' || correct == 'y')
            correction = true;
        else
        {
            correction = false;
            std::cout << "Please re-enter your desired 3 meals" << std::endl;
        }

        if (!correction)
            selectedFood(4);
        else
        {
            preparedData(selected1, selected2, selected3);
        }
    }

    if (x == 5)
    {
        int selected1, selected2, selected3;
        std::cout << "Enter desired 3 meals ( Insert their # )" << std::endl;
        std::cin >> selected1;
        std::cin >> selected2;
        std::cin >> selected3;
        std::cout << "You choosed " << Meal[selected1 - 1] << ", " << Meal[selected2 - 1] << " and " << Meal[selected3 - 1] << ", Correct ?(Y/N)" << std::endl;
        bool correction;
        char correct;
        std::cin >> correct;
        if (correct == 'Y' || correct == 'y')
            correction = true;
        else
        {
            correction = false;
            std::cout << "Please re-enter your desired 3 meals" << std::endl;
        }

        if (!correction)
            selectedFood(5);
        else
        {
            preparedData(selected1, selected2, selected3);
        }
    }

    if (x == 6)
    {
        int selected1, selected2, selected3;
        std::cout << "Enter desired 3 meals ( Insert their # )" << std::endl;
        std::cin >> selected1;
        std::cin >> selected2;
        std::cin >> selected3;
        std::cout << "You choosed " << Meal[selected1 - 1] << ", " << Meal[selected2 - 1] << " and " << Meal[selected3 - 1] << ", Correct ?(Y/N)" << std::endl;
        bool correction;
        char correct;
        std::cin >> correct;
        if (correct == 'Y' || correct == 'y')
            correction = true;
        else
        {
            correction = false;
            std::cout << "Please re-enter your desired 3 meals" << std::endl;
        }

        if (!correction)
            selectedFood(6);
        else
        {
            preparedData(selected1, selected2, selected3);
        }
    }
}
std::vector<double> values;
std::vector<double> w;
// a function to sum it up and put all acquired data into the 6 global variables
//preparedData function
void preparedData(int x, int y, int z)
{
    pr1 = Protein[x - 1];
    values.push_back(pr1);
    cl1 = Calorie[x - 1];
    w.push_back(cl1);
    pr2 = Protein[y - 1];
    values.push_back(pr2);
    cl2 = Calorie[y - 1];
    w.push_back(cl2);
    pr3 = Protein[z - 1];
    values.push_back(pr3);
    cl3 = Calorie[z - 1];
    w.push_back(cl3);
}

void knapsack(std::array<std::array<double,3>,20 > &array)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (i == 0 || j == 0)
            {
                array[i][j] = 0;
            }

            else if (w[i - 1] > j)
            {
                array[i][j] = array[i - 1][j];
            }
            else
                array[i][j] = std::max(array[i - 1][j], values[i - 1] + array[i - 1][j - w[i - 1]]);
        }
    }
}
double maxi(std::array<std::array<double, 3>, 20> &array)
{
    double max = array[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
    }
    return max;
}
}