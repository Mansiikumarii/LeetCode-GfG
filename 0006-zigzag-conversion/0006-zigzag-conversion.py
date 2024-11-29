class Solution:
    def convert(self, s: str, numRows: int) -> str:
        # If there is only one row, return the string as is
        if numRows == 1:
            return s
        
        res = ""
        increment = 2 * (numRows - 1)  # The total vertical distance between rows
        
        for r in range(numRows):  # For each row
            for i in range(r, len(s), increment):  # Start at position r and then jump by `increment`
                res += s[i]  # Add the character at position `i`
                
                # For rows other than the first and last, we also need to consider the diagonal character
                if r > 0 and r < numRows - 1:
                    diagonal_idx = i + increment - 2 * r
                    if diagonal_idx < len(s):
                        res += s[diagonal_idx]
        
        return res
