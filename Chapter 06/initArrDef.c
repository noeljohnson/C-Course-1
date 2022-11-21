//GTG

// to initialize an array with a definition

# include <stdio.h>

int main(void){
  
  int arr[5] = {2, 3, 1, 5, 4};

  printf("%s%8s\n", "Element", "Value");

  for (size_t i = 0; i < 5; i++){
    printf("%7zu%8d\n", i, arr[i]);
  }

  return (0);

}

//TYJC
