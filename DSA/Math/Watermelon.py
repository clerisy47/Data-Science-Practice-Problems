w = int(input())

# Check if it's possible to divide the watermelon into two even parts
if w >= 4 and w % 2 == 0:
    print("YES")
else:
    print("NO")

# Time Complexity : O(1)
# Space Complexity: O(1)