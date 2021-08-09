import heapq
import copy

n = int(input())
a = []
b = []

chokuzen = {}
michi = {}

for i in range(n-1):
    ai, bi = map(int, input().split())
    if ai in michi:
        michi[ai].append(bi)
    else:
        michi[ai] = [bi]
    if bi in michi:
        michi[bi].append(ai)
    else:
        michi[bi] = [ai]

for key in michi:
    heapq.heapify(michi[key])

visited = set()
visited.add(1)
cur = 1

print('1 ', end='')

while True:
    prev = cur
    while len(michi[cur]) > 0:
        next_city = heapq.heappop(michi[cur])
        if next_city not in visited:
            chokuzen[next_city] = cur
            cur = next_city
            print(str(next_city) + ' ', end='')
            visited.add(next_city)    
            break
    if prev == cur:
        if cur == 1:
            break
        else:
            cur = chokuzen[cur]
            print(str(cur) + ' ', end='')
