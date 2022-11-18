//GTG

// rec factorial implementation with visual appeasement

#include <stdio.h>

int recFactVis(int n, int depth);
int recFibVis(int n, int depth);
void spaces(int n);

int main(void){
  
  int n = 5, depth = 0;

  recFactVis(n, depth);
  printf("\n\n");
  recFibVis(n, depth);

  return (0);
}

void spaces(int n){
  
  for (int i = 0; i < n; i++){
    printf("%c", ' ');
  }

}

int recFactVis(int n, int depth){
  
  if(0 == n || 1 == n){
    return (1);
  }

  if (n > 1){
    int res;
    spaces(depth);
    printf("n = %d\n", n);
    res  = n * recFactVis(n - 1, depth + 1);
    spaces(depth);
    printf("fact(%d) = %d\n", n, res);
    return (res);
  }


}

int recFibVis(int n, int depth){
  if (0 == n || 1 == n){
    return (1);
  }
  else if (n > 1){
    int tot;
    spaces(depth);
    printf("n = %d\n", n);
    tot = recFibVis(n - 1, depth + 1);
    tot += recFibVis(n - 2, depth + 1);
    spaces(depth);
    printf("fib(%d) = %d\n", n, tot);
    return (tot);
  }
}
//TYJC
