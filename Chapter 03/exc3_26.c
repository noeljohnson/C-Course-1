//GTG

/*
  3.26 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23,
find the two largest values of the 10 numbers. You may input each number only once.

*/

#include <stdio.h>

int main(void){
  
  int counter = 0, num, l1, l2;

  while (counter < 10){
    
    printf("%s ", "Enter number");
    scanf("%d", &num);

    if (counter == 0){
      l1 = num;
    }

    else if (l1 < num){
      l2 = l1;
      l1 = num;
    }

    else if (counter ==  1){
      l2 = num;
    }

    else if (l2 < num){
      l2 = num;
    }
    
    printf("%d, %d\n", l1, l2);
    counter++;
  }

  printf("The two largest number are %d and %d\n", 
    l1, l2);

}

//TYJC
