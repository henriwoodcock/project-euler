# 015 Lattice paths

## Problem

> Starting in the top left corner of a 2×2 grid, and only being able to move to
> the right and down, there are exactly 6 routes to the bottom right corner.

```
 _ _
|_|_|
|_|_|

1. _ _    2.  _     3. _    4.       5.       6.
      |        |_       |      |        |_       |
      |          |      |_     |_ _       |_     |_ _
```

> How many such routes are there through a 20×20 grid?

## Solution

Starting at point (0,0) it can be shown that the number of paths to point (a, b)
is equal (a+b) C a (the binomial coeffcient).

Because of the size of numbers the binomial coefficient is calculated with the
"Multiplicative formula". Info found at
https://en.wikipedia.org/wiki/Binomial_coefficient#Multiplicative_formula.
