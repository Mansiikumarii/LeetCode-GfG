// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        string result;
        for(char c : s){
            if(c!='a' && c!='e' && c!= 'i' && c!= 'o' && c!='u' &&
            c!= 'A' && c!= 'E' && c!= 'U' && c!='I' && c!= 'O')
            result += c;
        }
        return result;
    }
};