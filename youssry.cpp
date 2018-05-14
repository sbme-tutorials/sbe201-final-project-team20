#include <iostream>
using namespace std;

int maleCalculation(int y, int z, int q, float e)
{
    int calories = (66 + (13.7 * z) + (5 * y) - (6.8 * q)) * e;
    return calories;
}
int femaleCalculation(int y, int z, int q, float e)
{
    int calories = (655 + (9.6 * z) + (1.8 * y) - (4.7 * q)) * e;
    return calories;
}

// cout << "" ;
// cin >>   ;
// endl;
int main()
{
    int user = 0;
    int gender;
    int height = 0;
    int weight = 0;
    int age = 0;
    string name;
    // int goal;
    int style;
    float lifeStyle;
    int choosecarb;
    int choosepro;
    int choosefat;
    int totalCalorie;
    float requiredFat;
    float requiredCarb;
    float requiredPro;

    cout << " ______________Welcome To Captain/ROBOT______________" << endl;
    cout << endl;
    cout << "*     New user press 1     ,    current user press 2   --->  ";
    cin >> user;
    cout << endl;
    if (user == 1)
    {
        cout << "*   Enter your name --> ";
        cin >> name;
        cout << endl;
        cout << "                       Hi " << name << endl;
        cout << endl;
        cout << "*   Enter your height in cm = ";
        cin >> height;
        cout << endl;
        cout << "*   Enter your weight in kg = ";
        cin >> weight;
        cout << endl;
        cout << "*   Enter your age = ";
        cin >> age;
        cout << endl;
        cout << "*   Enter your gender --> ( male = 1 or female = 2  ) --- >  ";
        cin >> gender;
        cout << endl;
        // cout << "*   what is your Goal ?! [  i want To lose weight = 1 , i want To mainatain my weight = 2 , i want To gain weight = 3 ]  --->   ";
        // cin >> goal;
        //cout << endl;
        cout << "*   What is your life style ?!  [ little walk = 1 , leight sport 1-3 times per week = 2 , average sport 3-5 times per week = 3, heavy sport 6-7 times per week = 4 --->    ] ";
        cin >> style;
        cout << endl;
        if (style == 1)
        {
            lifeStyle = 1.2;
        }
        else if (style == 2)
        {
            lifeStyle = 1.26;
        }
        else if (style == 3)
        {
            lifeStyle = 1.46;
        }
        else if (style == 4)
        {
            lifeStyle = 1.61;
        }
        else
        {
            cout << "*  incorrect choice ";
        }
        cout << endl;
    }
    else
    {
        cout << "under progress " << endl;
    }
    if (gender == 1)
    {
        int calculations = maleCalculation(height, weight, age, lifeStyle);
        cout << endl;
        cout << " To maintain your weight  --->  " << calculations << endl;
        cout << " To lose 0.5 kg per week  --->  " << calculations - 500 << endl;
        cout << " To lose 1 kg per week    --->  " << calculations - 1000 << endl;
        cout << " To gain 0.5 kg per week  --->  " << calculations + 500 << endl;
        cout << " To gain 1 kg per week    --->  " << calculations + 1000 << endl;
    }
    else if (gender == 2)
    {
        int calculations = femaleCalculation(height, weight, age, lifeStyle);
        cout << endl;
        cout << " To maintain your weight  --->  " << calculations << endl;
        cout << " To lose 0.5 kg per week  --->  " << calculations - 500 << endl;
        cout << " To lose 1 kg per week    --->  " << calculations - 1000 << endl;
        cout << " To gain 0.5 kg per week  --->  " << calculations + 500 << endl;
        cout << " To gain 1 kg per week    --->  " << calculations + 1000 << endl;
    }
    else
    {
        cout << " wrong " << endl;
    }
    cout << endl;
    cout << "*   Enter the choosen calories goal  -->   ";
    cin >> totalCalorie;
    cout << endl;
    cout << endl;
    cout << "                                    menu                        " << endl;
    cout << endl;
    cout << "          Breakfast -- please choose one from each catogrie -- " << endl;
    cout << "          _________                         " << endl;
    cout << endl;
    cout << "    CARB.                      PROTEIN                     FAT " << endl;
    cout << endl;
    cout << "    1. Potato                  1. Milk                      1. Peanuts " << endl;
    cout << "    2. Bread                   2. Yogurt                    2. Avocados " << endl;
    cout << "    3. Oats                    3. Egg                       3. Olive oil " << endl;
    cout << " CARB choosen is number -->   ";
    cin >> choosecarb;
    cout << endl;
    cout << " PROTIEN choosen is number -->   ";
    cin >> choosepro;
    cout << endl;
    cout << " FAt choosen is number -->   ";
    cin >> choosefat;
    cout << endl;
    if (choosecarb == 1)
    {
        float BreakfastCarb = 0.12 * totalCalorie;
        float quantity = BreakfastCarb / 77;
        requiredCarb = quantity * 100;
    }
    else if (choosecarb == 2)
    {
        float BreakfastCarb = 0.12 * totalCalorie;
        float quantity = BreakfastCarb / 313;
        requiredCarb = quantity * 100;
    }
    else if (choosecarb == 3)
    {
        float BreakfastCarb = 0.12 * totalCalorie;
        float quantity = BreakfastCarb / 389;
        requiredCarb = quantity * 100;
    }
    else
    {
        cout << " wrong choice " << endl;
    }
    if (choosepro == 1)
    {
        float Breakfastpro = 0.09 * totalCalorie;
        float quantity = Breakfastpro / 64;
        requiredPro = quantity * 100;
    }
    else if (choosepro == 2)
    {
        float Breakfastpro = 0.09 * totalCalorie;
        float quantity = Breakfastpro / 63;
        requiredPro = quantity * 100;
    }
    else if (choosepro == 3)
    {
        float Breakfastpro = 0.09 * totalCalorie;
        float quantity = Breakfastpro / 143;
        requiredPro = quantity * 100;
    }
    else
    {
        cout << " wrong choice " << endl;
    }
    if (choosefat == 1)
    {
        float Breakfastfat = 0.09 * totalCalorie;
        float quantity = Breakfastfat / 607;
        requiredFat = quantity * 100;
    }
    else if (choosefat == 2)
    {
        float Breakfastfat = 0.09 * totalCalorie;
        float quantity = Breakfastfat / 160;
        requiredFat = quantity * 100;
    }
    else if (choosefat == 3)
    {
        float Breakfastfat = 0.09 * totalCalorie;
        float quantity = Breakfastfat / 884;
        requiredFat = quantity * 100;
    }
    else
    {
        cout << " wrong choice " << endl;
    }
    cout << "* Your choosen Breakfast " << endl;
    cout << "   ____________________   " << endl;
    cout << "*    " << requiredCarb << " gm  CARB    from number  " << choosecarb << endl;
    cout << "*    " << requiredPro << "  gm  PROTEIN from number  " << choosepro << endl;
    cout << "*    " << requiredFat << "   gm  FAT     from number  " << choosefat << endl;
    cout << "                Thanks :'D          " << endl;
}
