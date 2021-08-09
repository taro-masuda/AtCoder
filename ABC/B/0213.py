n = int(input())
a =  map(int, input().split())
b = []

for i,c in enumerate(a):
  b.append((c, i+1))
b = sorted(b)


print(b[-2][1])