/*
Largest palindrome product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <iostream>

int reverse_number(long int number) {
  long int reverse;
  long int last_digit;
  reverse = 0;
  while(number > 0){
    last_digit = number%10;
    reverse = reverse*10 + last_digit;
    number = number / 10;
  }
  return reverse;
}

bool isPalidrome(long int number){
  if (number == reverse_number(number)){
    return true;
  }
  else {
    return false;
  }
}

int main() {
  int largest_palidrome;
  largest_palidrome = 0;
  for(int i=999; i>=100; --i){
    for(int j = i; j>=100; --j){
      if(j*i <= largest_palidrome){
        break;
      }
      if(isPalidrome(i*j)){
        largest_palidrome = i*j;
      }
    }
  }
  std::cout << largest_palidrome << std::endl;
}
