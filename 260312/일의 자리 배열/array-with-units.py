a, b = map(int, input().split())

arr = [a, b]
for i in range(8):
    newarr = (arr[i] + arr[i + 1]) % 10
    arr.append(newarr)

print(*arr)
