//GTG

#include <stdio.h>
#include <string.h>

int main(void){
  
  char str1[] = "  Hi there, teh how are you",
    str2[] = "teh",
    *tknPtr;

  printf("s1 : \"%s\"\ns2 : \"%s\"\n", 
    str1, str2);

  printf("\nThe sentence following the last occurence of \'%c\' in s1 is \"%s\"\n\n", 't', strrchr(str1, 't'));

  printf("How many characters are there in s1 before the first occurence of any character in s2 : %d\n\n",
    strcspn(str1, str2));

  printf("The first occurence was '%c'\n\n", 
    *strpbrk(str1, str2));

  printf("How many characters are there in s1 that are also there in s2 before none such happen : %d\n\n",
    strspn(str1, str2));

  printf("Part where s2 becomes a substring of s1 : %s\n", strstr(str1, str2));

  puts("Delimiting s1 by space");

  tknPtr = strtok(str1, " ");

  while (tknPtr != NULL){
    printf("%s\n", tknPtr);
    tknPtr = strtok(NULL, " ");
  }

  return(0);

}

//TYJC
