t = int(input())
for i in range(t):
    questions,requiredsco = map(int,input().split())
    if questions*4 < requiredsco:
        print(-1)
        continue
    x = (requiredsco/questions)+3
    y = x/7
    print(format(y*100,'.2f')