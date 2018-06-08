#include <iostream>
#include <array>
#include <cmath>
#include <vector>
void knapsack(std::array<std::array<int, 4>, 6> &array, std::array<int, 3> val, std::array<int, 3> w, int items, int capacity)
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
}
int maxi(std::array<std::array<int, 4>, 6> &array)
{
    int max = array[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
    }
    return max;
}
void itemss(std::array<std::array<int, 4>, 6> &array, std::array<int, 3> w, int capacity)
{
    int j = capacity;
    for (int i = 4; i > 0; i--)
    {
        if (array[i][j] == array[i - 1][j]) //do nothing
            int set = 0;
        else if (array[i][j] > array[i - 1][j])
            std::cout<< "item =" << i << std::endl;
        j = j - w[i];
    }
}
int main()
{

    std::array<std::array<int, 4>, 6> array;

    std::array<int, 3> val = {10, 4, 7};
    std::array<int, 3> w = {4, 2, 3};

    int items = 4;
    int capacity = 6;

    knapsack(array, val, w, items, capacity);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << array[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << maxi(array) << std::endl;
    itemss(array,w,capacity);
    /*pick(array,w,items,capacity);
wanted (array,items,w,capacity);*/
    /*std::string stringo;
    std::vector<int> values;
    int q, p, u, r;
    std::cout << "enter" << std::endl;
    std::cin >> q;
    values.push_back(q);
    std::cout << "wanna more yes" << std::endl;

    std::cin >> stringo;

    if (std::string{"yes"}.compare(stringo) == 0)
    {
        std::cin >> p;
        values.push_back(p);
    }

    std::cout << values.size() << std::endl;*/
    return 0;
}