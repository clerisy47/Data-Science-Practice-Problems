from collections import deque
def rev(string):
    stack = deque()
    for letter in string:
        stack.append(letter)
    reversed_string = ''
    while(stack):
        reversed_string += stack.pop()
    return reversed_string

print(rev("Hehe"))