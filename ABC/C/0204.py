N,M = list(map(int, input().split()))

if M == 0:
  print(N);
  exit()
xy = [map(int, input().split()) 
      for _ in range(M)]
A, B = [list(i) for i in zip(*xy)]

dic = {}
for i in range(len(A)):
  A[i] -= 1
  B[i] -= 1
  if A[i] not in dic:
    dic[A[i]] = [B[i]]
  else:
    dic[A[i]].append(B[i])

def dfs(stt: int, dic):
  stack = [stt]
  se = set(); se.add(n)
  while len(stack) > 0:
    cur_town = stack[0]; stack.pop(0)
    if cur_town not in dic:
      continue
    for next_town in dic[cur_town]:
      if next_town not in se:
        stack.append(next_town)
        se.add(next_town)
  return len(se)
  
ans = 0
for n in range(N):
  stt = n #出発
  
  # DFSやる 
  ans += dfs(stt, dic)
  
print(ans)