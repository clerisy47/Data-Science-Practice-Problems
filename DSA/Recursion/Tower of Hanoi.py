def tower_of_hanoi(n, source, auxiliary, target):
    if n == 1:
        print("Move disk 1 from source", source, "to target", target)
        return
    tower_of_hanoi(n-1, source, target, auxiliary)
    print("Move disk", n, "from source", source, "to target", target)
    tower_of_hanoi(n-1, auxiliary, source, target)
         
n = 4
tower_of_hanoi(n,'A','B','C')

# Time Complexity: O(2^n)
# Space Complexity: O(n)