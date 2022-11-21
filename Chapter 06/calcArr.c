//GTG

//Using arrays for calculations and symbolic constants

#include <stdio.h>
#define SIZE 5

int main(void){
  
  int arr[SIZE] = {0}; // initializes all elements to zero

  for (size_t i = 0; i < 5; i++){
    arr[i] = 2 * i + 2;
  }

  printf("%s%8s\n", "Element", "Value");

  for (size_t i = 0; i < 5; i++){
    printf("%7zu%8d\n", i, arr[i]);
  }

}

//TYJC
