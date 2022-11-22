//GTG

// the following program makes a character array

#include <stdio.h>
#define SIZE 20

int main(void){
  
  char string1[SIZE], string2[] = "string literal";

  printf("%s ", "Enter a string no longer than 19 characters");
  scanf("%19s", string1);

  printf("String1 : %s, String2 : %s\n", string1, string2);

  for (size_t i = 0; i < SIZE && string1[i] != '\0'; i++){
    printf("%c ", string1[i]);
  }

  puts("");

  return (0);

}

//TYJC
