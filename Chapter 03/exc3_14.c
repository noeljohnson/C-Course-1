//GTG

/*

3.14 Formulate a pseudocode algorithm for each of the following: 
  a) Obtain two numbers from the keyboard, compute their sum and display the result. 
  b) Obtain two numbers from the keyboard, and determine and display which (if either) of the two numbers is the larger. 
  c) Obtain a series of positive numbers from the keyboard, and determine and display their sum. Assume that the user types the sentinel value -1 to indi- cate “end of data entry.”

*/

#include <stdio.h>

int main(void){
  
  int n1, n2, n, total = 0;
  printf("%s ", "Enter two numbers");

  scanf("%d %d", &n1, &n2);

  printf("Sum is %d\n", n1 + n2);

  printf("The larger is %d\n", (n1 > n2 ? n1: n2));

  printf("%s ", "Enter +ve number, -1 to quit");
  scanf("%d", &n);

  while (n != -1){
    if (n > 0){
      total += n;
    }

    else{
      puts("Invalid entry");
    }
    
    printf("%s ", "Enter +ve number, -1 to quit");
    scanf("%d", &n);

  }

  printf("The total is %d\n", total);

}

//TYJC
