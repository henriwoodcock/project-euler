/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <iostream>

long long find_triplet() {
  int z;
  for (int x = 1; x < 1000; ++x) {
    for (int y = 1; y < x; ++y) {
      z = 1000 - x - y;

      if (x*x + y*y == z*z) {
        return x*y*z;
      }
    }
  }
  return 0;
}

int main() {
  long long solution;

  solution = find_triplet();

  std::cout << solution << std::endl;

  return 0;
}
