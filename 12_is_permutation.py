# Given two arrays, return true if one is permutation of another
class Solution:
    def containsDuplicate(self, list1, list2):
        set1 = set(list1) # Conveting to set/tuple or vice versa takes O(n) time complexity and O(n) space complexity
        set2 = set(list2)
        return set1 == set2
# Time complexity: O(n)
# Space Complexity: O(n)

class Solution:
    def containsDuplicate(self, list1, list2):
        list1.sort() # Sort takes O(nlogn) time complexity and O(n) space complexity
        list2.sort()
        return list1 == list2
# Time complexity: O(nlogn)
# Space Complexity: O(n) 
