
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        int freq[256] = {0};
        
        //count each freq
        for(char c:s){
            freq[c]++;
        }
        //check
        for(char c:s){
            if(freq[c]==1)
            return c;
        }
        return '$';
    }
};