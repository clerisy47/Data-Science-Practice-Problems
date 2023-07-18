# Recursion
def HCF(number_1, number_2):
    x = max(number_1, number_2)
    y = min(number_1, number_2)
    if y == 0:
        return x
    else:
        return HCF(y, x%y)
# Time Complexity : O(log n) where n = smaller number
# Space Complexity: O(n)


# Iteration
def HCF(number_1, number_2):
    
    x = max(number_1, number_2)
    y = min(number_1, number_2)

    while y != 0:
        temp = y
        y = x % y
        x = temp
    return x
# Time Complexity : O(log n) where n = smaller number
# # Space Complexity: O(1)


def LCM(number_1, number_2):
    return number_1*number_2//HCF(number_1, number_2)
# Time Complexity : O(log n) where n = smaller number
# # Space Complexity: O(n)
