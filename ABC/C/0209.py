N = int(input())
C = list(map(int, input().split()))

C = sorted(C)

ans = 1
for i,c in enumerate(C):
  if c - i <= 0:
    ans *= 0
    break
  else:
    ans *= (c - i)
    ans %= int(1e9+7)
    
print(ans)