//GTG

/*

  3.31 (Another Dangling-Else Problem) Modify the following code to produce the
  output shown. Use proper indentation techniques. You may not make any changes
  other than inserting braces. The compiler ignores the indentation in a program. We
  eliminated the indentation from the following code to make the problem more chal-
  lenging. [Note: It’s possible that no modification is necessary.]

  if (y == 8)
  if (x == 5)
  puts("@@@@@");
  else
  puts("#####");
  puts("$$$$$");
  puts("&&&&&");


*/

#include <stdio.h>

int main(void){
  
  int x = 5, y = 8;

  /*
    a) Assuming x = 5 and y = 8, the following output is produced.
    @@@@@
    $$$$$
    &&&&&

  */

  if (y == 8){
    if (x == 5){
      puts("@@@@@");
    }
  }
  else{
    puts("#####");
  }

  puts("$$$$$");
  puts("&&&&&");

  puts("");
  /*
    b) Assuming x = 5 and y = 8, the following output is produced.
    @@@@@
  */

  if (y == 8){
    if (x == 5){
      puts("@@@@@");
    }
  }
  else{
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");
   }

  puts("");
  /*
    c) Assuming x = 5 and y = 8, the following output is produced.
    @@@@@
    &&&&&
  */
 
  if (y == 8){
    if (x == 5){
      puts("@@@@@");
    }
  }
  else{
    puts("#####");
    puts("$$$$$");
   }

  puts("&&&&&");

  puts("");
  /*
    d) Assuming x = 5 and y = 7, the following output is produced.
    #####
    $$$$$
    &&&&&
  */

  y = 7;

  if (y == 8){
    if (x == 5){
      puts("@@@@@");
    }
  }
  else{
    puts("#####");
    puts("$$$$$");
   }

  puts("&&&&&");


}

//TYJC
