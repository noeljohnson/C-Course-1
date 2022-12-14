//GTG

# include <stdio.h>
# define SIZE 10

int main(void){
  float arr[] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5,
    6.6, 7.7, 8.8, 9.9},
    *fltPtr;

  for (size_t i = 0; i < SIZE; i++){
    printf("%.1f, ", arr[i]);
  }
  puts("");

  fltPtr = arr; //another way, fltPtr = &arr[0]\
  
  for (size_t i = 0; i < SIZE; i++){
    printf("%.1f, ", *(fltPtr + i));
  }
  puts("");

  for (size_t i = 0; i < SIZE; i++){
    printf("%.1f, ", *(arr + i));
  }
  puts("");

  for (size_t i = 0; i < SIZE; i++){
    printf("%.1f, ", fltPtr[i]);
  }
  puts("");

  printf("fltPtr : %p\n", fltPtr);
  printf("fltPtr + 8 : %p\n", fltPtr + 8);

  fltPtr = arr + 5;
  
  printf("fltPtr - 4 is dereferenced to %.1f\n", 
    *(fltPtr - 4));
}

//TYJC
