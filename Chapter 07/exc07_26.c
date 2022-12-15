//GTG

#include <stdio.h>
#include <ctype.h>

double add(double n1, double n2);
double subtract(double n1, double n2);
double multiply(double n1, double n2);
double divide(double n1, double n2);

int main(void){
  
  double (*f[4])(double, double) = {add,
    subtract, multiply, divide};

  char op[2], run[2] = "y";
  double d1, d2;

  puts("+ for addition");
  puts("- for subraction");
  puts("* for multiplication");
  puts("/ for division");

  printf("%s ", "Enter first number :");
  scanf("%lf", &d1);

  while (toupper(run[0]) == 'Y'){
    printf("%s : ", "Enter operation");
    scanf("%1s", op);
    printf("%s ", "Enter second number :");
    scanf("%lf", &d2);

    switch(op[0]){
      case '+':
        d1 = (*f[0])(d1, d2);
        break;
      case '-':
        d1 = (*f[1])(d1, d2);
        break;
      case '*':
        d1 = (*f[2])(d1, d2);
        break;
      case '/':
        d1 = (*f[3])(d1, d2);
        break;
    }
    
    printf("res : %.2f\n", d1);
    printf("%s : ", "Press y to continue and n to quit");
    scanf("%1s", run);
  }

}

double add(double n1, double n2){
  return (n1 + n2);
}

double subtract(double n1, double n2){
  return (n1 - n2);
}

double multiply(double n1, double n2){
  return (n1 * n2);
}

double divide(double n1, double n2){
  return (n1 / n2);
}
//TYJC
