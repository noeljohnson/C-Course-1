//GTG

// Following program sorts using buble sort and pass by reference

#include <stdio.h>
#define SIZE 10

void printArr(const int *const arrPtr, size_t size);

void bubbleSort(int * const arrPtr, size_t size);

int main(void){
  int arr[] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
  puts("The original array is");
  printArr(arr, SIZE);
  bubbleSort(arr, SIZE);

  puts("The array after sorting");
  printArr(arr, SIZE);

}

void printArr(const int *const arrPtr, size_t size){
  for (size_t i = 0; i < size; i++){
    printf("%4d", arrPtr[i]);
  }

  puts("");
}

void bubbleSort(int * const arrPtr, size_t size){
  
  void swap(int *const ptr1, int *const ptr2);

  for (size_t i = 1; i < size; i++){
    for (size_t j = 0; j < size - i; j++){
      if (arrPtr[j] > arrPtr[j + 1]){
        swap(arrPtr + j, arrPtr + j + 1);
      }
    }
  }

}

void swap(int *const ptr1, int *const ptr2){
  int hold  = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = hold;
}

//TYJC
