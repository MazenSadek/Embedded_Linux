#include <iostream>
int search_fun(int arr[],int size, int num);
int main(int argc, const char** argv) {
    int num,size,findnum;
    int arr[5]={8,9,7,3,2};
    size=sizeof(arr)/sizeof(arr[0]);
    std::cout << "enter your number :" ;
    std::cin>> num;
    findnum=search_fun(arr,size,num);
    if(findnum!=-1){
    std::cout << "index of number that you seach in array: "<<findnum << std::endl;
    }

    else
    {
        std::cout << "number don't found in array: "<< std::endl;
    }
    
    return 0;
}

int search_fun(int arr[],int size, int num){

 for(int i=0;i<size;i++){

    if(num==arr[i]){
     return  i;
     
    }   
 }

return  -1;
}