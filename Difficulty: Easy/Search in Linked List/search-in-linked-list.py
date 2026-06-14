'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''

class Solution:
    def searchKey(self, head, key):
        #Code here
        if head is None:
            return False
        if head.data == key:
            return True
        return self.searchKey(head.next,key)