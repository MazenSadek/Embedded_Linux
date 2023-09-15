#include <iostream>
int main(int argc, const char** argv) {
    
    int num;
    std::cout << "Enter number :" ;
    std::cin>>num;

  auto fun=  [](int num){
        return num*num;
    };

std::cout <<"squar number is: "<<fun(num) << std::endl;
    return 0;
}