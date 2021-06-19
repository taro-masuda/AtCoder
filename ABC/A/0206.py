import math


N = int(input())

sh = math.floor(1.08 * N)
if sh < 206:
  print('Yay!')
elif sh == 206:
  print('so-so')
else:
  print(':(')
  