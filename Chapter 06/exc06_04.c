//GTG

# include <stdio.h>
# define SIZE 3

void printTable(int arr[][SIZE], size_t size);

int main(void){
  int t1[SIZE][SIZE] = {{0}};

  printf("The table contains %d elements\n", SIZE * SIZE);

  for (size_t i = 0; i < SIZE; i++){
    for (size_t j = 0; j < SIZE; j++){
      t1[i][j] = i + j;
    }
  }
  
  puts("Array T1");
  printTable(t1, SIZE);

  int t2[SIZE][SIZE] = {{1, 8}, {2, 4, 6}, {5}};

  puts("\nArray T2");
  printTable(t2, SIZE);

}

void printTable(int arr[][SIZE], size_t size){
  for (size_t i = 0; i < size; i++){
    for (size_t j = 0; j < size; j++){
      printf("%d ", arr[i][j]);
    }
    puts("");
  }
}
//TYJC
