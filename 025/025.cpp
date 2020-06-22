/*
025 1000-digit Fibonacci number

The Fibonacci sequence is defined by the recurrence relation:

Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
Hence the first 12 terms will be:

F1 = 1
F2 = 1
F3 = 2
F4 = 3
F5 = 5
F6 = 8
F7 = 13
F8 = 21
F9 = 34
F10 = 55
F11 = 89
F12 = 144
The 12th term, F12, is the first term to contain three digits.

What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
*/

#include <iostream>
#include <vector>

int main() {
  long double big_number=1.0;
  std::vector<long double> fib_numbers;
  fib_numbers.push_back(1.0);
  fib_numbers.push_back(1.0);
  long double next_fib;

  for(int i=1; i<=999; i++){
    big_number *= 10;
  }
  long long j = 2;
  while(true) {
    next_fib = fib_numbers[j-1] + fib_numbers[j-2];
    fib_numbers.push_back(next_fib);
    if(next_fib/big_number >= 1.0) {
      break;
    }
    j+=1;
  }
  std::cout << j+1 << std::endl;
  return 0;
}
