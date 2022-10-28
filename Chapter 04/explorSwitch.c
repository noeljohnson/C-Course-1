//GTG

// exploring the switch statement using grade entry program

#include <stdio.h>

int main(void){
  
  int aCount = 0,
    bCount = 0,
    cCount = 0,
    dCount = 0,
    fCount = 0,
    grade;

  while((grade = getchar()) != EOF){
    
    switch(grade){
      
        case 'A':
        case 'a':
          aCount++;
          break;

        case 'B':
        case 'b':
          bCount++;
          break;

        case 'C':
        case 'c':
          cCount++;
          break;

        case 'D':
        case 'd':
          dCount++;
          break;

        case 'f':
        case 'F':
          fCount++;
          break;

        case '\n':
        case '\t':
        case ' ':
          break;

        default:
          puts("Invalid Entry");
          break;

    }

  }
  
  puts("Following are the statistics");
  printf("# of A grade students : %d\n", aCount);
  printf("# of B grade students : %d\n", bCount);
  printf("# of C grade students : %d\n", cCount);
  printf("# of D grade students : %d\n", dCount);
  printf("# of F grade students : %d\n", fCount);

}

//TYJC
