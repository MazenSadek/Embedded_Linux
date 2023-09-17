#include <iostream>
#include <algorithm>

int main(int argc, const char** argv) {
    int arr[6]={2,2,6,4,8,6};

    if (std::all_of(arr,arr+6,[](int i){ return i%2==0 ;})){

        std::cout << "all array is even" << std::endl;
    }

    else
    {
         std::cout << "all array is not even" << std::endl;
    }
    return 0;
}


