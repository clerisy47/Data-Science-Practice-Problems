# Recursion
def HCF_recusion(x, y):
    if y == 0:
        return x
    else:
        return HCF(y, x%y)
# Time Complexity : O(log n) where n = smaller number
# Space Complexity: O(n)


# Iteration
def HCF(x, y):
    while y != 0:
        x, y = y, x%y
    return x
# Time Complexity : O(log n) where n = smaller number
# # Space Complexity: O(1)


def LCM(number_1, number_2):
    return number_1*number_2//HCF(number_1, number_2)
# Time Complexity : O(log n) where n = smaller number
# # Space Complexity: O(1)
