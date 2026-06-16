'''
class Node:
    
    def __init__(self, data):
        self.data = data
        self.next = None
'''

class Solution:
    def insertAtBeginning(self, tail, key):
        new_node = Node(key)

        if tail is None:              # Empty list edge case
            new_node.next = new_node  # Points to itself
            return new_node           # new_node is now the tail

        new_node.next = tail.next     # new_node points to current head (tail.next)
        tail.next = new_node          # tail now points to new_node (new head)

        return tail                   # tail remains unchanged, return it