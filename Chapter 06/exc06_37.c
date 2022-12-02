//GTG

//To find the minimum of an array

#include <stdio.h>
#define SIZE 10

int minArr(const int arr[], int size);
int min(int n1, int n2);
void dispArr(const int arr[], size_t size);

int main(void){
  
  int arr[SIZE] = {9, 1, 2, 9, 3, 7, 5, 1, 4, 2};
  
  printf("Given the following array\n  ");
  dispArr(arr, SIZE);

  printf("The min is %d\n", minArr(arr, SIZE));

  return (0);
}

int minArr(const int arr[], int size){
  if (size == 1){
    return arr[0];
  }
  else if (size > 1){
    return (
    min(minArr(arr, size - 1), arr[size - 1])
      );
  }
  else{
    return (-1);
  }
}
int min(int n1, int n2){
  return ((n1 < n2) ? n1 : n2);
}
void dispArr(const int arr[], size_t size){
  for (size_t i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }

  puts("");
}
//TYJC
