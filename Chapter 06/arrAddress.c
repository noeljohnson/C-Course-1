//GTG

#include <stdio.h>

int main(void){
  
  int arr[] = {1, 2, 3};
  puts("Address of");
  printf("%6sarr : %p\n", "", arr);
  printf("%5s&arr : %p\n", "", &arr);
  printf("%2s&arr[0] : %p\n", "", &arr[0]);

  return (0);
}

//TYJC
