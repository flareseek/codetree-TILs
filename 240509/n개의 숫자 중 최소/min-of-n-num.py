import sys
input()
n = list(map(int, input().split()))

m = sys.maxsize
cnt = 0

for i in n:
    if i < m:
        cnt = 1
        m = i
    elif i == m:
        cnt += 1
print(m, cnt, sep=" ")