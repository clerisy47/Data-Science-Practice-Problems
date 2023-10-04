class Queue:
    def __init__(self, queue=None):
        self.queue = queue

    def is_empty(self):
        return len(self.queue) == 0

    def size(self):
        return len(self.queue)

    def enqueue(self, item):
        self.queue.append(item)

    def dequeue(self):
        if self.is_empty():
            print("Cannot dequeue as queue is empty")
            return None
        else:
            return self.queue.pop(0)
    
    def print_queue(self):
        if self.is_empty():
            print("Queue is empty")
        else:
            print("Queue:", self.queue)












