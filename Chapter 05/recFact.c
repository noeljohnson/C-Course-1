//GTG

// the following is a recursive solution to find factorial

#include <stdio.h>

unsigned long long int fact(int num);

int main(void){
  
  for (int i = 0; i <= 20; i++){
    printf("(%d)! = %llu\n", i, fact(i));
  }

}

unsigned long long int fact(int num){
  
  if (num <= 1){
    return (1);
  }else{
    return (num * fact(num - 1));
  }

}

//TYJC
