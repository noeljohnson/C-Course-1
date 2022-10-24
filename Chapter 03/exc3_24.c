//GTG

/*

c) largest—The largest number found so far.
3.24 (Tabular Output) Write a program that uses looping to print the following ta-
ble of values. Use the tab escape sequence, \t, in the printf statement to separate the
columns with tabs.

*/

#include <stdio.h>

int main(void){
  
  int counter = 1;
  printf("N\t10*N\t100*N\t1000*N\n");
  while (counter < 11){
    printf("%d\t%d\t%d\t%d\n", counter, 10 * counter, 100 * counter, 100 * counter);
    counter ++;
  }

}

//TYJC
