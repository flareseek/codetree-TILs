input()

n = list(map(int, input().split()))

maximum = 0
prev = 0

for i in n:
    if i > maximum:
        maximum = i

for i in n:
    if prev < i and i < maximum:
        prev = i
print(maximum, prev)