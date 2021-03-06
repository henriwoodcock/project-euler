'''
001 Multiples of 3 and 5

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
'''


if __name__ == '__main__':
    total = 0
    #Python loops finish at n-1:
    for number in range(1,1000):
        #check if number is a multiple of 3 or 5.
        if number%3==0 or number%5==0:
            #add number to the total
            total+=number
    print(total)
