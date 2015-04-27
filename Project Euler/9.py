s = 1000
for i in range(1, s):
    for j in range(1, s - i):
        c = s - i - j
        if c**2 == i**2 + j**2:
            print(i*j*c)
