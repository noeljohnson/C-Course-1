//GTG

// to describe the output of the following program

#include <stdio.h>

int main(void){
  
  // print 5 rectangles of 3*4 asteriscs i.e (3 rows each containing 4 asterisks)

  for (int i = 1; i <= 5; ++i){ 
    for (int j = 1; j <= 3; ++j){ 
      for (int k = 1; k <= 4; ++k){ 
        printf("%s", "*"); 
      } 
      puts(""); 
    } 
    puts(""); 
  }

}

//TYJC
