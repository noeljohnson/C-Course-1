//GTG

// To show the equivalence of de morgans law

#include <stdio.h>

int main(void){
  
  int x = 5, y = 7;

  printf("Truth Value : %d\n", !(x > 5) && !(y >= 7));
  printf("Truth Value : %d\n", !((x > 5) || (y >= 7)));
  x = 4;
  
  printf("Truth Value : %d\n", !(x > 5) && !(y >= 7));
  printf("Truth Value : %d\n", !((x > 5) || (y >= 7)));

  printf("Truth value : %d\n", !(x == 6) || !(y != 5));
  printf("Truth value : %d\n", !((x == 6) && (y != 5)));
  
  x = 6;
  printf("Truth value : %d\n", !(x == 6) || !(y != 5));
  printf("Truth value : %d\n", !((x == 6) && (y != 5)));
  

  printf("Truth value : %d\n", !((x <= 8) && (y > 4)));
  printf("Truth value : %d\n", !(x <= 8) || !(y > 4));

  y = 3;


  printf("Truth value : %d\n", !((x <= 8) && (y > 4)));
  printf("Truth value : %d\n", !(x <= 8) || !(y > 4));
  
  printf("Truth value : %d\n", !((x > 4) || (y <= 6)));
  printf("Truth value : %d\n", !(x > 4) && !(y <= 6));
  x = 2;
  y = 7;

  printf("Truth value : %d\n", !((x > 4) || (y <= 6)));
  printf("Truth value : %d\n", !(x > 4) && !(y <= 6));
}

//TYJC
