t = int(input())
for i in range(t):
    questions,required = map(int,input().split())
    if questions*4 < required:
        print(-1)
        continue
    x = (required/questions)+3
    y = x/7
    print(format(y*100,'.2f')