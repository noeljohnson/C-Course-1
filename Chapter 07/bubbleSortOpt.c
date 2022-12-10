//GTG

// sorting an array in ascending or descending order using bubble sort

#include <stdio.h>
#define SIZE 10

int ascSwap(int a, int b);
int desSwap(int a, int b);
void bubbleSort(int *const arrPtr, size_t size, int (*swpCond)(int, int));
void printArr(const int *const arrPtr, size_t size);

int main(void){
  
  int arr[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37},
    opt;

  puts("Enter 1 for ascending and 2 for descending");
  scanf("%d", &opt);

  puts("Array before operation");
  printArr(arr, SIZE);

  switch(opt){
    case 1:
      bubbleSort(arr, SIZE, ascSwap);
      break;
    case 2:
      bubbleSort(arr, SIZE, desSwap);
      break;
    default:
      puts("Invalid Option");
      break;
  }
  
  puts("Array after operation");
  printArr(arr, SIZE);

}

int ascSwap(int a, int b){
  return (a > b);
}

int desSwap(int a, int b){
  return (b  > a);
}

void bubbleSort(int *const arrPtr, size_t size, int (*swpCond)(int a, int b)){

  void swap(int *const p1, int *const p2);

  for (size_t i = 1; i < size; i++){
    for (size_t j = 0; j < size - i; j++){
      if ((*swpCond)(arrPtr[j], arrPtr[j + 1])){
        swap(arrPtr + j, arrPtr + j + 1);
      }
    }
  }
}

void printArr(const int *const arrPtr, size_t size){
  for (size_t i = 0; i < size; i++){
    printf("%3d", *(arrPtr + i));
  }

  puts("");
}

void swap(int *const p1, int *const p2){
  int hold  = *p1;
  *p1  = *p2;
  *p2 = hold;
}
//TYJC
