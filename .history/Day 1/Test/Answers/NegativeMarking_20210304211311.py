t = int(input())
for i in range(t):
    questions,requiredscore = map(int,input().split())
    if questions * 4 < requiredscore:
        print(-1)
        continue
    attempt = (requiredscore/questions) + 3
    accuracy = attempt / 7
    print(format(accuracy*100,'.2f')
          