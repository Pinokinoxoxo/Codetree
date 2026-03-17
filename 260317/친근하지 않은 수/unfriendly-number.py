n = int(input())
cnt = 0

for i in range(n):
    if i % 2 == 0 or i % 3 == 0 or i % 5 ==0:
        continue
    cnt = cnt + 1

print(cnt)