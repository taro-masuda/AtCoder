n,a,x,y = list(map(int, input().split()))

if n > a:
  print(a*x + (n-a)*y)
else:
  print(n*x)