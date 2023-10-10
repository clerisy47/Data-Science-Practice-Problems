# With Recursion
def fibo_recursion(number):
    assert number >= 0 and int(number) == number, "The number should be a whole number"
    if number in [0, 1]:
        return number
    else:
        return fibo_recursion(number-1) + fibo_recursion(number-2) # Double Recursion subtracting -1 and -2 takes O(2^n) time complexity and O(n) space complexity
# Time Complexity: O(2^n)
# Space Complexity: O(n)

# With Dynamic Programming
def fibo_dp(number):
    assert number >= 0 and int(number) == number, "The number should be a whole number"
    arr = [0]*(number+1)
    arr[0] = 0
    if number>0:
        arr[1] = 1
    for i in range(2, number+1):
        arr[i] = arr[i-1] + arr[i-2]
    return arr[number]

if __name__=='__main__':
    for i in range(0, 10):
        print(fibo_dp(i))
# Time Complexity: O(n)
# Space Complexity: O(n)