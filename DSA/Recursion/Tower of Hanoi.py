def towerOfhanoi(n , source, auxiliary, destination):
    if n==1:
        print ("Move disk 1 from source",source,"to destination",destination)
        return
    towerOfhanoi(n-1, source,destination, auxiliary)
    print ("Move disk",n,"from source",source,"to destination",destination)
    towerOfhanoi(n-1, auxiliary, source, destination)
         
n = 4
towerOfhanoi(n,'A','B','C')

# Time Complexity: O(2^n)
# Space Complexity: O(n)