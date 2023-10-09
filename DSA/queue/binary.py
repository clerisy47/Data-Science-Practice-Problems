# Write a program to print binary numbers from 1 to 10 using Queue.
from collections import deque
queue = deque()
queue.append("1")
for _ in range(10):
    front = queue[0]
    print(front)
    queue.append(front + '0')
    queue.append(front + '1')
    queue.popleft()


