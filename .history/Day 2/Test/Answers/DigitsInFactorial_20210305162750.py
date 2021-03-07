n=int(input())
product = 1
for i in range(2,n+1):
    product *= i
print(len(str(product)))