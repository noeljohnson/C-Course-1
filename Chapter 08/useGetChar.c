//GTG

#include <stdio.h>
#define SIZE 80

int main(void){

  char chrArr[SIZE] = "";
  int i = 0, c;
  puts("Enter the sentence");

  while ((i < SIZE - 1) && ((c = getchar()) != '\n')){
    chrArr[i++] = c;
  }

  chrArr[i] = '\0';

  puts("The sentence is");
  puts(chrArr);

}

//TYJC
