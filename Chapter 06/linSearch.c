//GTG

// the following program does a linear search to check wether an element is present in the array

# include <stdio.h>
# define SIZE 100

int findPos(int key, int arr[], size_t size);

int main(void){
  
  int key, arr[SIZE], pos;

  for (size_t i = 0; i < SIZE; i++){
    arr[i] = 2 * i;
  }

  printf("%s ", "Enter the key you want to search");
  scanf("%d", &key);

  pos = findPos(key, arr, SIZE);

  if (pos == -1){
    printf("The key %d is not present in the array\n", key);
  }
  else{
    printf("The key %d first occurence in arr is %d\n", key, pos);
  }

  return (0);

}

int findPos(int key, int arr[], size_t size){
  
  int res = -1;

  for (size_t i = 0; i < size; i++){
    if (arr[i] == key){
      res = i;
      break;
    }
  }

  return (res);

}
//TYJC
