/*
012 Highly divisible triangular number

The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?
*/

#include <vector>
#include <numeric>
#include <unordered_set>
#include <iostream>

long long floorSqrt(long long x) {
  // Base cases
  if (x == 0) {
    return x;
  }

  if (x == 1) {
    return x;
  }

  // Staring from 1, try all numbers until
  // i*i is greater than or equal to x.
  long long i = 1, result = 1;
  while (result <= x) {
    i++;
    result = i * i;
  }

  return i - 1;
}

std::vector<long long> factors(long long n) {

  std::vector<long long> divisors;
  long long sqrt_n;

  sqrt_n = floorSqrt(n);
  long long i = 1;

  while(true) {
    if (i >= sqrt_n) {
      break;
    }

    if (n % i == 0) {
      divisors.push_back(i);
      divisors.push_back(n/i);
    }

    i++;

  }

  return divisors;
}

std::unordered_set<long long> create_set(std::vector<long long> divisors) {

  std::unordered_set<long long> set;

  for (int i=0; i < divisors.size(); i++) {
    set.insert(divisors[i]);
  }

  return set;
}

int main(void) {
  std::vector<long long> numbers;
  std::vector<long long> divisors;
  std::unordered_set<long long> divisors_set;
  long long i=0;
  long long triangle_number;
  long long set_length;

  while(true) {
    i++;
    numbers.push_back(i);
    triangle_number = std::accumulate(numbers.begin(), numbers.end(), 0);
    divisors = factors(triangle_number);
    divisors_set = create_set(divisors);
    set_length = divisors_set.size();
    if (set_length > 500) {
      break;
    }
  }

  std::cout << triangle_number << std::endl;
}
