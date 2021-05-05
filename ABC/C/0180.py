N = int(input())

i = 1
ans_small = []
ans_big = []
while i*i <= N:
  if N % i == 0:
    ans_small.append(i)
    if int(N / i) != i:
      ans_big.append(int(N / i))
  i += 1
for num in ans_small:
  print(num)
for num in ans_big[::-1]:
  print(num)