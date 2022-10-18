//GTG

/*

Write a single C statement to accomplish each of the following: 
  a) Multiply the variable product by 2 using the *= operator. 
  b) Multiply the variable product by 2 using the = and * operators. 
  c) Test whether the value of the variable count is greater than 10. If it is, print "Count is greater than 10". 
  d) Calculate the remainder after quotient is divided by divisor and assign the result to quotient. Write this statement two different ways. 
  e) Print the value 123.4567 with two digits of precision. What value is printed? 
  f) Print the floating-point value 3.14159 with three digits to the right of the decimal point. What value is printed?

*/

#include <stdio.h>

int main(void){
  
  int variable  = 2, count = 3, x = 3, y = 2;
  variable *= 2;
  variable = variable * 2;

  printf("%s", (count > 10 ? "Count is greater than 100\n": "" ));
  printf("%d, %d\n", x % y, x - x / y * y);
  printf("%.2f\n%.3f\n", 123.4567, 3.14159);

}

//TYJC
