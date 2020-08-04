'''
Longest Collatz sequence

The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
'''

from typing import List

current_highest = 1
current_length = 1

def collatz(starting_num: int) -> List[int]:
    nums = [starting_num]
    num = starting_num
    while num > 1:
        num = (num // 2) if num % 2 == 0 else (3 * num + 1)
        nums.append(num)
    return nums

for num in range(2, 1000000):
    length = len(collatz(num))
    if length > current_length:
        current_highest = num
        current_length = length

print(current_highest, current_length)
