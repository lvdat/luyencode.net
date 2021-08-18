n = int(input())
arr = list(map(int, input().split()))
arr = sorted(set(arr))
print("{}".format("NOT FOUND" if len(arr) <= 1 else arr[-2]))