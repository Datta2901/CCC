t = int(input())
for i in range(t):
    questions,s = map(int,input().split())
    if questions*4 < s:
        print(-1)
        continue
    x = (s/questions)+3
    y = x/7
    print(format(y*100,'.2f')