n = int(input("Enter the number of rows in Pascal's triangle: "))

for i in range(n):
    for space in range(n - i + 1):
        print(" ", end="")   
    coeff = 1    
    for j in range(i + 1):
        print(' ', coeff, sep='', end='')  
        coeff = coeff * (i - j) // (j + 1)
    print() 