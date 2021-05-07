N = int(input())

xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]

is_yes = False
for i in range(N):
  for j in range(i+1, N):
    for k in range(j+1, N):
      dx2 = x[k] - x[i]
      dx1 = x[j] - x[i]
      dy1 = y[j] - y[i]
      dy2 = y[k] - y[i]
      if dx2 * dy1 == dx1 * dy2:
        is_yes = True
        break
    if is_yes:
      break
  if is_yes:
    break
if is_yes:
  print('Yes')
else:
  print('No')