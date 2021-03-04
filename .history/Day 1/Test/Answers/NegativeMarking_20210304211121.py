t = int(input())
for i in range(t):
    que,s = map(int,input().split())
    if que*4 < s:
        print(-1)
        continue
    x = (s/que)+3
    y = x/7
    print(format(y*100,'.2f')