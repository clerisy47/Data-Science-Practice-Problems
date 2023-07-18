def check_polygon(n, m):
    # Check if n and m are coprime
    if n % m == 0:
        return "YES"
    else:
        return "NO"

# Read the number of test cases
t = int(input())

# Loop through each test case
for i in range(t):
    # Read the values of n and m
    n, m = map(int, input().split())
    # Check if it is possible to build another polygon
    result = check_polygon(n, m)
    # Print the result
    print(result)