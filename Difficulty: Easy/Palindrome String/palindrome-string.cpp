class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
    int n= s.size();
    int st=0;
	int e= n-1;
	
	while(st<=e){
		if(s[st] != s[e]){
			return false;
		}
		else{
			st++;
			e--;
		}
	}
	return true;
    }
};