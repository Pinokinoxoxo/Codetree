n = int(input())
a = n
for i in range(101 - a):
    if n >= 90:
        print('A', end=" ")
        n = n + 1
    elif n >= 80:
        print('B', end=" ")
        n = n + 1
    elif n >= 70:
        print('C', end=" ")
        n = n + 1
    elif n >= 60:
        print('D', end=" ")
        n = n + 1
    else:
        print('F', end=" ")
        n = n + 1
    


