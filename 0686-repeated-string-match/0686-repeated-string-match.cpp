class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeated = a;
        int count =1;

        while(repeated.length() < b.length()){
            repeated += a;
            count++;
        }
        // Check if b is a substring now or after one more repeat
        if(repeated.find(b) != string::npos) return count;
        repeated += a;

        if (repeated.find(b) != string::npos) return count + 1;

        return -1;
    }
};