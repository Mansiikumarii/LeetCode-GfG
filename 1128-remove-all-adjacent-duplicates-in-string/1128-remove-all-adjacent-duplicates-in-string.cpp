class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        for(char c : s){
            if(!result.empty() && result[result.size()-1] == c){
                //Is the current character (c) the same as the last character we just stored in result?
                result.pop_back(); // remove last char if duplicate
            } else {
                result.push_back(c); // keep char
            }
        }
        return result;
    }
};
