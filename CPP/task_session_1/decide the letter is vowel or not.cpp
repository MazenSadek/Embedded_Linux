#include <iostream>

int main(int argc, char const *argv[])
{
    char input;
    char flag=1;
    std::cout<<"enter your letter"<<std::endl;
    std::cin>>input;
    std::string name="AEIOUaeiou";
    for (char i :name){
           if(input==i ){

        std::cout << "your letter is vowel" << std::endl;
                flag=0;
        break;
           }
    }

    if (flag)
    {
        std::cout << "your letter is not vowel" << std::endl;
                
    }
    
    return 0;
}
