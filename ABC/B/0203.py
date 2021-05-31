n,k = input().split()
N = int(n)
K = int(k)
 
ans = 0
for n in range(1, N+1):
  for k in range(1,K+1):
    ans += n*100 + k
    
print(ans)