//GTG

// to display the statistics of tossing a die 60 Million times

# include <stdio.h>
# include <stdlib.h>
# define SIZE 7

int main(void){
  
  int freqFace[SIZE] = {0};

  for (size_t i = 0, face; i < 60000000; i++){
    face = 1 + rand() % 6;
    freqFace[face]++;
  }

  printf("%s%17s\n", "Face", "Frequency");

  for (size_t face = 1; face < SIZE; face++){
    printf("%4zu%17d\n", face, freqFace[face]);
  }

  return (0);

}

//TYJC
