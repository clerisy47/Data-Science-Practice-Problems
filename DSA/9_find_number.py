# Given an array nums containing n distinct numbers, find the target number without builtin methods
class Solution:
    def findNumber(self,lst,target):
        for i in range(len(lst)):
            if lst[i] == target:
                return i
        return -1
# Time complexity: O(n)
# Space Complexity: O(1)
