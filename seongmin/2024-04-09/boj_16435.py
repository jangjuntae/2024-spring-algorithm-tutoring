n, l = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()
for i in range(n):
    if arr[i] <= l:
        l += 1
    else:
        break
print(l)