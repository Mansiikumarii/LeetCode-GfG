class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxlen = 0;
       for(int i=0; i<n; i++){
        bool hash[256] = {false};
        for(int j=i; j<n; j++){
            if(hash[s[j]])
            break;
            hash[s[j]] = true;
            int len = j-i+1;
            maxlen = max(len , maxlen);
            
        }
       } 
       return maxlen;
    }
};