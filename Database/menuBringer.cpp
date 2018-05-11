#include<iostream>
#include<fstream>

int main(){

    std::ifstream ip("BreakfastP.csv");

    if(!ip.is_open())
    std::cout<< "ERROR: File Open" << '\n';
    std::string meal;
    std::string protein,carb,fat,calorie;

    while(ip.good())
    {
        getline(ip,meal,',');
        getline(ip,protein,',');
        getline(ip,fat,',');
        getline(ip,carb,',');
        getline(ip,calorie,'\n');

        std::cout << "Meal "<< meal << '\n';
        std::cout << "Proteins(g) "<< protein << '\n';
        std::cout << "Fats(g) "<< fat << '\n';
        std::cout << "Carbohydrates(g) "<< carb << '\n';
        std::cout << "Calories "<< calorie << '\n';
        std::cout << "-------------------" << '\n';
    }

ip.close();
}
