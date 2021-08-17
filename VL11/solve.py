def nguyento(n):
    if n <= 3:
        return n > 1
    elif n % 2 == 0 or n % 3 == 0:
        return False
    i = 2
    while i*i <= n:
        if n % i == 0: return False
        i += 1
    return True
n = int(input())
print("{}".format("YES" if nguyento(n) else "NO"))