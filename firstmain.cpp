#include <iostream>
#include "names.h"
#pragma one
int main()
{
    int x{};
    int y{};
    std::cout <<"enter two numbers \n";
    std::cin>> x >> y;
    std::cout<<"the addition is " << add(x,y) << "\n";
    std::cout<<"the substraction is " << sub(x,y) << "\n";
    std::cout<<"the multiplication is " << mul(x,y) << "\n";
    std::cout<<"the division is " << divi(x,y) << "\n";
    return 0;
}