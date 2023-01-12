# Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
class Solution:
    def containsDuplicate(self, nums):
        set1 = set() # Creating an empty set/tuple/list takes O(1) time complexity and O(n) space complexity
        for i in nums:
                if i in set1:
                    return True
                else:
                    set1.add(i)
        return False
# Time complexity: O(n)
# Space Complexity: O(n)