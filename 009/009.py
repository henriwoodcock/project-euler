'''
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

'''
stop_loop = False
for i in range(1,999):
    if stop_loop:
        break
    for j in range(i,999):
        if stop_loop: break
        for k in range(j,999):
            if i*i + j*j == k*k and i+j+k == 1000:
                stop_loop = True
                break

print(i,j,k)
print(i*j*k)
