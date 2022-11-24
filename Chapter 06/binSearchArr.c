//GTG

// A program to implement binary search

# include <stdio.h>
# define SIZE 8

void drawRef(int size);
void printSubArr(const int arr[], size_t start, size_t end);
int binSearch(const int key, int arr[], size_t size);

int main(void){
  
  int arr[SIZE], key, ind;

  for (size_t i = 0; i < SIZE; i++){
    arr[i] = 2 * i;
  }

  printf("Enter a number between 0 and %d ", SIZE * 2 - 2);
  scanf("%d", &key);

  drawRef(SIZE);
  ind = binSearch(key, arr, SIZE);

  if (ind == -1){
    printf("%d not present in arr\n", key);
  }
  else{
    printf("%d is present in %d location\n", 
      key, ind);
  }

  return (0);

}

void printSubArr(const int arr[], size_t start, size_t end){
  int mid = (start + end) / 2;
  for (size_t i = 0; i < start; i++){
    printf("%4s", "");
  }

  for (size_t i = start; i < end; i++){
    printf("%3d%c", arr[i], ((i == mid) ? '*' : ' '));
  }
  puts("");
}

void drawRef(int size){
  
  puts("\nSubscript:");

  for(int i = 0; i < size; i++){
    printf("%3d ", i);
  }

  puts("");

  for(int i = 0; i < size; i++){
    printf("%s", "----");
  }

  puts("");

}

int binSearch(const int key, int arr[], size_t size){
  int low = 0, high = size, mid;

  while (low < high){
    printSubArr(arr, low, high);
    mid = (low + high) / 2;

    if (arr[mid] == key){
      return (mid);
    }
    else if(arr[mid] < key){
      low = mid + 1;
    }else{
      high = mid;
    }
  }

  return (-1);
}

//TYJC
