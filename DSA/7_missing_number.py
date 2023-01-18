# Given an array nums containing n distinct numbers in the range [0, n],
#  return the only number in the range that is missing from the array.
class Solution:
    def missingNumber(self, lst):
        total_is = sum(lst) # Sum has O(n) time complexity and O(1) space complexity
        N = max(lst)
        total_should_be = N*(N+1)//2
        missing_number = total_should_be - total_is
        if missing_number:
            return missing_number
        elif 0 not in lst:
            return 0
        else:
            return N + 1
# Time Complexity : O(n)
# Space Complexity: O(1)