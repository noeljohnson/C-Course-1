//GTG

#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  const char *line = "51.7 % support the bill";
  char *strPtr;
  double dVal = strtod(line, &strPtr);

  printf("%s : %.2f\n%s : %s\n",
    "Double Part", dVal,
    "String Part", strPtr);

  int iVal = strtol(line, &strPtr, 10);
  // 0 base would represent octal, decimal, hex
  printf("%s : %d\n%s : %s\n",
    "Int Part", iVal,
    "String Part", strPtr);

  const char *nLine = "0x12e4567 are the numbers";
  unsigned int uiVal = strtoul(nLine, &strPtr, 0);
  printf("%s : %zu\n%s : %s\n",
    "Unsigned Int Part", uiVal,
    "String Part", strPtr);
  
  return(0);

}

//TYJC
