//GTG

#include <stdio.h>
#include <string.h>

void charPresent(const char *const strPtr, char c);

int main(void){
  char c1 = 'a',
    c2 = 'z',
    str[] = "This is a test";

  charPresent(str, c1);
  charPresent(str, c2);

  return (0);
}

void charPresent(const char *const strPtr, char c){

  printf("%c %s present in \"%s\"\n", c, 
    ((strchr(strPtr, c) != NULL) ? "is": "is not"), 
    strPtr);
}

//TYJC
