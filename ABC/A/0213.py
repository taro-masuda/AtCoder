a,b =  map(int, input().split())

for c in range(0, 256):
    if a ^ c == b:
        print(c)
        break
