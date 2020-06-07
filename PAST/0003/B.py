N,M,Q = list(map(int,input().split()))
a = [input() for i in range(Q)]

scores = [N]*M
answers = [[0] * M for i in range(N)]

for q in range(Q):
  #print(a[q])
  l = a[q].split()
  #print(l)
  if len(l) == 2:
    score = 0
    for m in range(M):
      #print(answers, int(l[1])-1)
      if answers[int(l[1])-1][m] != 0:
        score += scores[m]
    print(score)
  else:
    #print(answers, int(l[1])-1, int(l[2])-1)
    answers[int(l[1])-1][int(l[2])-1] = 1
    scores[int(l[2])-1] -= 1
    #print(answers)       
