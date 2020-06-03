N = int(input())
arr = list(input().split())
temp = 0
for i in range(len(arr)):
    arr[i] = int(arr[i])
arr.sort()
for i in range(len(arr)):
    arr[i] = float(arr[i]/arr[N-1]*100)
    temp += arr[i]
print(temp/N)