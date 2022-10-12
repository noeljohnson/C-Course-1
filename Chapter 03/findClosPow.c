//GTG

// to find n | m ^ n <= x

#include <stdio.h>

int main(void){
  
  int m, n = 0, x, res = 1;
  
  printf("%s ", "Enter value of m");
  scanf("%d", &m);
  printf("%s ", "Enter value of x");
  scanf("%d", &x);
  
  if (m > 1){
    while (res * m <= x){
      res = res * m;
      n = n + 1;
    }  
    printf("%d ^ %d (%d) <= %d\n", m, n, res, x);
  }
  
  else{
    printf("m(%d) should be greater than 1\n", m);
  }
}

//TYJC
