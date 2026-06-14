''' Structure of linked list Node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''
class Solution:
    def getCount(self, head):
        # code here
        count = 0
        current = head
        while current:
            count += 1
            current = current.next
        return count