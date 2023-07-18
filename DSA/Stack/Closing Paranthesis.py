class Stack:
    def __init__(self, stack=[]) -> None:
        self.stack = stack

    def is_empty(self):
        if len(self.stack)==0:
            return True
        return False
    
    def length(self):
        return len(self.stack)
    
    def push(self, item):
        self.stack.append(item)

    def pop(self):
        if self.is_empty():
            print("Cannot pop as stack is empty")
        else:
            self.stack.pop()

open = ['(','{','[']
close = [')','}',']']
def check(text):
    s = Stack()
    for i in text:
        if i in open:
            s.push(i)
        elif i in close:
            if i not in open and close.index(i)==s.length()-1:
                s.pop()
            else:
                return 'Imbalanced'
    if s.is_empty():
        return "Balanced"
    return 'Imbalanced'
    
text = input("Enter your text.")
print(check(text))