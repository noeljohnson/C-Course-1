//GTG

// maximum function will return the maximum of three numbers

# include <stdio.h>

int maximum(int a, int b, int c);

int main(void){
  
  int num1, num2, num3;
  
  puts("Enter the three numbers");
  scanf("%d %d %d", &num1, &num2, &num3);

  printf("The maximum value among them is %d\n",
    maximum(num1, num2, num3)
  );

  return (0);
    
}

int maximum(int a, int b, int c){
  int maxVal = a;

  if (maxVal < b){
    maxVal = b;
  }

  if (maxVal < c){
    maxVal = c;
  }

  return(maxVal);
}

//TYJC
