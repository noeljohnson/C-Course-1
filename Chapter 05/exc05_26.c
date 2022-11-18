//GTG

// program to find perfect numbers from 1 to 1000

#include <stdio.h>

int isPerfect(int num);

int main(void){
  
  for (int i = 1; i <= 1000; i++){
  
    if (isPerfect(i)){
      printf("%d is a perfect number\n", i);
    }

  }

}

int isPerfect(int num){
  int tot = 0 ;
  for (int i = 1; i < num / 2 + 1; i++){
    if (0 == num % i){
      tot += i;
    }
  }

  return (tot == num);
}

//TYJC
