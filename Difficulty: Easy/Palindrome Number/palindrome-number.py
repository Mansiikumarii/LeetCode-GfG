class Solution:
    def isPalindrome(self, n):
		# code here
		s = str(abs(n))
		return s == s[::-1]