n = int(input())
nums = list(map(int, input().split()))

num_r = nums[::-1]

for i in num_r:
    if i % 2 == 0:
        print(i, end=" ")
