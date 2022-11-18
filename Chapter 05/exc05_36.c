//GTG

// to do a rec soln for tower of hanoi

#include <stdio.h>
#include <stdlib.h>

void towOfHanoi(int n, int from, int to, int supp);

int main(void){
  
  int numDiscs = 1 + rand() % 4;

  towOfHanoi(numDiscs, 1, 3, 2);

  return(0);
}
// move n-1 from `from` to `supp`
// mov nth disc from `from` to `to`
// move n-1 from `supp` to `to`


void towOfHanoi(int n, int from, int to, int supp){
  if (n > 0){
    towOfHanoi(n - 1, from, supp, to);
    printf("Move disc %d from %d to %d\n", n, from, to);
    towOfHanoi(n - 1, supp, to, from);
  }
}
//TYJC
