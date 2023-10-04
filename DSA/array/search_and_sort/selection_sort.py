def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_i = i
        for j in range(i+1, n):
            if arr[j]< arr[min_i]:
                min_i = j
        arr[i], arr[min_i] = arr[min_i], arr[i]

        
arr = [i for i in range(10,1,-2)]
selection_sort(arr)
print(arr)

# Time complexity: O(n^2)
# Space complexity: 0(1)