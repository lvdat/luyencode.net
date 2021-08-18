a,b = map(int, input().split())
res = [i for i in range(a + 1, b) if i % 3 == 0]
if len(res) == 0: print("NOT FOUND")
else:
    for i in res[::-1]: print(i, end = " ")