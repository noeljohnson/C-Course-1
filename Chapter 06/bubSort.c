//GTG

// Implementing the bubble sort

# include <stdio.h>
# define SIZE 10

void bubSort(int arr[], int size);
void dispArr(const int arr[], size_t size);

int main(void){
  
  int arr[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

  puts("Array before sorting");
  dispArr(arr, SIZE);

  bubSort(arr, SIZE);

  puts("Array after sorting");
  dispArr(arr, SIZE);

  return (0);

}


void bubSort(int arr[], int size){
  
  for (int i = 1, temp; i < size; i++){
    for (size_t j = 0; j < size - i; j++){
      if (arr[j] > arr[j + 1]){
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

}

void dispArr(const int arr[], size_t size){
  for (size_t i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }

  puts("");
}
