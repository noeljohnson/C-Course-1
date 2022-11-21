//GTG

//Using arrays for totalling

#include <stdio.h>
#define SIZE 5

int main(void){
  
  int arr[SIZE] = {1, 2, 3, 4, 5}, // initializes all elements to zero
    total = 0;

  for (size_t i = 0; i < 5; i++){
    total += arr[i];
  }

  printf("The total is %d\n", total);

}

//TYJC
