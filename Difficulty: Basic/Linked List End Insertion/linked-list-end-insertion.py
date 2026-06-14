'''    
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''

class Solution:
    def insertAtEnd(self, head, x):
        n = Node(x)
        if not head: return n
        last = head
        while last.next: last = last.next
        last.next = n
        return head