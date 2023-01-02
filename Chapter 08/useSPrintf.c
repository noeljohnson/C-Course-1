//GTG

#include <stdio.h>
#define SIZE 80

int main(void){
  
  int x = 0;
  double y  = 0.0;
  char chrArr[SIZE] = {'\0'};

  scanf("%d %lf", &x, &y);

  sprintf(chrArr, "The int is %d\nThe double is %.2f\n", x, y);

  printf("The line is:\n\n%s", chrArr);

  return(0);
}

//TYJC
