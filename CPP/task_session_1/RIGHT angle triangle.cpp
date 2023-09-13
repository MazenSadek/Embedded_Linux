#include <iostream>
int main(int argc, char const *argv[])
{
    int a,b,c;
    std::cout << "Enter a b c " << std::endl;
    std::cin>>a>>b>>c;
    if((a*a==b*b+c*c) ||(b*b==a*a+c*c)||((c*c==b*b+a*a)))
    {
        std::cout << "Triangle is Right  angle " << std::endl;
    }
    else
    {
        std::cout << "Triangle is not Right  angle" << std::endl;
    }
    
    return 0;
}

