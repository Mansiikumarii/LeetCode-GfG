class Solution {
public:
    bool possible(vector<int>& weights, int limit, int days) {
        int sum = 0;
        int timetaken = 0;
        int n = weights.size();

        for (int i = 0; i < n; i++) {
            if (sum + weights[i] > limit) {
                timetaken++;
                sum = 0;
            }
            sum += weights[i];
        }
        return timetaken + 1 <= days; // +1 because the last split counts too
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0); // typo: "accumlate"

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
