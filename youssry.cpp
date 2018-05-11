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
        cout << " To lose 0.5 kg per week  --->  " << calculations-500 << endl;
        cout << " To lose 1 kg per week    --->  " << calculations -1000 << endl;
        cout << " To gain 0.5 kg per week  --->  " << calculations+500 << endl;
        cout << " To gain 1 kg per week    --->  " << calculations+1000 << endl;

    }
    else if (gender == 2)
    {
        int calculations = femaleCalculation(height, weight, age, lifeStyle);
        cout << endl;
        cout << " To maintain your weight  --->  " << calculations << endl;
        cout << " To lose 0.5 kg per week  --->  " << calculations-500 << endl;
        cout << " To lose 1 kg per week    --->  " << calculations -1000 << endl;
        cout << " To gain 0.5 kg per week  --->  " << calculations+500 << endl;
        cout << " To gain 1 kg per week    --->  " << calculations+1000 << endl;
    }
    else
    {
        cout << " wrong " << endl;
    }
}
