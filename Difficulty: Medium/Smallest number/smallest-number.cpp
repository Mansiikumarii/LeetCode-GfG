class Solution {
  public:
    string smallestNumber(int s, int d) {
        
        // Not possible case
        if (s == 0) {
            if (d == 1) return "0";
            else return "-1";
        }
        
        if (s > 9 * d) return "-1";
        
        string ans = "";
        
        // Fill from right to left
        for (int i = d; i > 0; i--) {
            
            // If remaining sum is enough
            if (s > 9) {
                ans = '9' + ans;
                s -= 9;
            }
            else {
                // Handle first digit carefully
                if (i == 1) {
                    ans = char(s + '0') + ans;
                } else {
                    ans = char((s - 1) + '0') + ans;
                    
                    // fill remaining with 0
                    for (int j = 1; j < i - 1; j++) {
                        ans = '0' + ans;
                    }
                    
                    ans = '1' + ans;
                    break;
                }
                s = 0;
            }
        }
        
        return ans;
    }
};