//GTG

#include <stdio.h>
#include <string.h>

int main(void){
  
  char c1  = 'a', c2 = 'z',
    chrArr[] = "This is a test";

  if (strchr(chrArr, c1)){
    printf("Found %c in %s\n", c1, chrArr);
  }
  else{
     printf("Didnt find %c in %s\n", c1, chrArr);
  }

  if (strchr(chrArr, c2)){
    printf("Found %c in %s\n", c1, chrArr);
  }else{
     printf("Didnt find %c in %s\n", c2, chrArr);
    
  }

}

//TYJC
