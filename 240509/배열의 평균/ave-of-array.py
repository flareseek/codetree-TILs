arr = []
arr.append(list(map(int, input().split())))
arr.append(list(map(int, input().split())))

totalSum = 0
totalLen = 0
for r in arr:
    print(f"{sum(r)/len(r):.1f}", end=" ")
    totalSum += sum(r)
    totalLen += len(r)
print()
for colIndex in range(0, len(arr[0])):
    result = 0
    for rowIndex in range(0, len(arr)):
        result += arr[rowIndex][colIndex]
    print(f"{result/len(arr):.1f}", end=" ")
print()
print(f"{totalSum/totalLen:.1f}")