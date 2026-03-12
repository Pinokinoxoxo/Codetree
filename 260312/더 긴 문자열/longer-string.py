words = input().split()

word1 = words[0]
word2 = words[1]

len1 = len(word1)
len2 = len(word2)

if len1 > len2:
    print(f"{word1} {len1}")
elif len1 < len2:
    print(f"{word2} {len2}")
else:
    print("same")