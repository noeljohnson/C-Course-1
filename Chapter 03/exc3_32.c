//GTG

/*
  3.32 (Square of Asterisks) Write a program that reads in the side of a square and then
  prints that square out of asterisks. Your program should work for squares of all side
  sizes between 1 and 20. For example, if your program reads a size of 4, it should print
  ****
  ****
  ****
  ****
*/

#include <stdio.h>

int main(void){
  
  int length = 20, i = 0, j;

  while (i < length){
    j = 0;

    while (j < length){
      printf("%c", '*');
      j++;
    }

    puts("");
    i++;
  }

}

//TYJC
