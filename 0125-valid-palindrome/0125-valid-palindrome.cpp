class Solution {
public:
// bool isAlphaNumeric(char c){
// if((c >='0' && c<='9')|| (c>='a' && c<='z')|| (c>='A' && c<= 'Z')){
//     return true;}
//     return false;
// }
    bool isPalindrome(string s) {
//         int start = 0, end = s.size() - 1;
//         while(start<end){
//            if (!isAlphaNumeric(s[start]))
// {
//                 start++; continue;
//             }
//            if (!isAlphaNumeric(s[end]))
// {
//                 end--; continue;
//             } 
//             if(tolower(s[start]) != tolower(s[end])){
//                 return false;
//             }
//             start++;
//              end--;
        
        
//         }
//         return true;
//     }

string temp = "";
        for(auto x: s){
            if(isalnum(x)) temp += tolower(x);
        }
 
        int i = 0, j = temp.size() - 1;
 
        while(i < j){
            if(temp[i] != temp[j]) return false;
 
            i++;
            j--;
        }
 
        return true;
}
};

    