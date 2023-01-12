# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
# You may assume that each input would have exactly one solution, and you may not use the same element twice.
# You can return the answer in any order.

class Solution:
    def twoSum(self, num_list, target):
        for i in range(len(num_list)): # Nested loop has O(n^2) time complexity and  O(1) space complexity
            for j in range(i+1, len(num_list)):
                if num_list[i] + num_list[j] == target:
                    return [i, j]
# Time complexity: O(n^2)
# Space Complexity: O(1)

