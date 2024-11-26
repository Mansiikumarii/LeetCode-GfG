#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    // Helper function to expand around the center and check for longest palindrome
    string expandAroundCenter(const std::string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // Return the palindrome substring
        return s.substr(left + 1, right - left - 1);
    }

    // Main function to find the longest palindromic substring
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        string longest = "";
        
        for (int i = 0; i < s.length(); ++i) {
            // Odd-length palindrome (expand around the center)
            string palindrome1 = expandAroundCenter(s, i, i);
            if (palindrome1.length() > longest.length()) {
                longest = palindrome1;
            }

            // Even-length palindrome (expand around the center)
            string palindrome2 = expandAroundCenter(s, i, i + 1);
            if (palindrome2.length() > longest.length()) {
                longest = palindrome2;
            }
        }
        
        return longest;
    }
};


