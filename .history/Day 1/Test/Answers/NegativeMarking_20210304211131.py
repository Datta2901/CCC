t = int(input())
for i in range(t):
    questions,r = map(int,input().split())
    if questions*4 < r:
        print(-1)
        continue
    x = (r/questions)+3
    y = x/7
    print(format(y*100,'.2f')