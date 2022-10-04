//GTG

/*

  (Circle Area, Diameter and Circumference) For a circle of radius 2, display the diameter, 
  circumference and area. Use the value 3.14159 for π. Use the following formulas (r is the radius): 
  diameter = 2r, circumference = 2πr and area = πr2. Perform each of these calculations inside the 
  printf statement(s) and use the conversion specification %f. This chapter discussed only integer 
  constants and variables. Chapter 3 will discuss floating-point numbers—that is, values that can 
  have decimal points.

*/

#include <stdio.h>

int main(void){
  
  int radius  = 2;
  printf("Diameter : %f\n", 2.0 * radius);
  printf("Circumfrence : %f\n", 2 * 3.14159 * radius);
  printf("Circumfrence : %f\n", 3.14159 * radius * radius);

}

//TYJC
