# With Recursion
def factorial(number):
    assert number >=0 and int(number) == number, "The number should be a whole number"
    if number == 0:
        return 1
    else:
        return number * factorial(number-1) # Recursion subtracting -1 takes O(n) time complexity and O(n) space complexity
# Time Complexity: O(n)
# Space Complexity: O(n)

#with Iteration
def factorial(number):
     assert number >=0 and int(number) == number, "The number should be a whole number"
     factorial = 1
     for i in range(2, number+1):  # 2 because multiplying with 1 won't matter
        factorial *= i             #  Loops subtracting -1 takes O(n) time complexity and O(1) space complexity
     return factorial
# Time Complexity: O(n)
# Space Complexity: O(1)