def findNumber(self,arr,target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1
# Time complexity: O(n)
# Space Complexity: O(1)
