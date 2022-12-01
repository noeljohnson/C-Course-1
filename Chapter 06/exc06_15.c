//GTG

# include <stdio.h>
# include <stdlib.h>

#define START 10
#define END 20

void initArr(int arr[], int initVal, size_t size);

int main(void){

  int range = (END - START + 1),
    entry;
  int arr[range];
  initArr(arr, 0, range);

  for (size_t  i = 0; i < 20; i++){
    entry = START + rand() % range;
    arr[entry - START]++;
    
    printf("Entry was %d\n", entry);

    if (arr[entry - START] == 1){
      printf("%d was a new entry\n", entry);
    }
  }
}

void initArr(int arr[], int initVal, size_t size){
  for (size_t i = 0; i < size; i++){
    arr[i] = initVal;
  }
}
//TYJC
