# 003 Largest prime factor

## Problem
> The prime factors of 13195 are 5, 7, 13 and 29.

> What is the largest prime factor of the number 600851475143 ?

## Solution
The _fundamental theorem of arithmetic_ states that all integers have a unique factorisation into a product of prime numbers.

So for example from wikipedia:
```
1200 = 2^4 * 3^1 * 5^2
```
This factorisation is unique and 1200 can only be factored into four 2s, one 3 and two 5s when factored into prime numbers.

So a solution to this problem would be to keep factoring out the smallest factor (starting from two) then increase when it can no longer be factored out. Once we reach a number which when squared is greater than N then e can stop as all numbers past will be greater than.

## Code
- [python](003.py)
