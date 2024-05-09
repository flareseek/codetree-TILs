input()
n = list(map(int, input().split()))

minimum = min(n)
cnt = n.count(minimum)
print(minimum, cnt)