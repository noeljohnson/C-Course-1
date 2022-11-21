//GTG

// to display the arr elements as a bar graph

#include <stdio.h>
#define SIZE 5

int main(void){
  
  int arr[SIZE] = {9, 3, 5, 7, 1};

  printf("%s%8s%10s\n", "Element", "Value", "Bar Chart");

  for (size_t i = 0; i < SIZE; i++){
    printf("%7zu%8d ", i, arr[i]);
    
    for (int j = 0; j < arr[i]; j++){
      printf("%c", '*');
    }

    puts("");
  }

  return(0);

}

//TYJC
