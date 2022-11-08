//GTG

// to calculate the compound intrest for many rates

#include <stdio.h>
#include <math.h>

int main(void){
  
  double principal = 1000.0,
    rate = 0.05,
    amount;

  printf("%4s%21s\n", "year", "Amount on deposit");
  
  for (int j = 5; j <= 10; j++){
    
    rate = (double) j / 100.0;
    printf("For rate = %.2f\n", rate);
    for (int year = 1; year <= 10; year++){
      amount = principal * pow(1 + rate, year);
      printf("%4d%21.2f\n", year, amount);
    }

    printf("\n\n");
  }

}

//TYJC
