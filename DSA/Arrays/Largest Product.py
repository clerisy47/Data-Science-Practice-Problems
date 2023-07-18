class Solution:
    def maxProduct(self, nums):
        maxProduct = 0
        for i in range(len(nums)): 
            for j in range(i+1, len(nums)):
                product = nums[i]*nums[j]
                if product > maxProduct:
                    maxProduct = product
        return maxProduct
# Time complexity: O(n^2)
# Space Complexity: O(1)
