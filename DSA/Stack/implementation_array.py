class Stack:
    def __init__(self, stack=None):
        self.stack = stack

    def is_empty(self):
        if len(self.stack)==0:
            return True
        return False
    
    def size(self):
        return len(self.stack)
    
    def push(self, item):
        self.stack.append(item)

    def pop(self):
        if self.is_empty():
            print("Cannot pop as stack is empty")
        else:
            return self.stack.pop()
        
class Stack:
    def __init__(self, stack=None):
        self.stack = stack if stack is not None else []

    def is_empty(self):
        return len(self.stack) == 0
    
    def size(self):
        return len(self.stack)
    
    def push(self, item):
        self.stack.append(item)

    def pop(self):
        if self.is_empty():
            print("Cannot pop as stack is empty")
            return None
        else:
            return self.stack.pop()
        
    def print(self):
        if self.is_empty():
            print("Stack is empty")
        else:
            print("Queue:", self.stack)

stack = Stack()
stack.push(10)
stack.push(20)
stack.print()  
