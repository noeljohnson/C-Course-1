//GTG

// Toss a coin 100 times and then record the statistics

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum CoinState {TAILS, HEADS};

int flip(void);

int main(void){
  
  srand(time(NULL));
  int numHeads = 0,
    numTails  = 0;

  for (int i = 0; i < 100; i++){
    
    switch(flip()){
      case HEADS:
        puts("HEADS");
        numHeads += 1;
        break;

      case TAILS:
        puts("TAILS");
        numTails += 1;
        break;

      default:
        puts("JUST HOW");
        break;
    }

  }

  printf("# heads : %d\n", numHeads);
  printf("# tails : %d\n", numTails);

  return (0);
}

int flip(void){
  return (rand() % 2);
}

//TYJC
