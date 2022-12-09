//GTG

//to get the sizeof all the components

#include <stdio.h>

int main(void){
  
  char c = 'a'; 
  short s = 0; 
  int i = 0; 
  long l = 0; 
  long long ll = 0; 
  float f = 0.0F; 
  double d = 0.0; 
  long double ld = 0.0; 
  int array[20] = {0}; 
  
  printf("Sizeof c   : %2zu,  Sizeof char   : %2zu\n", sizeof(c), sizeof(char));
  printf("Sizeof s   : %2zu,  Sizeof short  : %2zu\n", sizeof(s), sizeof(short));
  printf("Sizeof i   : %2zu,  Sizeof int    : %2zu\n", sizeof(i), sizeof(int));
  printf("Sizeof l   : %2zu,  Sizeof long   : %2zu\n", sizeof(l), sizeof(long));
  printf("Sizeof f   : %2zu,  Sizeof float  : %2zu\n", sizeof(ll), sizeof(long  long));
  printf("Sizeof d   : %2zu,  Sizeof double : %2zu\n", sizeof(d), sizeof(double));
  printf("Sizeof ld  : %2zu,  Sizeof Ldouble: %2zu\n", sizeof(ld), sizeof(long double));
  printf("Sizeof array : %2zu\n", sizeof(array));
  printf("Sizeof int pointer : %2zu\n", sizeof(int *));
  return(0);

}

//TYJC
