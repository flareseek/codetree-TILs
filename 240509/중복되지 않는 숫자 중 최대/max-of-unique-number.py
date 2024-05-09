input()
n = list(map(int, input().split()))
maximum = -1
for i in n:
    if i > maximum and n.count(i) == 1:
        maximum = i
print(maximum)