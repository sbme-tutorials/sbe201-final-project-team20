#ifndef Map_HPP
#define Map_HPP
#include <iostream>
#include <string>
namespace map
{

struct node
{
    std::string item; //key
    int value;
    int weight;
    node *right = nullptr;
    node *left = nullptr;
};
using ItemMap = node *;
bool isempty(ItemMap map)
{
    return map == nullptr;
}
void insert(ItemMap &map, std::string key, int v, int w)
{
    if (isempty(map))
    {
        map->item = key;
        map->value = v;
        map->weight = w;
        map->right=nullptr;
        map->left=nullptr;
    }
}
void printAll(ItemMap map)
{

    if (!isempty(map))
    {
        printAll(map->left);

        std::cout << map->item << ":" << map->value << ":" << map->weight <<std::endl;
        printAll(map->right);
    }
}
}

#endif
