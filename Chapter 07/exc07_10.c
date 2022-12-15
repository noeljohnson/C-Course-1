//GTG

/*
7.10 For each of the following, write a single statement that performs the indicated task. Assume that long integer variables value1 and value2 have been defined and that value1 has been initialized to 200000. 
  a) Define the variable lPtr to be a pointer to an object of type long. 
  b) Assign the address of variable value1 to pointer variable lPtr. 
  c) Print the value of the object pointed to by lPtr. 
  d) Assign the value of the object pointed to by lPtr to variable value2. 
  e) Print the value of value2. 
  f) Print the address of value1. 
  g) Print the address stored in lPtr. Is the value the same as the address of value1?
*/

#include <stdio.h>

int main(void){
  long int value1, value2, *lPtr;

  value1 = 200000;
  lPtr = &value1;

  printf("Value : %ld\n", *lPtr);
  value2 = *lPtr;

  printf("&value1 : %p\n", &value1);
  printf("lPtr : %p\n", lPtr);
  return (0);
}
//TYJC
