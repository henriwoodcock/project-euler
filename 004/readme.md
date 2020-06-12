# 004 Largest palindrome product

## Problem
> A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

> Find the largest palindrome made from the product of two 3-digit numbers.

## Solution
A simple way to find palindromic numbers would be to convert them to strings and check the reverse is equal, however this is not very mathematical.

[This](https://medium.com/@ManBearPigCode/how-to-reverse-a-number-mathematically-97c556626ec6) medium article shows a way how to mathematic reverse a number. Once done all is left is to check if reverse=forward.

Reversing a number:
1. `last_digit = number mod 10` (mod returns the remainder, 101 mod10 = 1)
2. `reverse = (reverse * 10) + last_digit` (this is 0 plus last_digit)
3. `number = floor(number/10)` (this is now removing last digit from the number)
4. repeat the process

## Code
- [python](004.py)
- [c++](004.cpp)
