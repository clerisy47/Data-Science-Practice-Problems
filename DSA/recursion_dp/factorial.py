# With Recursion
def factorial_recursion(number):
    assert number >=0 and int(number) == number, "The number should be a whole number"
    if number == 0:
        return 1
    else:
        return number * factorial_recursion(number-1) # Recursion subtracting -1 takes O(n) time complexity and O(n) space complexity
# Time Complexity: O(n)
# Space Complexity: O(n)

#with Iteration
def factorial_iteration(number):
     assert number >=0 and int(number) == number, "The number should be a whole number"
     factorial = 1
     for i in range(2, number+1):  # 2 because multiplying with 1 won't matter
        factorial *= i             #  Loops subtracting -1 takes O(n) time complexity and O(1) space complexity
     return factorial
# Time Complexity: O(n)
# Space Complexity: O(1)

# With Dynamic Programming
def factorial_dp(number):
    assert number >= 0 and int(number) == number, "The number should be a whole number"
    
    dp = [0] * (number + 1)
    dp[0] = 1
    
    for i in range(1, number + 1):
        dp[i] = i * dp[i-1]
    
    return dp[number]

# Time Complexity: O(n)
# Space Complexity: O(n)

print(factorial_iteration(1))