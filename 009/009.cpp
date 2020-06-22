/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <iostream>

int main() {
  bool stop_loop = false;
  int product;
  for(int i=1; i<999; i++) {
    if(stop_loop) {
      break;
    }
    for(int j=1; j<999; j++) {
      if(stop_loop) {
        break;
      }
      for(int k=1; k<999; k++) {
        if( (i*i + j*j == k*k) && (i+k+j) == 1000) {
          stop_loop = true;
          break;
        }
      }
    }
  }
  std::cout << product << std::endl;
  return 0;
}
