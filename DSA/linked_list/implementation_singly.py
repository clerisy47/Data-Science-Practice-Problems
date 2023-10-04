class Node:
    def __init__(self, data, next= None):
        self.data = data
        self.next = next

class LinkedList:
    def __init__(self, head=None):
        self.head = head
    
    def print(self):
        if self.head is None:
            print("The Linked list is empty.")
            return
        i = self.head
        while i:
            print(i.data, end="-> ")
            i = i.next
        print("None")

    def size(self):
        count = 0
        i = self.head
        while i:
            count=count+1
            i = i.next
        return count
    
    def insert_at_beginning(self, data):
        node = Node(data, self.head)
        self.head = node

    def insert_at_end(self, data):
        count = 0
        i = self.head
        while i.next:
            i = i.next
        i.next = Node(data, None)

    def insert_at(self, index, data):
        if index<0 or index> self.size():
            raise Exception("Invalid Index")
        count = 0
        i = self.head
        while i:
            if count == index - 1:
                node = Node(data, i.next)
                i.next = node
                break
            i = i.next
            count += 1

    def remove_at(self, index):
        if index<0 or index> self.size():
            raise Exception("Invalid Index")
        count = 0
        i = self.head
        while i:
            if count == index - 1:
                i.next = i.next.next
                break
            i = i.next
            count += 1

    def insert_after_value(self, value, data):
        current = self.head
        while current:
            if current.data == value:
                new_node = Node(data, current.next)
                current.next = new_node
                return
            current = current.next

    def delete_by_value(self, value):
        if self.head is None:
            return

        if self.head.data == value:
            self.head = self.head.next
            return

        current = self.head
        while current.next:
            if current.next.data == value:
                current.next = current.next.next
                return
            current = current.next


    def array_to_linked_list(self, arr):
        self.head= None
        for data in arr:
            self.insert_at_end(data)


 
            