//GTG

#include <stdio.h>
#include <stdlib.h>

#define SIZE 80

void revStr(const char *const strPtr);

int main(void){
  char str[SIZE];

  printf("%s : ", "Enter the line");
  fgets(str, SIZE, stdin);
  printf("\n%s", "The line backwards is");
  revStr(str);
  puts("");

  return(0);
}

void revStr(const char *const strPtr){
  if (strPtr[0] != '\0'){
    revStr(strPtr + 1);
    putchar(strPtr[0]);
  }
}
//TYJC
