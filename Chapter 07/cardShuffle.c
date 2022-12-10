//GTG

#include <stdio.h>
#include <stdlib.h>
#define NUM_SUITS 4
#define NUM_FACES 13
#define NUM_CARDS 52

void cardShuffle(int deck[NUM_SUITS][NUM_FACES]);
void dealCards(int deck[NUM_SUITS][NUM_FACES]);

const char *facesPtr[NUM_FACES] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
const char *suitePtr[NUM_SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};

int main(void){
  
  int deck[NUM_SUITS][NUM_FACES] = {{0}};
  cardShuffle(deck);
  dealCards(deck);
  return (0);
}

void cardShuffle(int deck[NUM_SUITS][NUM_FACES]){
  for (size_t i = 1, rNum, cNum; i <= NUM_CARDS; i++){
    rNum = rand() % NUM_SUITS;
    cNum = rand() % NUM_FACES;
    while (deck[rNum][cNum] != 0){
      rNum = rand() % NUM_SUITS;
      cNum = rand() % NUM_FACES;
    }
    deck[rNum][cNum] = i;
  }

}

void dealCards(int deck[NUM_SUITS][NUM_FACES]){
  for (size_t i = 1; i <= NUM_CARDS; i++){
    for (size_t rNum = 0; rNum < NUM_SUITS; rNum++){
      for (size_t cNum = 0; cNum < NUM_FACES; cNum++){
        if (deck[rNum][cNum] == i){
          printf("  %5s of %-8s", facesPtr[cNum], suitePtr[rNum]);
        }
      }
    }
    if (i % 4 == 0){
      puts("");
    }
  }
}

//TYJC
