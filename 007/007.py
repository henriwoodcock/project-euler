'''
007 10001st prime

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
'''

def checkPrime(n):
    factor=2
    #loop through factors increasing in odd numbers to find divsors
    while(factor*factor<=n):
        #if n is divisible by current factor its not a prime.
        if n%factor == 0: return False
        #if not increase by 2 to next odd number
        else: factor+= 2 if factor>2 else 1
    #return true if no factors
    return True

def nthPrime(n):
    #initial list of primes
    primes = [2,3]
    new_num = 3
    if n <4:
        return primes[n-1]

    # loop until primes is length n
    while(len(primes) < n):
        new_num = new_num + 2
        if checkPrime(new_num):
            primes.append(new_num)

    return primes[-1]

if __name__ == '__main__':
    print(nthPrime(10001))
