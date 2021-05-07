N = input()

i = 1
cnt = 0
while True:
  str_double = str(i) + str(i)
  if int(str_double) <= int(N):
    cnt += 1
    i += 1
  else:
    break
print(cnt)