//GTG

// A recursive function to print a string backwards

#include <stdio.h>
#define MAX_SIZE 100

void inpStr(char arr[]);
void printRev(const char arr[]);
void printRevRec(const char arr[], int ind);

int main(void){
  
  char charArr[MAX_SIZE + 1];
  printf("Enter the string ");
  inpStr(charArr);
  printf("The input string was \"%s\"\n", charArr);
  printf("The reverse is ");
  printRev(charArr);
}

void inpStr(char arr[]){
  char c, ind = 0;
  while ((c = getchar()) != '\n'){
    if (ind < MAX_SIZE){
      arr[ind] = c;
      ind++;
    }
  }

  arr[ind] = '\0';
}

void printRev(const char arr[]){
  printf("\"");
  printRevRec(arr, 0);
  puts("\"");
}

void printRevRec(const char arr[], int ind){
  if (arr[ind] != '\0'){
    printRevRec(arr, ind + 1);
    printf("%c", arr[ind]);
  }
}

//TYJC
