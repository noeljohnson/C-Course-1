//GTG

//Efficient Swapping

#include <stdio.h>
#include <stdlib.h>
#define NUM_SUITS 4
#define NUM_FACES 13
#define NUM_CARDS 52

void cardShuffle(void);
void dealCards(void);
void initCards(void);
void printDeck(void);

const char *facesPtr[NUM_FACES] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
const char *suitePtr[NUM_SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
int ordArr[NUM_CARDS] = {0};

int main(void){
  
  initCards();
  puts("Before Shuffling");
  printDeck();
  cardShuffle();
  puts("After Shuffling");
  printDeck();
  dealCards();
  return (0);
}

void cardShuffle(void){
  int temp;
  for (size_t i = 0, ind; i < NUM_CARDS; i++){
    ind = rand() % (NUM_CARDS - i);
    temp = ordArr[NUM_CARDS - i];
    ordArr[NUM_CARDS - i] = ordArr[ind];
    ordArr[ind] = temp;
  }
}

void dealCards(void){
  
  for (size_t i = 0, rNum, cNum; i < NUM_CARDS; i++){
    rNum = ordArr[i] / NUM_FACES;
    cNum = ordArr[i] % NUM_FACES;
    printf("  %5s of %-8s", facesPtr[cNum], suitePtr[rNum]);
    if ((i + 1) % 4 == 0){
      puts("");
    }
  }

}

void initCards(void){
  for (size_t i = 0; i < NUM_CARDS; i++){
    ordArr[i] = i;
  }
}

void printDeck(void){

  static int cards[NUM_CARDS] = {0};
  for (size_t i = 0; i < NUM_CARDS; i++){
    cards[ordArr[i]] = i;
  }

  for (size_t row = 0; row < NUM_SUITS; row++){
    for (size_t col = 0; col < NUM_FACES; col++){
      printf(" %02d", cards[NUM_FACES * row + col]);
    }
    puts("");
  }

  puts("");
}
//TYJC
