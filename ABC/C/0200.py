from scipy.special import comb

N = int(input())
A = list(map(int, input().split()))

d = {}
for a in A:
  b = a % 200
  if b in d:
    d[b] += 1
  else:
    d[b] = 1

ans = 0
for key in d:
  ans += comb(d[key], 2, exact=True)
print(ans)