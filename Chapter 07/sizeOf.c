//GTG

#include <stdio.h>
#define SIZE 20

size_t getSize(const double *dbPtr);

int main(void){
  
  double arr[SIZE];
  printf("Size of array is %zu\n", sizeof(arr));
  printf("Size of arrPtr is %zu\n", getSize(arr));
  
  return (0);

}

size_t getSize(const double *dbPtr){
  return (sizeof(dbPtr));
}

//TYJC
