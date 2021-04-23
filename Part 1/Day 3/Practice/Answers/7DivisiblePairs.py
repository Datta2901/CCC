n = int(input())
ar = list(map(int, input().split()))

k = 7
count = 0
for i in range(n-1):
    j = i+1
    while j < n:
        if ((ar[i] + ar[j]) % k) == 0:
            count += 1
        j += 1
print(count)