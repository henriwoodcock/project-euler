/*
Starting in the top left corner of a 2×2 grid, and only being able to move to
the right and down, there are exactly 6 routes to the bottom right corner.
 _ _
|_|_|
|_|_|

1. _ _    2.  _     3. _    4.       5.       6.
      |        |_       |      |        |_       |
      |          |      |_     |_ _       |_     |_ _

How many such routes are there through a 20×20 grid?
*/

#include <iostream>

unsigned long long calc_binomial_coef(int n, int k) {
  /* binomial coef = nCk    n! / (k! (n-k)! )
                   = n^k / k!
                   = mult_i=1 ^ k [(n + 1 - i)/i]
  */
  unsigned long long binomial_coef = 1;

  for (int i = 1; i < k+1; ++i) {

    binomial_coef *= (n + 1 - i);
    binomial_coef /= i;

  }

  return binomial_coef;
}

unsigned long long num_of_paths(int change_in_x, int change_in_y) {
  /* calculate the number of paths when can only go right and down and
  x and y have changed by change in x and change in y ammout

  this is done through binomial coefficient
  (change in x + change in y) C change in x

  https://en.wikipedia.org/wiki/Lattice_path#Combinations_and_NE_lattice_paths
  */
  int n = change_in_x + change_in_y;
  int k = change_in_x;
  unsigned long long total_paths = calc_binomial_coef(n, k);

  return total_paths;
}

int main() {
  int start_x;
  int start_y;
  int end_x;
  int end_y;

  int change_in_x;
  int change_in_y;

  unsigned long long total_paths;

  // input start x, start y, end x and end y
  start_x = 0;
  start_y = 0;
  end_x = 20;
  end_y = 20;

  // calc differences
  change_in_x = end_x - start_x;
  change_in_y = end_y - start_y;

  //calc total number of paths
  total_paths = num_of_paths(change_in_x, change_in_y);

  std::cout << total_paths << std::endl;

  return 0;
}
