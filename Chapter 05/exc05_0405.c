//GTG

#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2);
int smallest(int a, int b, int c);
void instruction(void);
double intToFloat(int num);

int main(void){
  
  printf("s1 : %.2f, s2: %.2f, hyp : %.2f\n", 3.0, 4.0, hypotenuse(3, 4));
  printf("smallest(%d, %d, %d) : %d\n", 3, 2, 4,
    smallest(3, 2, 4));
  instruction();
  printf("converting to float, %.2f\n", intToFloat(3));

  return(0);
}

double hypotenuse(double side1, double side2){
  return (pow((side1 * side1 + side2 * side2), 0.5));
}

int smallest(int a, int b, int c){
  int res = a;
  if (b < res){
    res = b;
  }

  if (c < res){
    res = c;
  }

  return(res);
}

void instruction(void){
  puts("Stand at ease");
  puts("attention");
}

double intToFloat(int num){
  return (double) num;
}

//TYJC
