//GTG

// the following program calculates the fibonacci of a number

#include <stdio.h>

unsigned long long int fib(int num);

int main(void){
  

  printf("fib(%d) = %llu\n", 10, fib(10));
  printf("fib(%d) = %llu\n", 20, fib(20));
  printf("fib(%d) = %llu\n", 30, fib(30));

  return(0);
}

unsigned long long int fib(int num){
  
  if (0 == num || 1 == num){
    return (num);
  }else if(num > 1){
    return (fib(num - 1) + fib(num -2));
  }

}

//TYJC
