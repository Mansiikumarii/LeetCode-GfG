class Solution:
    def factorial(self, n: int) -> int:
        # code here
        result = 1
        for i in range (2, n+1):
            result *= i
        return result