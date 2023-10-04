def containsDuplicate(self, nums):
    set1 = set() # Creating an empty set/tuple/list takes O(1) time complexity and O(n) space complexity
    for i in nums:
            if i in set1: # Looking for an element in set is O(1) wheras in list is O(n)
                return True
            else:
                set1.add(i)
    return False
# Time complexity: O(n)
# Space Complexity: O(n)