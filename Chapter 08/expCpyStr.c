//GTG

#include <stdio.h>
#include <string.h>
#define SIZE1 15
#define SIZE2 25
#define SIZE 40

int main(void){
  char s1[] = "Happy Birthday to you",
    s2[SIZE2], s3[SIZE2], s4[SIZE] = "Happy ";

  strcpy(s3, s1);
  strncpy(s2, s1, SIZE1 - 1);
  strcat(s2, " ");
  strncat(s2, s1, SIZE2 - SIZE1 - 1);
  strcat(s4, s3);

  printf("%s: %s\n%s: %s\n%s: %s\n%s: %s\n",
    "s1", s1,
    "s2", s2,
    "s3", s3,
    "s4", s4);
}

//TYJC
