import math

def euler12(N):
    c = 0
    sq = int(math.sqrt(N))
    for i in range(1, sq + 1):
        if N % i == 0:
            c += 2
    if sq * sq == N:
        c -= 1
    return c

N = 1
a = 1
while True:
    N += a
    a += 1
    if euler12(N) > 500:
        print(N)
        break
