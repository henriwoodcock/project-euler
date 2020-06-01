# 003 Largest prime factor

## Problem
> The prime factors of 13195 are 5, 7, 13 and 29.

> What is the largest prime factor of the number 600851475143 ?

## Solution
Keep factoring out numbers until the number is no longer divisible. Loop through odd numbers after 2, because if 2 is factored out no other even numbers are primes and will always be factored out.
