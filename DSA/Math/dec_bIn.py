def dec_to_bin(num):
    assert int(num) == num, "The number should be an integer" 
    bin = 0   
    i = 0
    while(num != 0):
        rem = num % 2
        bin += rem * (10**i)  
        num = num // 2
        i+=1
    return bin
# Time Complexity : O(log(n))
# Space Complexity: O(1)


def bin_to_dec(num):
    assert int(num) == num, "The number should be an integer" 
    dec = 0   
    i = 0
    while(num != 0):
        rem = num % 10
        dec += rem * (2**i)  
        num = num // 10
        i+=1
    return dec
# Time Complexity : O(log(n))
# Space Complexity: O(1)

print(bin_to_dec(100))