//GTG

#include <stdio.h>

int main(void){
  
  char chrArr[] = "31298\n87.375";

  int x = 0;
  double y = 0.0;

  sscanf(chrArr, "%d %lf", &x, &y);

  printf("The original sentence was:\n%s", chrArr);
  printf("\n\nExtracted values are\nx : %d\ny : %.3f\n", x, y);

}

//TYJC
