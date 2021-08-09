import bisect

h,w,n =  map(int, input().split())
a = []
b = []

for _ in range(n):
    ai, bi = map(int, input().split())
    a.append(ai)
    b.append(bi)

seth = set()
setw = set()
for i in range(n):
    seth.add(a[i])
    setw.add(b[i])
seth = list(seth)
setw = list(setw)
seth.sort()
setw.sort()

for i in range(n):
    a_order = bisect.bisect(seth, a[i])
    b_order = bisect.bisect(setw, b[i])
    print(a_order, b_order)