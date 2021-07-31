N, M = map(int, input().split())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

AB = []
for a in A:
    AB.append((a, 'a'))
for b in B:
    AB.append((b, 'b'))

AB = sorted(AB)

mindiff = 1e12
for i in range(len(AB)-1):
    if abs(AB[i][0] - AB[i+1][0]) < mindiff and AB[i][1] != AB[i+1][1]:
        mindiff = abs(AB[i][0] - AB[i+1][0])

print(mindiff)