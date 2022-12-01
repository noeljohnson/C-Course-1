//GTG

# include <stdio.h>

int main(void){
  
  int count[10] = {0},
    bonus[15] = {0},
    bestScores[5] = {2, 3, 4, 1, 2};
  
  for (size_t i = 0; i < 15; i++){
    bonus[i]++;
  }

  double monthlyTemp[12];

  for (size_t i = 0; i < 12; i++){
    printf("Enter temperature for month_%02zu ", i+1);
    scanf("%lf", &monthlyTemp[i]);
  }

  for (size_t i = 0; i < 5; i++){
    printf("Score %zu : %d\n", i + 1, bestScores[i]);
  }

}

//TYJC
