//GTG

// to cube by value and by reference

#include <stdio.h>

int cubeByValue(int num);
void cubeByRef(int *nPtr);

int main(void){
  
  int num = 2;
  printf("num = %d\n", num);
  printf("Cubing by value : %d\n", cubeByValue(num));

  cubeByRef(&num);
  printf("num = %d\n", num);
  printf("Cubing by reference : %d\n", num);
  return (0);

}

int cubeByValue(int num){
  return (num * num * num);
}

void cubeByRef(int *nPtr){
  *nPtr = *nPtr * *nPtr * *nPtr;
}
//TYJC
