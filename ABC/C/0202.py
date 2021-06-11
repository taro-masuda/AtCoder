N = int(input())

A = list(map(int,input().split()))
B = list(map(int,input().split()))
C = list(map(int,input().split()))

for i in range(N):
  A[i] -= 1
  B[i] -= 1
  C[i] -= 1

adic = {}
for a in A:
  if a in adic:
    adic[a] += 1
  else:
    adic[a] = 1

ans = 0
for cj in C:
  if B[cj] in adic:
    ans += adic[B[cj]]
    
print(ans)