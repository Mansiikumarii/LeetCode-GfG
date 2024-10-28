#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int left=0, right=0;
        unordered_set<char> seen;
        int maxLength = 0;
        
        while(right < s.length()){
            char c = s[right];
            if(seen.insert(c).second){
                maxLength = max(maxLength , right-left+1);
                right++;
            }
            else{
                while(s[left] != c){
                    seen.erase(s[left]);
                    left++;
                }
                seen.erase(c);
                left++;
            }
        }
    return maxLength;    
    }
};