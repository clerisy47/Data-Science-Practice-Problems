matrix1 = [[1, 2, 3],
           [4, 5, 6]]

matrix2 = [[7, 8],
           [9, 10],
           [11, 12]]

result = [[0, 0],
          [0, 0]]

for i in range(len(matrix1)):
   for j in range(len(matrix2[0])):
       for k in range(len(matrix1[0])):
           result[i][j] += matrix1[i][k] * matrix2[k][j]

for row in result:
   print(row)