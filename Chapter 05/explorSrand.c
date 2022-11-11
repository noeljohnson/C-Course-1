//GTG

// Tossing a die ten times, but generates a diffrent sequence each time the program is run

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
  srand(time(NULL));
  
  for (int i = 0; i < 10; i++){
    
    printf("%d ", rand() % 6  + 1);

  }

  puts("");

}

//TYJC
