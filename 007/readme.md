# 007 10001st prime

## Problem
> By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

> What is the 10 001st prime number?

## Solution
- Start with an intial list of primes `primes = [2,3]`
- Loop from 5 through all odd numbers
- Check if new number is a prime
- Append new number to list
- When primes list len is = n stop
- Return final prime

To check which is a prime brute force will work fast enough. Loop through odds and 2 if any divide the number equal it's not a prime.

## Code
- [python](007.py)
- [c++](007.cpp)
