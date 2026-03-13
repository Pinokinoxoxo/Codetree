string = input()

str = list(string)

str[1] = 'a'
str[-2] = 'a'

print("".join(str))