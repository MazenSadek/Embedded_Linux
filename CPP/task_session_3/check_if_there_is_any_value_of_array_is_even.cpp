#include <iostream>
#include <algorithm>

int main(int argc, const char** argv) {
    int arr[6]={1,3,5,7,9,11};

    if (std::any_of(arr,arr+6,[](int i){ return i%2==0 ;})){

        std::cout << "there is even value" << std::endl;
    }

    else
    {
         std::cout << "there isn't any value of array is even" << std::endl;
    }
    return 0;
}


