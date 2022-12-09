//GTG

#include <stdio.h>

void copy1 (char *const s1, const char *const s2);
void copy2 (char *s1, const char *s2);

int main(void){
  
  char string1[] = "Hello",
    string3[] = "Good Bye";

  char string2[6],
    string4[9];

  copy1(string2, string1);
  copy2(string4, string3);

  printf("String2 : %s\n", string2);
  printf("String4 : %s\n", string4);

  return (0);

}

void copy1 (char *const s1, const char *const s2){
  for (size_t i = 0; (s1[i] = s2[i]) != '\0'; i++){;}
}

void copy2 (char *s1, const char *s2){
  for (; (*s1 = *s2) != '\0'; s1++, s2++){;}
}
//TYJC
