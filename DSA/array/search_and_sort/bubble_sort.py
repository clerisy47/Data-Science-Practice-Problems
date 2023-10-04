def bubble_sort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j]>arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
arr = [i for i in range(10,1,-2)]
bubble_sort(arr)
print(arr)

# Time complexity: O(n^2)
# Space complexity: 0(1)
