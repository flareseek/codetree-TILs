input()

n = list(map(int, input().split()))

maximum = 0
prev = 0

for i in n:
    if i > maximum:
        maximum = i
n.remove(maximum)
for i in n:
    if prev < i:
        prev = i
print(maximum, prev)