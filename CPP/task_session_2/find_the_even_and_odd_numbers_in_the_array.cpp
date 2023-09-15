#include <iostream>

void funodd_even(int arr[],int size);
int main(int argc, const char** argv) {
   int size;
   int arr[6]={1,2,3,4,5,6};
   size = sizeof(arr) / sizeof(arr[0]);

   funodd_even(arr,size); 
       return 0;
}

void funodd_even(int arr[],int size){

    for (size_t i = 0; i < size; i++)
    {
        if(arr[i]%2==0){
            std::cout << "even number " <<arr[i]<< std::endl;
        }
        else{
        std::cout << "odd number " <<arr[i]<< std::endl;
        }

    }
}