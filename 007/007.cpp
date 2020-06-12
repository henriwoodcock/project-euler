/*
007 10001st prime

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>
#include <vector>

bool check_prime(long int n) {
  int factor;
  factor = 2;
  while(factor*factor <=n) {
    if(n%factor == 0){
      return false;
    }
    else {
      if(factor == 2){
        factor += 1;
      }
      else {
        factor +=2;
      }
    }
  }
  return true;
}

int nthPrime(long int n){
  std::vector<int> primes;
  primes.push_back(2);
  primes.push_back(3);
  int new_num;
  new_num = 3;
  if(n<4) {
    return primes[n-1];
  }

  while(primes.size() < n){
    new_num += 2;
    if(check_prime(new_num)){
      primes.push_back(new_num);
    }
  }
  return primes.end()[-1];
}

int main() {
  int n;
  n = 10001;
  int prime;
  prime = nthPrime(n);
  std::cout << prime << std::endl;
  return 0;
}
