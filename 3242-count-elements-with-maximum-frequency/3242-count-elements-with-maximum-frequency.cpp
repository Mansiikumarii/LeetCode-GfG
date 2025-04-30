class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        // Count frequencies
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        
        int maxFreq = 0;
        for (auto& x : freq) {
            maxFreq = max(maxFreq, x.second);  // Find max frequency
        }
        
        int total = 0;
        for (auto& x : freq) {
            if (x.second == maxFreq) {
                total += x.second;  // Add count of all elements with max frequency
            }
        }
        
        return total;
    }
};
