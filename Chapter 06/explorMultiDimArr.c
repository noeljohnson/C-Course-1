//GTG

#include <stdio.h>

void printArr(int arr[2][3]);

int main(void){
  
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}},
    arr1[2][3] = {{1, 2}, {3, 4, 5}},
    arr2[2][3] = {{1}, {2, 3}};

  puts("Arr");
  printArr(arr);

  puts("Arr1");
  printArr(arr1);

  puts("Arr2");
  printArr(arr2);

  return (0);
}

void printArr(int arr[2][3]){
  
  for (size_t row = 0; row < 2; row++){
    for (size_t col = 0; col < 3; col++){
      printf("%d ", arr[row][col]);
    }
    puts("");
  }

}

//TYJC
