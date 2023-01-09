//GTG

#include <stdio.h>
#include <string.h>

void copyStr(void *const dest,const void *const source, size_t len);

int main(void){
  
  char s1[] = "Hello Hi there";
  printf("s1 : \"%s\"\n", s1);

  puts("Copying \"Hello Hi\" into \"Hi\"");
  memmove(s1 + 6, s1, 8);

  printf("s1 : \"%s\"\n", s1);
  memcpy(s1, "Hello Hi there", strlen(s1));
  printf("Resetting s1, s1 : \"%s\"\n", s1);

  puts("If we tried with memcpy instead");
  memcpy(s1 + 6, s1, 8);
  printf("s1 : \"%s\"\n", s1);

  printf("s1 : \"%s\"\n", s1);
  memcpy(s1, "Hello Hi there", strlen(s1));
  printf("Resetting s1, s1 : \"%s\"\n", s1);

  puts("If we tried with userdefined copyStr instead");
  copyStr(s1 + 6, s1, 8);
  printf("s1 : \"%s\"\n", s1);
  
  printf("Words following the first occurence of \'o\' in s1 is \"%s\"\n", (char *) memchr(s1, 'o', strlen(s1)));
  
  char str1[] = "ABCDEFGHIJKL",
    str2[] = "ABCDEJKILMNOP";

  printf("str1 : %s\nstr2 : %s\n",
    str1, str2);

  printf("Comparing the first four characters of s1 and s2 : %d\n", memcmp(str1, str2, 4));

  printf("Comparing the first six characters of s1 and s2 : %d\n", memcmp(str1, str2, 6));


  memset(str2, 'A', 5);
  printf("Setting the first 5 characters of str2 to A, str2 : %s\n", str2);

  printf("Now comparing the first six characters of s1 and s2 : %d\n", memcmp(str1, str2, 6));

  return (0);
}

void copyStr(void *const dest,const void *const source, size_t len){
  char *const d = dest;
  char const *const s = source;
  for (size_t i = 0; i < len; i++){
    d[i] = s[i];
  }
}

//TYJC
