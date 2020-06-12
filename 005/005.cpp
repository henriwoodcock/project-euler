/*
005 Smallest multiple

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <iostream>

bool check_if_divisible(long int number) {
  int nums[9] = {19,18,17,16,15,14,13,12,11};
  int divisor;
  for(int i=0; i<9; i++){
    divisor=nums[i];
    if(number%divisor != 0){
      return false;
    }
  }
  return true;
}

int main() {
  int number;
  number = 2520;
  while(true){
    if(check_if_divisible(number)){
      break;
    }
    else {
      number += 2520;
    }
  }
  std::cout << number << std::endl;
}
