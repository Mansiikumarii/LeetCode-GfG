class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]){
        for(int i=0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) 
            return false;

        int freq1[26] = {0}, freq2[26] = {0};

        // frequency of s1
        for(int i=0; i<s1.length(); i++){
            freq1[s1[i]-'a']++;
        }

        int winSize = s1.size();

        // first window
        for(int i=0; i<winSize; i++){
            freq2[s2[i]-'a']++;
        }
        if(isFreqSame(freq1, freq2)) return true;

        // sliding the window
        for(int i=winSize; i<s2.size(); i++){
            freq2[s2[i]-'a']++;              // include new char
            freq2[s2[i-winSize]-'a']--;      // remove old char
            if(isFreqSame(freq1, freq2)) return true;
        }

        return false;
    }
};
