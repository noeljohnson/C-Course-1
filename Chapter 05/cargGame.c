//GTG

// following game simulates carps

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// rolls two dice and sums thier value, to return it
int rollDie(void);

// enum that will be used to hold the game status
enum Status {CONTINUE, WON, LOST};

int main(void){
  
  srand(time(NULL));
  int roll = rollDie(), point;
  enum Status gameStatus = CONTINUE;

  switch(roll){
    
    case (7):
    case (11):
      gameStatus = WON;
      break;
    case (2):
    case (3):
    case (12):
      gameStatus = LOST;
      break;
    default:
      printf("Current point is %d\n", roll);
      point = roll;
  }

  while (gameStatus == CONTINUE){
    
    roll = rollDie();
    
    if (roll == point){
      gameStatus = WON;
    }else if (7 == roll){
      gameStatus = LOST;
    }
  
  }

  if (gameStatus == WON){
    puts("You have won the game");
  }else{
    puts("You have lost the game");
  }

  return(0);
  
}

int rollDie(void){
  
  int dice1, dice2, total;

  dice1 = 1 + rand() % 6;
  dice2 = 1 + rand() % 6;
  total = dice1 + dice2;

  printf("The faces are %d and %d totalling upto %d\n", dice1, dice2, total);

  return (total);

}

//TYJC
