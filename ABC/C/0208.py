N, K = map(int, input().split())

A = list(map(int, input().split()))

tuples = [(A[i], i) for i in range(N)]

sortA = sorted(A)

res = K % N

if res == 0:
    for i in range(N):
        print(K//N)
else:
    for i in range(N):
        if A[i] <= sortA[max(res-1, 0)]:
            print(K//N + 1)
        else:
            print(K//N)