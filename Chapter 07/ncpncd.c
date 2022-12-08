//GTG

//Converting a string to uppercase letters

#include <stdio.h>
#include <ctype.h>

void convStrUpper(char *strPtr);

int main(void){
  
  char str[] = "cHaRaCters and $32.98";
  printf("The string before conversion is %s\n", str);
  convStrUpper(str);
  printf("The string after conversion is %s\n", str);

  return(0);

}

void convStrUpper(char *strPtr){
  while (*strPtr != '\0'){
    *strPtr = toupper(*strPtr);
    strPtr++;
  }
}

//TYJC
