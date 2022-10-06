//GTG

#include <stdio.h>

int main(void){
  
  int a, b, c, n1, n2, n3;
  
  puts("Enter the three numbers");

  scanf("%d %d %d", &a, &b, &c);

  n1 = a, n2 = a + b + c, n3 = a;

  if (n1 < b){
    n1 = b;
  }

  if (n1 < c){
    n1 = c;
  }

  if (n3 > b){
    n3 = b;
  }

  if (n3 > c){
    n3 = c;
  }

  n2 = n2 - n1 - n3;

  printf("In descending order : %d, %d, %d\n", n1, n2, n3);



}

//TYJC
