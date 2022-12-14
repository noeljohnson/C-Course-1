//GTG

// Following is a menu driven program to showcase the use of function pointer in arrays

#include <stdio.h>

void func1(int a);
void func2(int a);
void func3(int a);

int main(void){
  void (*f[3])(int) = {func1, func2, func3};
  
  int opt;

  do{
    printf("%s ", "Enter a number from 0 to 2 to execute a function, 3 to quit");
    scanf("%d", &opt);

    if (opt >= 0 && opt < 3){
      (*(f[opt]))(opt);
    }

    else if(opt == 3){
      puts("Terminating the program");
    }

    else{
      puts("Invalid option");
    }

  }while (opt != 3);
  
}

void func1(int a){
  printf("Using parameter %d for function1\n", a);
}

void func2(int a){
  printf("Using parameter %d for function2\n", a);

}

void func3(int a){
  printf("Using parameter %d for function3\n", a);
}
//TYJC
