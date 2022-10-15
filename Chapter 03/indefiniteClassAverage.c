//GTG

/*

  The following program calculates the average of a class, when the number of students arent mentioned
  before hand. It uses sentinal value of -1 to stop grade entry
*/

#include <stdio.h>

int main(void){
  
  int grade, numStudents = 0, total = 0;

  printf("%s ", "Enter grade, -1 to quit");
  scanf("%d", &grade);

  while (grade != -1){
    total = total + grade;
    numStudents = numStudents + 1;
   
    printf("%s ", "Enter grade, -1 to quit");
    scanf("%d", &grade);
    
  }

  if (numStudents > 0){
    double average  = (double) total / numStudents;
    printf("The class average is %.2f\n", average);
  }
  else {
    puts("No student grade entered");
  }
}

//TYJC
