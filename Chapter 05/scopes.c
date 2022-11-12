//GTG

// following program illustrates scoping

#include <stdio.h>

void localStorage(void);
void localStaticStorage(void);
void globalStorage(void);

int x = 5;

int main(void){
  
  int x = 5;
  printf("x = %d\n", x);

  {
    x = 7;
    printf("x = %d\n", x);
  }

  localStorage();
  puts("");
  localStaticStorage();
  puts("");
  globalStorage();
  puts("");

  localStorage();
  puts("");
  localStaticStorage();
  puts("");
  globalStorage();
  puts("");

  printf("x = %d\n", x);
  

  return (0);

}


void localStorage(void){
  puts("In localStorage");
  int x = 25;
  printf("x = %d and next is %d\n", x, x + 1);
  x++;
  printf("x = %d while leaving\n", x);

}

void localStaticStorage(void){
  puts("In localStaticStorage");
  static int x = 50;
  printf("x = %d and next is %d\n", x, x + 1);
  x++;
  printf("x = %d while leaving\n", x);

}
void globalStorage(void){
  puts("In globalStorage");
  printf("x = %d and next is %d\n", x, x * 10);
  x *= 10;
  printf("x = %d while leaving\n", x);
}

//TYJC
