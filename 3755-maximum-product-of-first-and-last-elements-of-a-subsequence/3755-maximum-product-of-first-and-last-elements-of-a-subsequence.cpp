class Solution {
public:
    long long maximumProduct(vector<int>& nums, int m) {
        int n = nums.size();
        if (m > n) return -1;

        long long maxProduct = LLONG_MIN;
        long long prefixMin = nums[0];
        long long prefixMax = nums[0];

        for (int j = m - 1; j < n; ++j) {
            // valid i lies in [0, j - m + 1]
            if (j == m - 1) {
                // initialize prefix min/max
                prefixMin = nums[0];
                prefixMax = nums[0];
            } else {
                prefixMin = min(prefixMin, 1LL * nums[j - m + 1]);
                prefixMax = max(prefixMax, 1LL * nums[j - m + 1]);
            }

            maxProduct = max(maxProduct, prefixMin * nums[j]);
            maxProduct = max(maxProduct, prefixMax * nums[j]);
        }

        return maxProduct;
    }
};
