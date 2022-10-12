//GTG

// to explore multiple nested if else

#include <stdio.h>

int main(){

  int grade;
  printf("%s ", "Enter grade");

  scanf("%d", &grade);

  if (grade >= 90){
    puts("You have recieved A grade");
  }
  else if (grade >= 80){
    puts("You have recieved B grade");
  }
  else if (grade >= 70){
    puts("You have recieved C grade");
  }
  else if(grade >= 60){
    puts("You have recieved D grade");
  }
  else{
    puts("You have failed");
  }

}

//TYJC
