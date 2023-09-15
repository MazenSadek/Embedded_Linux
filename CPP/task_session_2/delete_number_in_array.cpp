#include <iostream>

void delete_fun(int arr[], int &size, int num);
int main(int argc, const char **argv) {
  int num, size;
  int *ptr;
  int arr[5] = {8, 9, 7, 3, 2};
  size = sizeof(arr) / sizeof(arr[0]);
  std::cout << "enter your number :";
  std::cin >> num;
  delete_fun(arr, size, num);

  return 0;
}

void delete_fun(int arr[], int &size, int num) {

  int index = -1;
  for (int i = 0; i < size; i++) {

    if (num == arr[i]) {
      size--;
      index = i;
      for (int j = i; j < size; j++) {
        arr[j] = arr[j + 1];
      }
    }
  }

  if (index != -1) {

    for (int i = 0; i < size; i++) {
      std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

  } else {
    std::cout << " element don't found in array" << std::endl;
  }
}