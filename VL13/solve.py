def solve(n):
    if n < 6: return False
    i = 1
    tong = 0
    while i <= int(n/2 + 1):
        if n % i == 0: tong += i
        i += 1
    return tong == n
n = int(input())
if solve(n): print("YES")
else: print("NO")