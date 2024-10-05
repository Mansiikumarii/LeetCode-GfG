#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

        int result = map[s[s.length() - 1]]; // Get the last character's value

        // Loop from the second last character to the first
        for (int i = s.length() - 2; i >= 0; i--) {
            // If current roman numeral is smaller than the next one, subtract it
            if (map[s[i]] < map[s[i + 1]]) {
                result -= map[s[i]];
            }
            // Otherwise, add it
            else {
                result += map[s[i]];
            }
        }

        return result; // Return the result after the loop
    }
};
