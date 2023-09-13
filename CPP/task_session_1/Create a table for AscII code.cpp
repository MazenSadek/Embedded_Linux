#include <iostream>

int main() {
    std::cout << "ASCII Code Table" << std::endl;
    std::cout << "-----------" << std::endl;

    for (int i = 0; i <= 127; i++) {
        std::cout << "ASCII Code: " << i << " | Character: " << char(i) << std::endl;
    }

    return 0;
}