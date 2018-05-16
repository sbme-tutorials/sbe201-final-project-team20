#include <iostream>
#include <array>
#include <cmath>
void getmaxim(std::array<std::array<int, 4>, 6> &array, std::array<int, 3> val, std::array<int, 3> w, int items, int capacity)
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
            if (array[i][j] >max)
            {
               max = array[i][j];
            }
        }
    }
    return max;
}
/*void pick(std::array<std::array<int, 4>, 6> &array,std::array<int, 3> w, int items, int capacity)
{
    if (items <= 0 || capacity <= 0) return;
 
    int k = array[items][capacity];
    if (k != array[items - 1][capacity]) {
        std::cout << items<< " "; 
        pick((items-1, capacity-w[items]),w,items,capacity);
    } else {
       
        pick((items-1, capacity-w[items]),w,items,capacity);
    }
    void wanted(std::array<std::array<int, 4>, 6> array, int items, std::array<int, 3> w, int capacity)
{
    int i = items;
    int j = capacity;
    while (i >= items)
    {
        if (array[i][j] == array[i - 1][j]) //not selected
        {
            i = i - 1;
            j = j;
        }
        else if (array[i][j] > array[i - 1][j])
        {
            std::cout << "item" << i << "is selected" << std::endl;
            j = j - w[i];
            i = i - 1;
        }
        else
            std::cout << "failed" << std::endl;
    }
}
}*/
int main()
{

    std::array<std::array<int, 4>, 6> array;

    std::array<int, 3> val = {10, 4, 7};
    std::array<int, 3> w = {4, 2, 3};

    int items = 4;
    int capacity = 6;

   getmaxim(array, val, w, items, capacity);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << array[i][j] << "  ";
        }
        std::cout << std::endl;
    }
std::cout<<maxi(array)<<std::endl;
/*pick(array,w,items,capacity);
wanted (array,items,w,capacity);*/
    return 0;
}