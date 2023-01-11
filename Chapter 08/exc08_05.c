//GTG

/*
8.5 (Character Testing) Write a program that inputs a character from the keyboard and tests it with each of the character-handling library functions. The program should print the value returned by each function.
*/

#include <stdio.h>
#include <ctype.h>

void descChar(int chr);

int main(void){
  
  int c;
  while ((c = getchar()) != EOF && c != '\n'){
    descChar(c);
  }
  return(0);

}

void descChar(int chr){
  char c = chr;
  printf("%c is\n", c);
  if (isdigit(c)){
    puts("  a digit");
  }

  if (isalpha(c)){
    puts("  an alphabet");
  }

  if (isalnum(c)){
    puts("  an alphanumeric character");
  }

  if (isxdigit(c)){
    puts("  an hexadecimal digit");
  }

  if (islower(c)){
    puts("  a lowercase letter");
  }

  if (isupper(c)){
    puts("  an uppercase letter");
  }

  if (isspace(c)){
    puts("  a space character");
  }

  if (iscntrl(c)){
    puts("  a control character");
  }

  if (isprint(c)){
    puts("  a printable character");
  }

  if (ispunct(c)){
    puts("  a punctuation");
  }

  if (isgraph(c)){
    puts("  a graph character");
  }
  puts("\n\n");
}

//TYJC
