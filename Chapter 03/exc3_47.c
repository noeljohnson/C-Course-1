//GTG

/*

eventually quadruple what it is today.
3.47 (Enforcing Privacy with Cryptography) The explosive growth of Internet com-
munications and data storage on Internet-connected computers has greatly increased
privacy concerns. The field of cryptography is concerned with coding data to make it
difficult (and hopefully—with the most advanced schemes—impossible) for unau-
thorized users to read. In this exercise, you’ll investigate a simple scheme for encrypt-
ing and decrypting data. A company that wants to send data over the Internet has
asked you to write a program that will encrypt it so that it may be transmitted more
securely. All the data is transmitted as four-digit integers. Your application should
read a four-digit integer entered by the user and encrypt it as follows: Replace each
digit with the result of adding 7 to the digit and getting the remainder after dividing
the new value by 10. Then swap the first digit with the third, and swap the second
digit with the fourth. Then print the encrypted integer. Write a separate application
that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption
scheme) to form the original number. [Optional reading project: In industrial-strength
applications, you’ll want to use much stronger encryption techniques than presented
in this exercise. Research “public-key cryptography” in general and the PGP (Pretty
Good Privacy) specific public-key scheme. You may also want to investigate the RSA
scheme, which is widely used in industrial-strength applications.]


*/

#include <stdio.h>

int main (void){
  
  int accMess, encryMess = 0, decryMess = 0, a, b, c, d;

  printf("%s ", "Enter 4 digit message");
  scanf("%d", &accMess);

  d  = accMess % 10;
  c = (accMess / 10) % 10;
  b = (accMess / 100) % 10;
  a = (accMess / 1000) % 10;

  d = (d + 7) % 10;
  c = (c + 7) % 10;
  b = (b + 7) % 10;
  a = (a + 7) % 10;

  decryMess = c + decryMess * 10;
  decryMess = d + decryMess * 10;
  decryMess = a + decryMess * 10;
  decryMess = b + decryMess * 10;


  d  = decryMess % 10;
  c = (decryMess / 10) % 10;
  b = (decryMess / 100) % 10;
  a = (decryMess / 1000) % 10;
  

  d = (d >= 7 ? d - 7 : d + 3);
  c = (c >= 7 ? c - 7 : c + 3);
  b = (b >= 7 ? b - 7 : b + 3);
  a = (a >= 7 ? a - 7 : a + 3);

  encryMess = c + encryMess * 10; 
  encryMess = d + encryMess * 10; 
  encryMess = a + encryMess * 10; 
  encryMess = b + encryMess * 10; 

  if (accMess ==  encryMess){
    printf("%d -> %d\n", accMess, decryMess);
    printf("%d -> %d\n", decryMess, encryMess);

  }

}

//TYJC
