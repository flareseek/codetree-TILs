# 첫 원소를 minimum으로 잡는다.
# minimum 보다 클 경우 diff가 최대값으로 유지한다
# minimum이 reset 될 경우 똑같음 대신 diff 계산 안함
input()
n = list(map(int, input().split()))
minimum = n[0]
diff = 0
for a in n[1:]:
    if a < minimum:
        minimum = a
    elif diff < a - minimum:
        diff = a - minimum
print(diff)