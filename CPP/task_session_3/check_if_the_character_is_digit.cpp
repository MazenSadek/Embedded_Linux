#include <cctype>
#include <iostream>

int main(int argc, const char** argv) {


    char c;
    std::cout << "Enter your character" << std::endl;
    std::cin>>c;

    if(std::isdigit(c)){

        std::cout << "character is digit " << std::endl;
    }
    else {
    std::cout << "character isn't digit" << std::endl;
    }

    
    return 0;
}