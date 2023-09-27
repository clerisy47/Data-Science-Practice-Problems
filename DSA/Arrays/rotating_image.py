def rotate(self, matrix):
    n = len(matrix)
    for layer in range(n//2):
        first = layer
        last = n - 1 - layer  
        for i in range(first, last):
            # save top layer
            top = matrix[layer][i]
            # left to top
            matrix[layer][i] = matrix[-i-1][layer]
            # bottom to left
            matrix[-i-1][layer] = matrix[-layer-1][-i-1]
            # right to bottom
            matrix[-layer-1][-i-1] = matrix[i][-layer-1]
            # top to right
            matrix[i][-layer-1] = top
# Time complexity: O(n^2)
# Space Complexity: O(1) 
