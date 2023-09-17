#include <iostream>
#include <numeric>

int main() {
    const int size = 9991;
    int arr[size];
    std::iota(arr, arr + size, 10);

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}
