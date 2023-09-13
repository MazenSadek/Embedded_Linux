#include <iostream>

int main(int argc, char const *argv[])
{
    int num;
    std::cout << "enter number " << std::endl;
    std::cin>>num;

    for(int i=1;i<=10;i++){

        std::cout << num << "x"<< i<< " = "<<num*i << std::endl;
    }


    return 0;
}
