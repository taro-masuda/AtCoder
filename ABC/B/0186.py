H,W = map(int, input().split())
A = []
for i in range(H):
	A.append(list(map(int,input().split())))

min_val = 1000
for i in range(H):
  for j in range(W):
    min_val = min(min_val, A[i][j])
    
remove_cnt = 0
for i in range(H):
  for j in range(W):
    remove_cnt += A[i][j] - min_val
    
print(remove_cnt)