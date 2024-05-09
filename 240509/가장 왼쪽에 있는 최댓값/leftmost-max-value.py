input()
n = list(map(int, input().split()))
index = n.index(max(n))
while index != 0:
    print(index+1, end=" ")
    index = n.index(max(n[:index]))
print(index+1)