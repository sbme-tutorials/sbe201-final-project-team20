#include <iostream>
#include <array>
#include <cmath>
int getmaxim(std::array<std::array<int, 4>, 6> &array, std::array<int, 3> val, std::array<int, 3> w, int items, int capacity)
{
    int i;
    int j;
    for (i = 0; i < items; i++)
    {
        for (j = 0; j < capacity; j++)
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
                array[i][j] = std::max(array[i - 1][j], val[i - 1] + array[i - 1][j - w[i - 1]]);
        }
    }
return 5;
}
int main()
{

    std::array<std::array<int, 4>, 6> array;

    std::array<int, 3> val = {10, 4, 7};
    std::array<int, 3> w = {4, 2, 3};

    int items = 4;
    int capacity = 6;

   std::cout<<getmaxim(array, val, w, items, capacity) << std::endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << array[i][j] << "  ";
        }
        std::cout << std::endl;
    }
std::array<std::array<int, 2>, 2> array1;
array1={{{2,1},{2,8}}};
std::cout<<array1[2][2];
    return 0;
}