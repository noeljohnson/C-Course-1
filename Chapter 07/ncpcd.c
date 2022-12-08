//GTG

// non constant pointer to constant data, method to print the characters of a string

#include <stdio.h>

void printStr(const char *strPtr);

int main(void){
  
  char str[] = "print characters of a string";
  puts("The string is :");
  printStr(str);
  puts("");

  return(0);

}

void printStr(const char *strPtr){
  for (; *strPtr != '\0'; strPtr++){
    printf("%c", *strPtr);
  }
}

//TYJC
