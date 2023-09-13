#include <iostream>

int main(int argc, char const *argv[])
{
    int num=0;
    int sum=0;
    std::cout << "enter your number" << std::endl;
    std::cin>>num;

    for (int i =0;num!=0;i++){

   
    sum=sum+num%10;
    num=num/10;
    }

    std::cout <<"summation the digits is :" <<sum << std::endl;
    return 0;
}
