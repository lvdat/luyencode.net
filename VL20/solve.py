a, b = [x.upper() for x in input().split()]

for i in range(ord(a), ord(b) + 1):
    print(chr(i), end = " ")