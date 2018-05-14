#include <iostream>
#include "map.hpp"
int main()
{
    bool size;
    bool a=true;
    map::ItemMap mapp;
    size=map::isempty(mapp);
    std::cout<<size<<std::endl;
    std::cout<<a;
    map::insert(mapp, "protien",15,17);
    map::printAll(mapp);
    return 0;

}