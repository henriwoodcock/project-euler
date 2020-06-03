# 006 Sum square difference

## Problem
> The sum of the squares of the first ten natural numbers is,
> 1^2+2^2+...+10^2=385

> The square of the sum of the first ten natural numbers is,
> (1+2+...+10)^2=55^2=3025

> Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640

>Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

## Solution
Proof of sum of 1+2+...+n:
```
S  = 1   + 2     + 3     + ... + n-3   + n-2   + n-1   + n
S  = n   + n-1   + n-2   + ... + 4     + 3     + 2     + 1
2S = n+1 + n-1+2 + n-2+3 + ... + n-3+4 + n-2+3 + n-1+2 + n+1
2S = (n+1) * n
S  = n(n+1)/2
```
Proof of sum of 1^2+2^2+...+n^2
```
(k-1)^3       = k^3 - 3k^2 + 3k - 1
k^3 - (k-1)^3 = 3k^2 - 3k + 1
```
Summing left hand side from k=1 to n "telescopes" giving `n^2`
```
n^2 = sum_1^n(3k^2 - 3k + 1)
n^2 = sum_1^n(3k^2) - sum_1^n(3k) + n
n^2 = sum_1^n(3k^2) - 3n(n+1)/2 + n
n^2 = 3*sum_1^n(k^2) - 3n(n+1)/2 + n
```
rearranging:
```
sum_1^n(k^2) = n(n+1)/2 - n/3 + n^2/3
sum_1^n(k^2) = n(n+1)(2n+1)/6
```

## Code
- [python](006.py)
