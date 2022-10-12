//GTG

//Find the class average of ten people

#include<stdio.h>

int main(void){
  
  int grade, total = 0, numStudents = 0, totStudents = 10;

  while (numStudents < totStudents){
    printf("%s ", "Enter grade");
    scanf("%d", &grade);

    total = total + grade;
    numStudents = numStudents + 1;
  }
  
  int average = total / numStudents;
  printf("The class average is %d\n", average);

}

//TYJC
