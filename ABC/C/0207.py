N = int(input())
t = []; l = []; r = []
for _ in range(N):
    tn, ln, rn = list(map(int,input().split()))
    t.append(tn); l.append(ln); r.append(rn)

def closed(l1, r1, l2, r2):
    if (l1 <= r2 and r2 <= r1) or (l2 <= r1 and r1 <= r2):
        return 1
    else:
        return 0

ans = 0
for i in range(N):
    for j in range(i+1, N):
        l1, r1 = l[i], r[i]
        l2, r2 = l[j], r[j]
        if t[i] == 2:
            r1 -= 0.5
        elif t[i] == 3:
            l1 += 0.5
        elif t[i] == 4:
            l1 += 0.5
            r1 -= 0.5
        if t[j] == 2:
            r2 -= 0.5
        elif t[j] == 3:
            l2 += 0.5
        elif t[j] == 4:
            l2 += 0.5
            r2 -= 0.5
        ans += closed(l1, r1, l2, r2)

print(ans)