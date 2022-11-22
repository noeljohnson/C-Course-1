//GTG

// modifying arrays by passing them to functions

# include <stdio.h>
#define SIZE 4
void dispArr(const int arr[], size_t size);
void modifyArr(int arr[], size_t size);
void modifElement(int elem);

int main(void){
  
  int arr[SIZE] = {1, 2, 3, 4};
  modifyArr(arr, SIZE);
  printf("In main arr is : ");
  dispArr(arr, SIZE);
  
  modifElement(arr[3]);
  printf("In main arr[3] = %d\n", arr[3]);

  return (0);

}

void dispArr(const int arr[], size_t size){

  for (size_t i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }

  puts("");

}

void modifyArr(int arr[], size_t size){

  puts("Before modfication : ");
  dispArr(arr, size);

  for (size_t i = 0; i < size; i++){
    arr[i] *= 2;
  }

  puts("After modfication : ");
  dispArr(arr, size);

}

void modifElement(int elem){
  
  printf("Element before modification : %d\n", elem);
  elem *= 2;
  printf("Element after modification : %d\n", elem);

}
//TYJC
