n,k = input().split()
N = int(n)
K = int(k)

xy = [map(int, input().split()) for _ in range(N)]
A, B = [list(i) for i in zip(*xy)]

l = []
for i in range(N):
  l.append((A[i], B[i]))
l = sorted(l)
#print(l)
cur_money = K
cur_pos = 0 
for i in range(N):
  tomo_pos = l[i][0]
  give_money = l[i][1]
  nokori = cur_money - (tomo_pos-cur_pos)
  if nokori < 0:
    print(cur_pos + cur_money)
    exit()
  else:
    cur_pos = tomo_pos
    cur_money = nokori + give_money
print(cur_pos+cur_money)