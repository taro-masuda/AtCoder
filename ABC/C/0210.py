N, K = list(map(int, input().split()))

c = list(map(int, input().split()))
  
se = {}
for i in range(K):
  if c[i] not in se:
    se[c[i]] = 1
  else:
    se[c[i]] += 1

ans = len(se)

for i in range(K, N):
  if c[i] not in se:
    se[c[i]] = 1
  else:
    se[c[i]] += 1
  if se[c[i-K]] == 1:
    se.pop(c[i-K])
  else:
    se[c[i-K]] -= 1
  ans = max(ans, len(se))

print(ans)