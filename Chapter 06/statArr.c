//GTG

// The following program shows the usage of static arrays

# include <stdio.h>
# define SIZE 5

void staticArr(void);
void autoArr(void);
void dispArr(int arr[], int size);

int main(void){

  puts("\nFirst call to both functions");
  staticArr();
  autoArr();

  puts("\nSecond call to both functions");
  staticArr();
  autoArr();
  
  return (0);

}


void staticArr(void){
  static int arr[SIZE];

  puts("\n\nStatic array before operation");
  
  dispArr(arr, SIZE);

  puts("Static array after operation");
  
  for (size_t i = 0; i < SIZE; i++){
    arr[i] += 5;
  }

  dispArr(arr, SIZE);
}

void autoArr(void){

  int arr[SIZE] = {1, 2, 3, 4, 5};

  puts("\n\nAutomatic array before operation");
  
  dispArr(arr, SIZE);

  puts("Automatic array after operation");
  
  for (size_t i = 0; i < SIZE; i++){
    arr[i] += 5;
  }

  dispArr(arr, SIZE);

}

void dispArr(int arr[], int size){
  
  for (size_t i = 0; i < size; i++){
    printf("arr[%zu] = %d, ", i, arr[i]);
  }

  puts("");

}
//TYJC
