# Convert decimal number to binary and vice versa
def dec_to_bin(num):
    assert int(num) == num, "The number should be an integer"    
    if num == 0:
        return num
    else:
        return (num%2) + dec_to_bin(num//2)*10 
# Time Complexity : O(log(n))
# Space Complexity: O(n)


def bin_to_dec(num):
    if num == 0:
        return num
    else:
        return (num%10) + bin_to_dec(num//10)*2 
# Time Complexity : O(log(n))
# Space Complexity: O(n)


