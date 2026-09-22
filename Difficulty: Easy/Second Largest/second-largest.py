class Solution:
    def getSecondLargest(self, arr):
        # code here
        first = second = float("-inf")
        for x in arr:
            if x>first:
                second = first
                first = x
            elif first > x > second:
                second = x
        return -1 if second == float("-inf") else second
        