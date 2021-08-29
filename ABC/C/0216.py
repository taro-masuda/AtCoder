n = int(input())

S = []
while n > 0:
  if n % 2 == 0:
    S.append('B')
    n = n//2
  elif n > 1:
    S.append('A')
    S.append('B')
    n = (n-1) // 2
  else:
    S.append('A')
    break

    
S = list(reversed(S))

print(''.join(S))
