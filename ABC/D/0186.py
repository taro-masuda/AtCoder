N = int(input())
A = list(map(int, input().split()))

A_s = sorted(A)

ans = 0

Si = [0] * N
Si[N-1] = A_s[N-1]
for i in range(N-1-1,0,-1):
  Si[i] = Si[i+1] + A_s[i]
  
for i in range(1, N):
  ans += -(N-i) * A_s[i-1]
  ans += Si[i]
  
print(ans)