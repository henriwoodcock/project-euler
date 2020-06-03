'''
005 Smallest multiple

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
'''

def check_if_divisible(number):
    nums = [19, 18, 17, 16, 15, 14, 13, 12, 11]
    for divsor in nums:
        if number%divsor!= 0:
            return False
    return True

#loop from 0 and increase by 20s each time
number=2520
while(True):
    if check_if_divisible(number):
        break
    else:
        number+=2520
if __name__ == '__main__':
    #start at 2520 as must be a multiple of 2520
    number=2520
    while(True):
        #if divisible break
        if check_if_divisible(number): break
        #else increase by 2520
        else: number+=2520

    print(number)
