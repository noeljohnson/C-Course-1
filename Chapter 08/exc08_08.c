//GTG

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20

int main(void){
  
 char inp[MAX_SIZE], *remPtr;
 double total = 0;

 for (size_t i = 0; i < 4; i++){
    fgets(inp, MAX_SIZE, stdin);
    total += strtod(inp, &remPtr);
 }

 printf("The total is %.2f\n", total);

}

//TYJC
