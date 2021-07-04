P = int(input())

def factorial(n: int):
    if n <= 2: return n
    else: return n*factorial(n-1)

cnt = 0
while P > 0:
    if P >= 3628800:
        P -= 3628800
    elif P >= 362880:
        P -= 362880
    elif P >= 40320:
        P -= 40320
    elif P >= 5040:
        P -= 5040
    elif P >= 720:
        P -= 720
    elif P >= 120:
        P -= 120    
    elif P >= 24:
        P -= 24
    elif P >= 6:
        P -= 6
    elif P >= 2:
        P -= 2
    elif P == 1:
        P -= 1
    cnt += 1
print(cnt)