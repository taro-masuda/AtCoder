N,K = list(map(int,input().split()))

a = N
for _ in range(K):
  g1 = ''.join(sorted(str(a), reverse=True))
  g2 = ''.join(sorted(str(a), reverse=False))
  a = int(g1) - int(g2)
print(a)