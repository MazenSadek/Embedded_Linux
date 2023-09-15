#include <algorithm>
#include <iostream>
#include <iterator>

int main(int argc, const char** argv) {
    int size;
   int arr[5]={10,80,90,55,4};
    size = sizeof(arr) / sizeof(arr[0]);
   std::sort(std::begin(arr),std::end(arr),[](int x,int y){return x<y;});
   for (size_t i = 0; i < size; i++)
   {
    std::cout << arr[i] <<" ";
   }
   std::cout << std::endl;
    return 0;
}