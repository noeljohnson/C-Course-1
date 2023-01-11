//GTG

// to do a iterative soln for tower of hanoi

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void towOfHanoi(int n, int from, int to, int supp);

int main(void){
  
  int numDiscs = 22; //1 + rand() % 4;

  towOfHanoi(numDiscs, 1, 3, 2);

  return(0);
}
// move n-1 from `from` to `supp`
// mov nth disc from `from` to `to`
// move n-1 from `supp` to `to`


void towOfHanoi(int n, int from, int to, int supp){
  size_t totalSteps = ((n == 1) ? 1 : (pow(2, n - 1) - 1));
  static int up[] = {0, 2, 1};
  static int rev[] = {1, 2, 0};
  static int revRes[] = {1, 0, 2};

  int mapArr[] = {from, supp, to},
    res[totalSteps],
    csl = 0, f, t, dn;

  for (int cdn = 1, ns; cdn < n; cdn++){
     
     ns = 0;
     
     for (int ns1 = 0; ns1 < csl; ns1++){
        t = res[ns1] % 3;
        f = (res[ns1] / 3) % 3;
        dn = res[ns1] / 9;
        res[ns++] = 9 * dn + 3 * up[f] + up[t];
     }

      res[ns++] = 9 * cdn + 2;
      //printf("ns : %d, cdn : %d\n", ns, cdn);

     for (int ns2 = 0; ns2 < csl; ns2++){
        t = res[ns2] % 3;
        f = (res[ns2] / 3) % 3;
        dn = res[ns2] / 9;
        res[ns++] = 9 * dn + 3 * rev[f] + rev[t];
     }

     csl = ns;

  }
  
  for (int i = 0; i < csl; i++){
    printf("Move disc %d from %d to %d\n",
      res[i] / 9, 
      mapArr[up[(res[i] / 3) % 3]], 
      mapArr[up[res[i] % 3]]);
  }

  printf("Move disc %d from %d to %d\n", n, mapArr[0], mapArr[2]);

  for (int i = 0; i < csl; i++){
    printf("Move disc %d from %d to %d\n",
      res[i] / 9, 
      mapArr[revRes[(res[i] / 3) % 3]], 
      mapArr[revRes[res[i] % 3]]);
  }

}
//TYJC
