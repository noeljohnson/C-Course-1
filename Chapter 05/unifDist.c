//GTG

// to toes a die 60,000,000 times and record the count of each face

#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  int face, 
    freq1 = 0, freq2 = 0, freq3 = 3,
    freq4 = 0, freq5 = 0, freq6 = 0;

  for (int i = 0; i < 60000000; i++){
    face = rand() % 6 + 1;

    switch(face){
      
      case (1):
        freq1++;
        break;

      case (2):
        freq2++;
        break;

      case (3):
        freq3++;
        break;

      case (4):
        freq4++;
        break;

      case (5):
        freq5++;
        break;

      case (6):
        freq6++;
        break;
      
      default:
        printf("Just how %d\n", face);
        break;
    }
 
  }

  puts("face    frequency");
  printf("%4s%d%13d\n", "", 1, freq1);
  printf("%4s%d%13d\n", "", 2, freq2);
  printf("%4s%d%13d\n", "", 3, freq3);
  printf("%4s%d%13d\n", "", 4, freq4);
  printf("%4s%d%13d\n", "", 5, freq5);
  printf("%4s%d%13d\n", "", 6, freq6);

  return(0);

}

//TYJC
