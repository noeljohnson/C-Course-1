//GTG

// the following program find the mean, median, mode of a survey

# include <stdio.h>
# define SIZE 99

void bubleSort(int arr[], int size);
void mean(const int arr[], int size);
void median(int arr[], int size);
void mode(int arr[], int size);
void printArr(int arr[], int size);

int main(void){

  int response[SIZE] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};

  mean(response, SIZE);
  median(response, SIZE);
  mode(response, SIZE);

  return (0);

}

void bubleSort(int arr[], int size){
  
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

void mean(const int arr[], int size){
  int total = 0;

  for (size_t i = 0; i < size; i++){
    total += arr[i];
  }

  puts("\n\n--------\n  Mean\n--------\n");
  printf("The mean is the average value of the data\nitems. The mean is the total of\nall the data items divided by the number\nof data items (%d). The mean value for\nthis run is: (%d / %d) = %.4f\n",
    size, total, size, (double) total / size);
}

void median(int arr[], int size){
  double res = 0;

  puts("\n\n--------\n Median\n--------\n");
  puts("The unsorted array of the response is");
  printArr(arr, size);

  bubleSort(arr, size);
  puts("\nThe sorted array is");
  printArr(arr, size);
  printf("%s", "\nThe median is ");
  
  if (size % 2 == 0){
    printf("the average of %d and %d elements ", size / 2, size/2 + 1);
    res = 0.5 * (arr[size / 2 - 1] + arr[size / 2]);
  }
  else {
    printf("%d element ", size / 2 + 1);
    res = arr[size / 2];
  }
  
  printf("of \nthe sorted %d element array.\nFor this run the median is %.2f\n",
    size, res
  );
}

void mode(int arr[], int size){
  size_t res = 1;
  puts("\n\n--------\n  Mode\n--------\n");
  printf("%s%11s%5s%s\n", "Response", "Frequency", "", "Bar Chart");
  
  int freq[10] = {0};

  for (size_t i = 0; i < size; i++){
    freq[arr[i]]++;
  }

  for (size_t i = 2; i < 10; i++){
    if (freq[i] > freq[res]){
      res = i;
    }
  }

  printf("%24s%10d%5d%5d%5d\n", "", 1, 1, 2, 2);
  printf("%24s%5d%5d%5d%5d%5d\n", "", 5, 0, 5, 0, 5);
  
  for (size_t i = 1; i < 10; i++){
    printf("%8zu%11d%5s", i, freq[i], "");

    for (int numAs = 0; numAs < freq[i]; numAs++){
      printf("%c", '*');
    }

    puts("");

  }

  puts("The mode is the most frequent value");
  printf("For this run the mode is %zu which occured %d times", res, freq[res]);

}
void printArr(int arr[], int size){
  
  for (size_t i = 0; i < size; i++){
    if (i % 20 == 0){
      puts("");
    }
    printf("%d ", arr[i]);
  }

}

//TYJC
