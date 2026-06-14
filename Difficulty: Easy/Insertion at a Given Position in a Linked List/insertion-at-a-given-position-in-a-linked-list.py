class Solution:
    def insertPos(self, head, pos, val):
        new = Node(val)
        if pos == 1: new.next = head; return new
        cur = head
        for _ in range(pos - 2):
            cur = cur.next
        new.next, cur.next = cur.next, new
        return head