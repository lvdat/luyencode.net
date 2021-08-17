a, b = map(int, input().split())
print("{}".format(sum([i for i in range(a-1, b+1) if i % 2 == 0])))