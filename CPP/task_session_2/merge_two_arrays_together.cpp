#include <iostream>

void funmerg(int arr[],int,int arr2[],int,int merg[]);


int main(int argc, const char** argv) {
   
int size,size2,size3; 


int arr[5] = {1, 2, 3, 4, 5};
size = sizeof(arr) / sizeof(arr[0]);

int arr2[5] = {6, 7, 8, 9, 10};
size2 = sizeof(arr2) / sizeof(arr2[0]);
size3=size2+size;
int merg[size3];

funmerg(arr, size,arr2,size2,merg);

for (size_t i = 0; i < (size +size2)-1; i++)
{
    std::cout << merg[i] << std::endl;
}

    return 0;
}



void funmerg(int arr[],int size,int arr2[],int size2,int merg[]){
int size3=size+size2;
int j=0;

for (size_t i = 0; i < size; i++)
{
    merg[i]=arr[i];

}
for (size_t i = size2-1; i < size3; i++)
{
    merg[i]=arr2[j];
    j++;
}


}