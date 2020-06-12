# 005 Smallest multiple

## Problem
> 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

> What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

## Solution
_Need proof of this but have done trial and error_.

If the greatest common denominator of 1,2,3,...,10 is 2520 then the greatest common denominator of 1,2,3,...20 is a multiple of 2520. Which reduces loops by a factor of 2520.

Only need to check if the number if divisible by 11,12,...,19 because 2520 goes into 20 and also any number divisible by 11,12,...,19 is divisible by 1,2,...,9.

_There is also definitely something in here to do with primes, need to come back to it._

## Code
- [python](005.py)
- [c++](005.cpp)
