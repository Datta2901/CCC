t = int(input())
for i in range(t):
    questions,requir = map(int,input().split())
    if questions*4 < requir:
        print(-1)
        continue
    x = (requir/questions)+3
    y = x/7
    print(format(y*100,'.2f')