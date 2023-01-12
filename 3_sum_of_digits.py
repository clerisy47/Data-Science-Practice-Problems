# Find the sum of digits of a number

# With Recursion
def sum_of_digits(number):
    assert number >=0 and int(number) == number, "The number should be a whole number"
    if number == 0:
        return 0
    else:
        return number%10 + sum_of_digits(number//10) # Recursion by dividing takes O(log(n)) time complexity and O(n) space complexity
# Time Complexity : O(log(n))  # In Computer Science log bases are 2.
# Space Complexity: O(n)


# With Iteration
def sum_of_digits(number):
    assert number >=0 and int(number) == number, "The number should be a whole number"
    sum = 0
    while number != 0: # Loops by dividing/modulo takes O(log(n)) time complexity and O(1) space complexity
        sum += number % 10
        number //= 10
    return sum
# Time Complexity : O(log(n))
# Space Complexity: O(1)
