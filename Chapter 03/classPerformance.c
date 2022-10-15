//GTG

// the following program analyzes class performance and based on it gives the bonus to the instructor

#include <stdio.h>

int main(void){
  
  int result, numPassed = 0, numFailed = 0, numStudents = 0;

  while (numStudents < 10){
    
    printf("%s ", "Enter result, (1:passed, 2:failed)");
    scanf("%d", &result);

    if (result == 1){
      numPassed = numPassed + 1;
    }
    else{
      numFailed = numFailed + 1;
    }

    numStudents = numStudents + 1;

  }

  printf("%d students passed\n", numPassed);
  printf("%d students failed\n", numFailed);

  if (numPassed > 8){
    puts("Bonus to the instructor");
  }
}

//TYJC
