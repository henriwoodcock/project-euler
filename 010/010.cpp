/*
010 Summation of primes

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <iostream>

bool is_prime(long long n)
{
	//returns 0 if not prime, 1 if prime
	if (n % 2 == 0)
		return 0;
	for (long long i = 3; i <= (pow(n,0.5)); i += 2)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main(void) {
  const long long limit = 2000000;
  unsigned long long sum_of_primes = 2;
  //start off with all as true
  for (int i = 3; i < 2000000; i += 2) {
    if (is_prime(i)) {
      sum_of_primes += i;
    }
  }

  std::cout << sum_of_primes << std::endl;

  return 0;
}
