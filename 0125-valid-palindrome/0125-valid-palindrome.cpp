class Solution {
public:
bool validchar(char ch){
    if( (ch >= 'a' && ch<= 'z') || (ch >= 'A' && ch<= 'Z') || (ch>='0' && ch<= '9')){
        return true;
    }
    return false;
}
char toLowerCase(char ch){
    if(ch >= 'A' && ch<= 'Z'){
        return ch-'A'+'a';
    }
    return ch;
}
bool checkPalindrome(string a){
    int s=0, e= a.length()-1;
    while(s<=e){
        if(a[s] != a[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
        
    }
    return true;
}
    bool isPalindrome(string s) {
        //faltu ke character hata do
        string temp = "";
        for(int j=0; j<s.length(); j++){
            if(validchar(s[j])){
                temp.push_back(s[j]);
            }
        }
        //to lower case main kar do
        for(int j=0; j<temp.length(); j++){
            temp[j] = toLowerCase(temp[j]);
        }
        return checkPalindrome(temp);
    }
};