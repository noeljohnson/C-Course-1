//GTG

# include <stdio.h>

int main(void){
  
  int a = 7,
    *aPtr = NULL;

  aPtr = &a;

  printf("The address of a is %p\n", &a);
  printf("Value of aPtr is %p\n", aPtr);
  printf("\nValue of a is %d\n", a);
  printf("Value of *aPtr is %d\n", *aPtr);

  puts("\nShowing that * and & are complements of each other");
  printf("&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

  return (0);

}

//TYJC
