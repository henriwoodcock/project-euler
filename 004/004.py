'''
Largest palindrome product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
'''

def reverse_number(number):
    reverse = 0
    while(number > 0):
        last_digit = number % 10
        reverse = (reverse)*10 + last_digit
        number=number//10
    return reverse

def isPalidrome(number):
    return number==reverse_number(number)

def loop_down():
    '''
    loop down from 999 to 100 because largest palidrome will be large as there
    are an infinite amount of them

    make sure j<=i at all times this reduces the double loop (of already checked numbers)

    if i*j < current largest break out of loop as we are looping down all rest will be smaller
    '''
    largest_palidrome=0
    for i in range(999,100,-1):
        for j in range(i,100,-1):
            if i*j <= largest_palidrome: break
            if isPalidrome(i*j): largest_palidrome=i*j
    return largest_palidrome

if __name__ == '__main__':
    print(loop_down())
