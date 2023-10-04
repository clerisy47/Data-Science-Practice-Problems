class Node:
    def __init__(self, data, next= None, prev=None):
        self.data = data
        self.next = next
        self.prev = prev

class DoublyLinkedList:
    def __init__(self, head=None, tail=None):
        self.head = head
        self.tail = tail

    def print_forward(self):
        if self.head is None:
            print("The Doubly Linked List is empty.")
            return
        i = self.head
        while i:
            print(i.data, end=" <-> ")
            i = i.next
        print("None")

    def print_backward(self):
        if self.tail is None:
            print("The Doubly Linked List is empty.")
            return
        i = self.tail
        while i:
            print(i.data, end=" <-> ")
            i = i.prev
        print("None")

    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = self.tail = new_node
        else:
            new_node.prev = self.tail
            self.tail.next = new_node
            self.tail = new_node

    def prepend(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node

    def delete(self, data):
        if self.head is None:
            return

        i = self.head
        while i:
            if i.data == data:
                if i.prev:
                    i.prev.next = i.next
                else:
                    self.head = i.next

                if i.next:
                    i.next.prev = i.prev
                else:
                    self.tail = i.prev

                return
            i = i.next

    def array_to_linked_list(self, arr):
        self.head= None
        for data in arr:
            self.insert_at_end(data)


