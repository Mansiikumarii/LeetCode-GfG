class Solution {
public:
    bool possible(vector<int>& nums, int limit, int k) {
        int subarray = 1;  // start with 1 subarray
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > limit) {
                subarray++;
                sum = 0;
            }
            sum += nums[i];
        }

        return subarray <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(nums, mid, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
