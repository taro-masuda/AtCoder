N = int(input())

ans = 0
for i in range(1, N+1):
  if '7' in str(i):
    continue
  else:
    bin_i = bin(i)
    bin_i = str(bin_i[2:]) # remove 0b
    LEN = len(bin_i)
    unlucky = False
    for i in range(LEN-1, 1, -3):
      if str(bin_i[i-2:i+1]) == '111':
        unlucky = True
        break
    if unlucky:
      continue
    else:
      ans += 1

print(ans)
    