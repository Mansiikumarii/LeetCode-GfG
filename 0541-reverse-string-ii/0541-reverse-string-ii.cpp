class Solution {
public:
    string reverseStr(string s, int k) {
        int n= s.size();
       for(int i=0; i<s.size(); i+=2*k){
        int start = i;
        int end =min(i+k-1, n-1);
        while(start < end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
       } 
       return s;
    }
};