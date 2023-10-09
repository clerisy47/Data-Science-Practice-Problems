from collections import deque

open_brackets = ['(','{','[']
close_brackets = [')','}',']']
def check(text):
    stack = deque()
    for letter in text:
        if letter in open_brackets:
            stack.append(letter)
        elif letter in close_brackets:
            position = close_brackets.index(letter)
            if stack and open_brackets[position]==stack[-1]:
                stack.pop()
            else:
                return 'Imbalanced'
    if len(stack) == 0:
        return "Balanced"
    return 'Imbalanced'
    
if __name__ == "__main__":
    print(check("({a+b})"),     
    check("))((a+b}{"),  
    check("((a+b))"),    
    check("))"),
    check("[a+b]*(x+2y)*{gg+kk}"))