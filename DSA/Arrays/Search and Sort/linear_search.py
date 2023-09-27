def findNumber(self,lst,target):
    for i in range(len(lst)):
        if lst[i] == target:
            return i
    return -1
# Time complexity: O(n)
# Space Complexity: O(1)
