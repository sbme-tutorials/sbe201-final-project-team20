#include <iostream>
#include "arrays.hpp"
#include <array>
void printAll(std::array<std::array<int, 16>, 16> array,int W, int N)
{
    std::cout << array[W][N] <<std::endl;
}
std::array<std::array<int, 16>, 16> SetRows_Columns(std::array<std::array<int, 16>, 16>&array, int W, int N)
{
    int n = 0;
    int w = 0;
    while (w <= W)
    {
        array[0][w] = 0;
        w = w + 10;
    }
    while (n <= N)
    {
        array[n][0] = 0;
        n = n + 10;
    }
}
int main()
{
    /* bool size;
    bool a=true;
    map::ItemMap mapp;
    size=map::isempty(mapp);
    std::cout<<size<<std::endl;
    std::cout<<a;
    map::insert(mapp, "protien",15,17);
    map::printAll(mapp);*/
    std::array<std::array<int, 16>, 16> array;
    SetRows_Columns(array,1600,16 );
    printAll(array,1600,16);

        return 0;
}