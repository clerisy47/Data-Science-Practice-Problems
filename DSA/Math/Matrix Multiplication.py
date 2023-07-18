# define the matrices
matrix1 = [[1, 2, 3],
           [4, 5, 6]]

matrix2 = [[7, 8],
           [9, 10],
           [11, 12]]

# create a result matrix filled with zeros
result = [[0, 0],
          [0, 0]]

# iterate through rows of matrix1
for i in range(len(matrix1)):
   # iterate through columns of matrix2
   for j in range(len(matrix1[0])):
       # iterate through rows of matrix2
       for k in range(len(matrix2[0])):
           result[i][k] += matrix1[i][j] * matrix2[j][k]

# print the result matrix
for row in result:
   print(row)