//GTG

// Variable length arrays

# include <stdio.h>

void print1d(size_t len, const int arr[len]);
void print2d(size_t row, size_t col, const int arr[row][col]);

int main(void){
  
  size_t size;
  printf("%s", "Enter size for 1d array ");
  scanf("%zu", &size);

  int arr1d[size];
  size_t row1, col1;

  printf("%s", "Enter number of rows and columns for 2d array_1 ");
  scanf("%zu%zu", &row1, &col1);

  int arr2d1[row1][col1];
 
  size_t row2, col2;
  printf("%s", "Enter number of rows and columns for 2d array_2 ");
  scanf("%zu%zu", &row2, &col2);

  int arr2d2[row2][col2];

  printf("\nsizeof(array) yields size of %ld\n", sizeof(arr1d));

  for (int i = 0; i < size; i++){
    arr1d[i] = i * i;
  }

  for (int i = 0; i < row1; i++){
    for (int j = 0; j < col1; j++){
      arr2d1[i][j] = i + j;
    }
  }

  for (int i = 0; i < row2; i++){
    for (int j = 0; j < col2; j++){
      arr2d2[i][j] = i + j;
    }
  }
  
  print1d(size, arr1d);
  print2d(row1, col1, arr2d1);
  print2d(row2, col2, arr2d2);

  return (0);

}

void print1d(size_t len, const int arr[len]){
  
  puts("One dimensional Array");

  for (size_t i = 0; i < len; i++){
    printf("array[%zu] = %d\n", i, arr[i]);
  }
}

void print2d(size_t row, size_t col, const int arr[row][col]){
  
  puts("Two dimensional array");
  
  for (size_t i = 0; i < row; i++){
    for (size_t j = 0; j < col; j++){
      printf("%5d", arr[i][j]);
    }
    puts("");
  }

}
//TYJC
