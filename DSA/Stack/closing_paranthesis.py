from implementation_array import Stack

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