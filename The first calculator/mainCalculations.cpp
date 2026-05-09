#include <iostream>
#include "allstuff.h"
int main()
{
    std::cout<< "enter a number \n";
    double x{};
    char t{};
    double y{};
    std::cin>> x;
    std::cout<<"enter another number \n";
    std::cin>> y;
    std::cout<< "what to perform? \n press m to multiply \n press d to divide \n press a to add \n pess s to subtract";
    std::cin>> t;

    if(t == 'a')
    std::cout<< "the answer is " << add(x,y);
    else if(t == 'm')
    std::cout<< "the answer is " << mul(x,y);
    else if(t == 'd')
    std::cout<< "the answer is " << divi(x,y);
    else if(t == 's')
    std::cout<< "the answer is " << sub(x,y);
    else 
    std::cout<< "enter a correct calculation!";
}