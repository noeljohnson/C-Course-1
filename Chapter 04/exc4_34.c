//GTG

/*

  To do an equivalence check between while and dp while

*/

#include <stdio.h>

int main(void){
  
  // do-while to while

  int num = 2;

  do{
    printf("%d ", num++);
  }while (num % 2 != 0);

  puts("");

  num = 2;
  while (1){
    
    printf("%d ", num);

    num++;

    if (num % 2 == 0){
      break;
    }
  }

  puts("");

  // while to do while
  
  num = 2;
  while (num % 2 != 0){
    printf("%d ", num);
  }
  
  puts("");
  
  do{
    if (num % 2 == 0){
      break;
    }
    printf("%d ", num);
  }while(1);
  
  puts("");
}

//TYJC
