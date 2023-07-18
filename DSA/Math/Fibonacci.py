def fibo(number):
    assert number >= 0 and int(number) == number, "The number should be a whole number"
    if number in [0, 1]:
        return number
    else:
        return fibo(number-1) + fibo(number-2) # Double Recursion subtracting -1 and -2 takes O(2^n) time complexity and O(n) space complexity
# Time Complexity: O(2^n)
# Space Complexity: O(n)
