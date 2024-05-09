arr = []
arr.append(list(map(int, input().split())))
arr.append(list(map(int, input().split())))

totalSum = 0
totalLen = 0
for r in arr:
    print(sum(r)/len(r), end=" ")
    totalSum += sum(r)
    totalLen += len(r)
print()
for colIndex in range(0, len(arr[0])):
    result = 0
    for rowIndex in range(0, len(arr)):
        result += arr[rowIndex][colIndex]
    print(result/len(arr), end=" ")
print()
print(totalSum/totalLen)