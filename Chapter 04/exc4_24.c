//GTG

/*

Assume i = 1, j = 2, k = 3 and m = 2. What does each statement print?

*/

#include <stdio.h>

int main(void){
  
  int i = 1, j = 2, k = 3, m = 2;
  
  printf("%d", i == 1); // 1
  printf("%d", j == 3); // 0
  printf("%d", i >= 1 && j < 4); // 1
  printf("%d", m <= 99 && k < m); // 0
  printf("%d", j >= i || k == m); // 1
  printf("%d", k + m < j || 3 - j >= k); //0
  printf("%d", !m); //0
  printf("%d", !(j - m)); //1
  printf("%d", !(k > m)); //0
  printf("%d", !(j > k)); //1

}

//TYJC
