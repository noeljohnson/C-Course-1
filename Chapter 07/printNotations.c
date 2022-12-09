//GTG

#include <stdio.h>
#define SIZE 4

void printArr(const int *const arrPtr, size_t size, const char *const arrNamePtr, int dispType);

int main(void){
  
  int b[] = {10, 20, 30, 40};
  const int *const bPtr = b;

  puts("Array b printed with:");
  puts("Array subscript notation");
  
  printArr(b, SIZE, "b", 0);

  puts("Pointer/offset notation where the pointer is the array name");
  printArr(b, SIZE, "b", 1);

  puts("Pointer subscript notation");
  printArr(bPtr, SIZE, "bPtr", 0);

  puts("Pointer/offset notation");
  printArr(bPtr, SIZE, "bPtr", 1);
  
  return(0);

}

void printArr(const int *const arrPtr, size_t size, const char *const arrNamePtr, int dispType){
  for (size_t i = 0; i < size; i++){
    switch(dispType){
      case 0:
        printf("%s[%zu] = %d\n", arrNamePtr, i, arrPtr[i]);
        break;
      case 1:
        printf("*(%s + %zu) = %d\n", arrNamePtr, i, *(arrPtr + i));
    }
  }
}

//TYJC
