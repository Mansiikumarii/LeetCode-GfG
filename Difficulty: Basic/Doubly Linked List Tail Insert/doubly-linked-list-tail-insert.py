''' Structure of doubly linked list node
class Node:
    def __init__(self, x):
        self.data = x
        self.next = None
        self.prev = None
'''
class Solution:
    def insertInTail(self, head, data):
        new_node = Node(data)
        
        # If list is empty, new node becomes the head
        if head is None:
            return new_node
        
        # Traverse to the last node
        curr = head
        while curr.next is not None:
            curr = curr.next
        
        # Link the new node at the tail
        curr.next = new_node
        new_node.prev = curr
        
        return head
        
        