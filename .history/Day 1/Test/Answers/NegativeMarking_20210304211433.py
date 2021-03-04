t = int(input())
for i in range(t):
    questions,requiredscore = map(int,input().split())
    if questions * 4 < requiredscore:
        print(-1)
        continue
    attempt = (requiredscore/questions) + 3
    accuracy = attempt / 7
    print(format(accuracy*100,'.2f')
          
# Here Accuracy can be find by using two linear equations
# They are Total Score(Required Score) = 4 * x - 3 * y
# Total Questions  = x + y
# Here x is the toa