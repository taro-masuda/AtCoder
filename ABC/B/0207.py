import math
a,b,c,d = list(map(int,input().split()))

if d*c - b <= 0:
  print(-1)
else:
  print(math.ceil(a/(d*c-b)))