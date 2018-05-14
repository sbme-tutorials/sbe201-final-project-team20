#include <iostream>
#include "arrays.hpp"
#include <array>
void printAll(std::array<std::array<int, 16>, 16> array, int W, int N)
{
    for (int i = 0; i <= 16; i++)
    {
        for (int j = 0; j <= 16; j++)
        {
            std::cout << array[W][N] << std::endl;
        }
       std::cout<<" "<< std::endl;
    }
}
std::array<std::array<int, 16>, 16> SetRows_Columns(std::array<std::array<int, 16>, 16> &array, int W, int N)
{
    int n = 0;
    int w = 0;
    while (w <= W)
    {
        array[0][w] = 0;
        w = w + 1;
    }
    while (n <= N)
    {
        array[n][0] = 0;
        n = n + 1;
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
    SetRows_Columns(array, 16, 16);
    printAll(array, 16, 16);

    return 0;
}