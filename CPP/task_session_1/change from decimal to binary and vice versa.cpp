#include <iostream>
#include <bitset>
//bitset<size> variable_name(DECIMAL_NUMBER);
int main(int argc, char const *argv[])
{
    int num_dec;
    std::string num_bin;
    std::cout << "Enter decimal number" << std::endl;
    std::cin >> num_dec;
    std::bitset<8> var(num_dec);
    std::cout << "binary representation : " << var <<std::endl;


    std::cout << "Enter binary code " << std::endl;
    std::cin >> num_bin;
     std::bitset<8> b3{num_bin};
    std::cout << "decimal representation :" << b3.to_ulong() << std::endl;
    return 0;
}
