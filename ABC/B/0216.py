name_set = set()


n = int(input())

for _ in range(n):
  si, ti = input().split()
  if si+'.'+ti in name_set:
    print('Yes')
    exit()
  else:
    name_set.add(si+'.'+ti)
    
print('No')