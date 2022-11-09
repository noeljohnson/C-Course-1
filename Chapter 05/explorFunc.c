//GTG

// the following program will implement a square function and display squares from 1 to 10

#include <stdio.h>

int square(int num);

int main(void){
  
  for (int i = 1; i <= 10; i++){
    printf("%d ", square(i));
  }

  puts("");

}

int square (int num){
  
  return (num * num);

}

//TYJC
