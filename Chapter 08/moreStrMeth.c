//GTG

#include <stdio.h>
#include <string.h>

int main(void){
  
  puts(strerror(2));
  printf("The location for the error is %p\n", strerror(2));
  printf("The length of the error string is : %zu\n", strlen(strerror(2)));
  printf("The location for the error is %p\n", strerror(2));

  return (0);

}

//TYJC
