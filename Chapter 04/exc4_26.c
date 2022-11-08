//GTG

// 3.14159

#include <stdio.h>

int main(void){
  
  double pi = 3.141592653589793238, err = 1e-3, accErr, calcPi = 0, sign = 1.0;
  int count = 0;

  while (err > 1e-7){
    
    calcPi += sign * 4/(2 * count + 1);
    sign *= -1;
    count++;

    accErr = pi - calcPi;
    
    if (accErr < 0){
      accErr *= -1;
    }

    if (err > accErr){
      printf("After %d terms, the calculated value of pi is %f\n", count, calcPi);
      err *= 0.1;
    }

  }

}

//TYJC
