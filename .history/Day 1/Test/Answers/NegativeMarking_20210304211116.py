t = int(input())
for i in range(t):
    q,s = map(int,input().split())
    if q*4 < s:
        print(-1)
        continue
    x = (s/q)+3
    y = x/7
    print(format(y*100,'.2f')