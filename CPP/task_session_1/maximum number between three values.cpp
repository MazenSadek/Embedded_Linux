#include<iostream>
int main(int argc, char const *argv[])
{
    int num1=0,num2=0,num3=0,max=0;
    std::cout << "Enter three number" << std::endl;
    std::cin>> num1>>num2>>num3;
    max=num1;

if (num2>max)
{
    max=num2;
}
if (num3>max)
{
    max=num3;
}

    
else
{
    std::cout << " error no found maximum number "<<std::endl;
}

std::cout << "the maximum number is:" << max<< std::endl;
    return 0;
}
