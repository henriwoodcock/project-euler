'''
003 Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
'''

def larget_prime_factor(n=600851475143):
    factor=2
    #loop through factors increasing in odd numbers to find divsors
    while(factor*factor<=n):
        #if n is divisible by current factor, 'factor' it out.
        if n%factor == 0: n = n // factor
        #if not increase by 2 to next odd number
        else: factor+= 2 if factor>2 else 1
    #remaining number is largest number not divisible by others
    return n

if __name__ == '__main__':
    print(larget_prime_factor())
