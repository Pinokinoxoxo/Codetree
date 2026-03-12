n = int(input())

arr = list(map(int, input().split()))

newarr = [ i ** 2 for i in arr]

print(" ".join(map(str, newarr)))