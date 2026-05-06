#include <iostream>
#include "linkeradd.h"
int main()
{
    std::cout<<"enter two numbers";
    int x{};
    int y{};
    std::cin>>x>>y;
    std::cout<< add(x,y);
        return 0;
}
