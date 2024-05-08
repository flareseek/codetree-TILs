n, q = map(int, input().split())
arr = list(map(int, input().split()))

for _ in range(q):
    args = list(map(int, input().split()))
    if args[0] == 1:
        print(arr[args[1]-1])
    elif args[0] == 2:
        if args[1] in arr:
            print(arr.index(args[1])+1)
        else:
            print(0)
    else:
        for i in arr[args[1]-1:args[2]]:
            print(i, end=" ")
        print()