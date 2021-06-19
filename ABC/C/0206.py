N = int(input())

A = list(map(int,input().split()))

dic = {}
for a in A:
  if a not in dic:
    dic[a] = 1
  else:
    dic[a] += 1

ans = 0
res = 0
for key in dic:
  ans += (N - dic[key] - res)*dic[key]
  res += dic[key]
print(ans)