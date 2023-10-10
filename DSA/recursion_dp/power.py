# Recursion
def power(base, exponent):
    assert exponent >=0 and int(exponent) == exponent, "The number should be a whole number"
    if exponent == 0:
        return 1
    elif exponent>0:
        return base * power(base, exponent-1)
    else:
        return 1/base * power(base, -exponent+1)
# Time Complexity : O(n)
# Space Complexity: O(n)


# binary exponentiation algorithm
def power(base, exponent):
    assert exponent >=0 and int(exponent) == exponent, "The number should be a whole number"
    result = 1
    while exponent > 0:
        if exponent % 2 == 1:
            result *= base
        base *= base
        exponent = exponent // 2
    return result
# Time Complexity : O(log(n))
# Space Complexity: O(1)