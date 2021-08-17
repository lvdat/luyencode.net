def solve(n):
    return [i for i in range(1, n+1) if n % i == 0]
n = int(input())
if n == 0: print("INF")
else:
    for i in reversed(solve(abs(n))):
        print(i, end = " ")