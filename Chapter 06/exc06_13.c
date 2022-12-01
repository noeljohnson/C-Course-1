//GTG

/*
  a) Assume: char str[5 ] = "" ;
  scanf("%s" , str); // User types hello
  b) Assume: int a[ 3 ];
  printf("$d %d %d\n" , a[ 1 ], a[2 ], a[ 3 ]);
  c) double f[ 3 ] = {1.1 , 10.01 , 100.001, 1000.0001};
  d) Assume: double d[2 ][10 ] = { 0 };
  d[1 , 9 ] = 2.345 ;
*/

# include <stdio.h>

int main(void){
  
  char str[5] = "";
  
  int res = scanf("%4s", str);
  
  if (res == 0){
    puts("Input failed");
  }

  printf("%s\n", str);

  int a[3];
  printf("%d %d %d\n", a[0], a[1], a[2]);

  double f[] = {1.1, 10.01, 100.001, 1000.0001},
      d[2][10] = {{0}};

  d[1][9] = 2.345;

  for (size_t i = 0; i < 2; i++){
    for (size_t j = 0; j < 10; j++){
      printf("%4.2lf ", d[i][j]);
    }
    puts("");
  }

}

//TYJC
