t = int(input())
for i in range(t):
    questions,requiredscore = map(int,input().split())
    if questions * 4 < requiredscore:
        print(-1)
        continue
    attempt = (requiredscore/questions)+3
     = attempt/7
    print(format(*100,'.2f')