//GTG

#include <stdio.h>
#include <string.h>

int main(void){
  char s1[] = "Happy New Year",
    s2[] = "Happy New Year",
    s3[] = "Happy Holidays";

  printf("%s : %s\n%s : %s\n%s : %s\n",
    "s1", s1,
    "s2", s2,
    "s3", s3);

  printf("cmp(s1, s2) : %d\n", strcmp(s1,s2));
  printf("cmp(s1, s3) : %d\n", strcmp(s1,s3));
  printf("cmp(s2, s3) : %d\n", strcmp(s2,s3));
  
  printf("cmp(s1, s2, 5) : %d\n", strncmp(s1,s2, 5));
  printf("cmp(s1, s3, 5) : %d\n", strncmp(s1,s3, 5));
  printf("cmp(s2, s3, 7) : %d\n", strncmp(s2,s3, 7));

  return(0);
}

//TYJC
