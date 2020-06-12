/*
003 Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
'''
*/

#include <iostream>
int main() {
  long int n;
  long int factor;

  n = 600851475143;
  factor = 2;

  while(factor*factor<=n){
    if (n%factor == 0){
      n = n / factor;
    }
    else {
      if(factor > 2){
        factor +=2;
      }
      else {
        factor +=1;
      }
    }
  }
  std::cout << n << std::endl;
}
