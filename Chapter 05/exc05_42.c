//GTG

//printing in order and printing in reverse

#include <stdio.h>

void inOrderPrint(void);
void inReversePrint(void);

int main(void){
  
  //inOrderPrint();
  printf("\n\n");
  inReversePrint();
}


void inOrderPrint(void){
  int c = '\0';
  
  if ((c= getchar()) != EOF){
    printf("%c", c);
    inOrderPrint();
  }
}

void inReversePrint(void){

  int c = '\0';
  
  if ((c= getchar()) != EOF){
    inReversePrint();
    printf("%c", c);
  }

}

//TYJC
