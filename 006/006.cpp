/*
006 Sum square difference

The sum of the squares of the first ten natural numbers is,
1^2+2^2+...+10^2=385

The square of the sum of the first ten natural numbers is,
1+2+...+10)^2=55^2=3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>

int series_sum(long int n) {
  return n*(n+1)/2;
}

int squared_series_sum(long int n){
  return n*(n+1)*(2*n+1)/6;
}

int main() {
  int difference;
  int n = 100;
  difference = series_sum(n)*series_sum(n) - squared_series_sum(n);
  std::cout << difference << std::endl;
  return 0;
}
