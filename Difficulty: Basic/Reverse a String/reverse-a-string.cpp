// User function Template for C++
class Solution {
  public:
    string reverseString(string s) {
        // code here
        int st=0, e= s.size()-1;
        while(st<e){
            swap(s[st++],s[e--]);
        }
        return s;
    }
};
