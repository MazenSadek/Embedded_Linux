#include <iostream>

int find_max(int arr[],int );
int main(int argc, const char** argv) {
  int max,size;
  int arr[5]={105,6,7,88,99} ;
  size=sizeof(arr)/sizeof(arr[0]);
  std::cout << size << std::endl;
  max=find_max(arr,5);
    std::cout << "max number of array is :"<< max << std::endl;
    return 0;
}


int find_max(int arr[],int size){

int max=arr[0];
for(int i=0;i<size;i++){

    if(max <arr[i]){
        max=arr[i];
    }
}

return max;


}