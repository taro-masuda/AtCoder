N = int(input())
A = list(map(int, input().split()))

ans = 0
max_tall = 0
for i in range(0, N):
  if max_tall > A[i]:
    ans += max_tall - A[i]
  if A[i] > max_tall:
    max_tall = A[i]
    
print(ans)