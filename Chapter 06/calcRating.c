//GTG

// the following program is used to calculate the rating statistics given by students

# include <stdio.h>
# define RESP_SIZE 20
# define FREQ_SIZE 6


int main(void){

  int respArr[] = {1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5},
    freqArr[FREQ_SIZE] = {0};

  for (size_t i = 0; i < RESP_SIZE; i++){
    freqArr[respArr[i]]++;
  }

  printf("%s%12s\n", "Rating", "Frequency");
  
  for (size_t i = 1; i < FREQ_SIZE; i++){
    printf("%6zu%12d\n", i, freqArr[i]);
  }

  return (0);
}

//TYJC
