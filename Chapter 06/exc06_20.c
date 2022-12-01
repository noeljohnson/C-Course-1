//GTG

//Statistics of the game of carps

#include <stdio.h>
#include <stdlib.h>

# define NUM_TRAILS 1000000

void carpGame(int gameRes[2]);
int rollDie(void);

int main(void){
  
  int numWins = 0, numLosses = 0,
    winLength[21] = {0}, loseLength[22] = {0},
    gameRes[2];

  for (size_t i = 0; i < NUM_TRAILS; i++){
    carpGame(gameRes);
    if (gameRes[1] == 1){
      numWins++;
      if (gameRes[0] <= 20){
        winLength[gameRes[0]]++;
      }
      else{
        winLength[0]++;
      }
    }
    else {
      numLosses++;
      if (gameRes[0] <= 20){
        loseLength[gameRes[0]]++;
      }
      else{
        loseLength[0]++;
      }
    }
  }

  puts("Game statistics");

  printf("Num Wins : %d\n", numWins);
  printf("Num Losses : %d\n", numLosses);

  for (size_t length = 1; length < 21; length++){
    printf("For a length of %02zu\n", length);
    printf("%4sWins : %d\n", "", winLength[length]);
    printf("%4sLosses : %d\n", "", loseLength[length]);
  }

  puts("For Lengths above 20");
  printf("%4sWins : %d\n", "", winLength[0]);
  printf("%4sLosses : %d\n", "", loseLength[0]);
}

void carpGame(int gameRes[2]){
  gameRes[0] = 1; // stores game length
  gameRes[1] = 0; // stores game status
  int toss = rollDie() + rollDie(),
    point, length = 1;

  switch (toss){
    case 7:
    case 11:
      gameRes[1] = 1;
      break;
    case 2:
    case 3:
    case 12:
      gameRes[1] = 2;
      break;
    default:
      point = toss;
  }

  while (gameRes[1] == 0){
    toss = rollDie() + rollDie();
    if (toss == 7){
      gameRes[1] = 2;
    }
    else if (toss == point){
      gameRes[1] = 1;
    }

    gameRes[0]++;
  }

}

int rollDie(void){
  return (rand() % 6) + 1;
}
//TYJC
