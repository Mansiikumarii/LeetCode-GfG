'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''
class Solution:
    def removeLastNode(self, head):
        # code here
        if not head:
            return None
        if not head.next:
            return None
        second_last = head
        while second_last.next.next:
            second_last = second_last.next
        second_last.next = None
        return head
        