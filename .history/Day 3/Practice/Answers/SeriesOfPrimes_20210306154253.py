primes = []

def SieveOfEratosthenes():

    n = 10000000
    prime = [True for i in range(n + 1)] // filling

    p = 2
    while (p * p <= n):
        if (prime[p] == True):
            for i in range(p * p, n + 1, p):
                prime[i] = False

        p += 1

    for p in range(2, n + 1):
        if prime[p]:
            primes.append(p)


# Driver code
if _name_ == '_main_':

    # Function call
    SieveOfEratosthenes()
    g=int(input())
    g-=1
    print(primes[g])