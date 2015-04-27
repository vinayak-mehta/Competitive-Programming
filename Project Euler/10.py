import numpy as np

def primes_upto(limit):
    is_prime = np.ones(limit, dtype=np.bool)
    for n in range(2, int(limit**0.5 + 1.5)):
        if is_prime[n]:
            is_prime[n*n::n] = 0
    return np.nonzero(is_prime)[0][2:]

primes = primes_upto(2000000)
print(sum(primes))
